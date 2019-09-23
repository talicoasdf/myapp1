#ifndef HELPER_H
#define HELPER_H

#include <QObject>
#include <cenvironment.h>
#include <QtNetwork>
#include <cappinfo.h>
#include "./framework/common/extendedconfig.h"

class Helper : public QObject
{
    Q_OBJECT
public:
    static Helper* instance(){
        static Helper instance;
        return &instance;
    }

    Q_INVOKABLE QString getWebRootPath();
    Q_INVOKABLE QString getDefaultWebRootPath();
    Q_INVOKABLE QString getDataRootPath();
    Q_INVOKABLE QString getExternStorageRootPath();
    Q_INVOKABLE QString getInnerStorageRootPath();
    //获取日志级别
    Q_INVOKABLE QString logLevelName();

    //获取data/data/x/www路径
    Q_INVOKABLE QString getDataWebRootPath();
    //文件是否存在
    Q_INVOKABLE bool exists(QString filePath);

    Q_INVOKABLE QString sopid();

    Q_INVOKABLE QJsonObject aboutPhone();

    /**
     * @brief emptyDir 清空文件夹
     * @param path
     */
     Q_INVOKABLE bool emptyDir(const QString &path);

private:
    explicit Helper(QObject *parent = 0);
    Helper(const Helper &) Q_DECL_EQ_DELETE;
    Helper& operator=(Helper client) Q_DECL_EQ_DELETE;
    //拓展配置
    ExtendedConfig *extendConfig;
    CEnvironment *env;
    CAppInfo *appInfo;
};

#endif // HELPER_H
