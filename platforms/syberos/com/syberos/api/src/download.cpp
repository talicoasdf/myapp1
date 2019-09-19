#include "download.h"
#include "helper.h"

#include <QNetworkAccessManager>
#include <QJsonObject>
#include <QDir>
#include <QObject>
#include <QDebug>
#include <QFile>

//key 既是downloadID也是callbackId
static QMap<QString, TaskInfo*> tasks;
// 防止并发，文件名重复导致数据写入到同一个文件内 先缓存文件名(文件路径) key 文件名(文件路径) val 文件名(文件路径)
static QMap<QString, QString> fileNames;


QString getDownloadPath(DownloadManager::Storage storage){
    Helper *helper = Helper::instance();
    QString sopid = helper->sopid();

    QString basePath = helper->getInnerStorageRootPath();
    if(storage==DownloadManager::Extended){
        basePath = helper->getExternStorageRootPath();
    }

    QString downloadPath = basePath + "/" + sopid;
    if(!helper->exists(downloadPath)){
        QDir dir(downloadPath);
        dir.mkpath(downloadPath);
    }
    return downloadPath;
}

QJsonObject successJson(QString callbackId, QString path, int status, qint64 received, qint64 total){
    QJsonObject json;
    json.insert("downloadID", callbackId);
    json.insert("path", path);
    json.insert("status", status);
    json.insert("received", received);
    json.insert("total", total);
    return json;
}


int Download::typeId = qRegisterMetaType<Download *>();

Download::Download()
{
}

Download::~Download() {
    QMap<QString, TaskInfo*>::ConstIterator it = tasks.begin();
    for(; it!=tasks.end(); it++){
        removeTask(it.key());
    }
    tasks.clear();
    fileNames.clear();
}



void Download::request(QString callbackId, QString actionName, QVariantMap params)
{
    qDebug() << Q_FUNC_INFO << "callbackId" << callbackId << "actionName" << actionName << "params" << params << endl;

    if (actionName == "start") {
        start(callbackId, params.value("url").toString(), params.value("name").toString(), params.value("storage").toString());
    } else if (actionName == "cancel"){
        cancel(callbackId, params.value("downloadID").toString());
    } else {
        emit failed(callbackId.toLong(), 500, "Invalid call");
    }
}

void Download::submit(QString typeID,QString callBackID,QString actionName,QVariant dataRowList, QVariant attachementes){
    Q_UNUSED(typeID)
    Q_UNUSED(callBackID)
    Q_UNUSED(actionName)
    Q_UNUSED(dataRowList)
    Q_UNUSED(attachementes)
}

void Download::start(QString callbackId, QString url, QString name, QString storage){
    // 检查网络
    if (!netWorkConnected()) {
        emit failed(callbackId.toLong(),NETWORK_ERROR,ErrorInfo::m_errorCode.value(NETWORK_ERROR));
        return;
    }

    if (name.isEmpty()) {
        name = callbackId;
    }
    qDebug() << Q_FUNC_INFO << "url:" << url << "name:" << name << endl;

    DownloadManager *downloadManager = new DownloadManager(this);
    //设置下载ID
    downloadManager->setDownloadId(callbackId);
    //设置存储位置
    storage = storage.toLower();
    if(storage==STORAGE_INTERNAL){
        downloadManager->setStorage(DownloadManager::Internal);
    }else if(storage==STORAGE_EXTENDED){
        downloadManager->setStorage(DownloadManager::Extended);
    }

    connect(downloadManager, &DownloadManager::signalDownloadProcess, this, &Download::onDownloadProcess);
    connect(downloadManager, &DownloadManager::signalReplyFinished, this, &Download::onReplyFinished);
    connect(downloadManager, &DownloadManager::signalDownloadError, this, &Download::onDownloadError);

    TaskInfo *taskInfo = new TaskInfo();
    taskInfo->downloadID = callbackId;
    taskInfo->downloadManager = downloadManager;
    tasks.insert(callbackId, taskInfo);

    QString basePath = getDownloadPath(downloadManager->getStorage());
    QString path = basePath + "/" + name;

    // 判断当前文件是否重复，如果重复名称添加序号
    QStringList nameSplit = name.split(".");
    int i = 1;
    while (QFile::exists(path)
           || QFile::exists(path + downloadManager->getDownloadFileSuffix())
           || fileNames.value(path) != NULL) {
        if (nameSplit.size() > 1) {
            path = basePath + "/" + nameSplit[nameSplit.size() - 2] + "(" + QString::number(i) + ")." + nameSplit[nameSplit.size() - 1];
        } else {
            path = basePath + "/" + nameSplit[nameSplit.size() - 1] + "(" + QString::number(i) + ")";
        }
        i++;
    }
    // add缓存文件路径
    fileNames.insert(path, path);

    downloadManager->downloadFile(url, path);
    QJsonObject json = successJson(callbackId, path, Started, 0, 0);
    emit success(callbackId.toLong(), json);
}

