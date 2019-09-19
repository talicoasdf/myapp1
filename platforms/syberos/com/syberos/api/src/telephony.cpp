#include "telephony.h"
#include <cgui_application.h>
#include <QDebug>

int Telephony::typeId = qRegisterMetaType<Telephony *>();

Telephony::Telephony()
{

}

Telephony::~Telephony(){

}


void Telephony::request(QString callBackID,QString actionName,QVariantMap params){
    using namespace SYBEROS;

    qDebug() << Q_FUNC_INFO << "actionName:" << actionName << "params:" << params << endl;
    if (actionName == "dial") {
        QString tel = params.value("tel").toString();
        qApp->openUrl("dial://showdialpage?" + tel);
        emit success(callBackID.toLong(), "");
    }else{
        emit failed(callBackID.toLong(), 500, "Invalid call");
    }
}

void Telephony::submit(QString typeID,QString callBackID,QString actionName,QVariant dataRowList, QVariant attachementes){
    Q_UNUSED(typeID);
    Q_UNUSED(callBackID);
    Q_UNUSED(actionName);
    Q_UNUSED(dataRowList);
    Q_UNUSED(attachementes);
}
