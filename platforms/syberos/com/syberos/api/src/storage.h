#ifndef STORAGE_H
#define STORAGE_H

#include <ccryptostoragemanager.h>
#include "framework/nativesdkhandlerbase.h"

class Storage : public NativeSdkHandlerBase
{
    Q_OBJECT
public:
    Q_INVOKABLE Storage();
    ~Storage();
    void request(QString callBackID,QString actionName,QVariantMap params);
    void submit(QString typeID,QString callBackID,QString actionName,QVariant dataRowList, QVariant attachementes);

    /**
     * @brief setItem 该方法可以通过键值对的形式将数据存储到本地。同时可以通过该方法，更新已有的数据。
     * @param callbackId 回调ID，用于标识每一次的调用
     * @param key 键名
     * @param value 键值
     */
    void setItem(QString callbackId, QString key, QVariant value);
    /**
     * @brief getItem 传入键名返回对应的键值
     * @param callbackId 回调ID，用于标识每一次的调用
     * @param key 键名
     */
    void getItem(QString callbackId, QString key);
    /**
     * @brief removeItem 传入一个键名将会删除本地存储中对应的键值
     * @param callbackId 回调ID，用于标识每一次的调用
     * @param key 键名
     */
    void removeItem(QString callbackId, QString key);
    /**
     * @brief getAllKeys 返回一个包含全部已存储项键名的数组
     * @param callbackId 回调ID，用于标识每一次的调用
     */
    void getAllKeys(QString callbackId);

    static int typeId;

private:
    CCryptoStorageManager* manager;
};

#endif // STORAGE_H