void Download::cancel(QString callbackId, QString downloadID){
    if (downloadID == "") {
        emit failed(callbackId.toLong(), 500, "downloadID为空");
        return;
    }
    if (!tasks.contains(downloadID)) {
        emit failed(callbackId.toLong(), 500, "下载任务不存在或已完成");
        return;
    }
    TaskInfo *taskInfo = tasks.value(downloadID);

    // 删除缓存文件路径
    fileNames.remove(taskInfo->downloadManager->getMPath());

    taskInfo->downloadManager->closeDownload();

    QJsonObject json;
    json.insert("result", true);
    emit success(callbackId.toLong(), json);
}


TaskInfo* Download::findTaskInfo(DownloadManager *downloadManager){
    QMap<QString, TaskInfo*>::ConstIterator it = tasks.begin();
    for(; it!=tasks.end(); it++){
        TaskInfo *taskInfo = it.value();
        if(taskInfo->downloadManager == downloadManager){
            return taskInfo;
        }
    }
    return NULL;
}

void Download::removeTask(QString downloadId){
    if(tasks.contains(downloadId)){
        TaskInfo *taskInfo = tasks.value(downloadId);
        if(taskInfo!=NULL){
            disconnect(taskInfo->downloadManager, &DownloadManager::signalDownloadProcess, this, &Download::onDownloadProcess);
            disconnect(taskInfo->downloadManager, &DownloadManager::signalReplyFinished, this, &Download::onReplyFinished);
            disconnect(taskInfo->downloadManager, &DownloadManager::signalDownloadError, this, &Download::onDownloadError);
            tasks.remove(downloadId);
            delete taskInfo;
            taskInfo = NULL;
        }
    }
}


// 更新下载进度;
void Download::onDownloadProcess(QString downloadId, QString path, qint64 bytesReceived, qint64 bytesTotal) {
    QJsonObject json = successJson(downloadId, path, Downloading, bytesReceived, bytesTotal);
    qDebug() << Q_FUNC_INFO << "downloadProgress" << json << endl;
    emit success(downloadId.toLong(), json);
}


void Download::onReplyFinished(QString downloadId, QString path, int statusCode, QString errorMessage){
    qDebug() << Q_FUNC_INFO << "download finished " << statusCode << errorMessage << endl;

    qint64 received = 0;
    qint64 total = 0;
    TaskInfo *taskInfo = tasks.value(downloadId);
    if(taskInfo!=NULL){
        received = taskInfo->downloadManager->getBytesReceived();
        total = taskInfo->downloadManager->getBytesTotal();
    }

    // 删除缓存文件路径
    fileNames.remove(taskInfo->downloadManager->getMPath());

    // 根据状态码判断当前下载是否出错;
    if (statusCode > 200 && statusCode < 400) {
        qDebug() << Q_FUNC_INFO << "download failed " << statusCode << errorMessage << endl;
        emit failed(downloadId.toLong(), statusCode, errorMessage);
    }
    else {
        QJsonObject json = successJson(downloadId, path, Completed, received, total);

        qDebug() << Q_FUNC_INFO << "download success " << statusCode << errorMessage << endl;
        emit success(downloadId.toLong(), json);
    }
    removeTask(downloadId);
}

void Download::onDownloadError(QString downloadId, QNetworkReply::NetworkError code, QString error){
    qDebug() << Q_FUNC_INFO << "download failed " << code << error << endl;
    emit failed(downloadId.toLong(), 500, error);
    removeTask(downloadId);
}
