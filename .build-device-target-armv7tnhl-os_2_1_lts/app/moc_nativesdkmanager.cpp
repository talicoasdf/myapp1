/****************************************************************************
** Meta object code from reading C++ file 'nativesdkmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../platforms/syberos/com/syberos/api/src/framework/nativesdkmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nativesdkmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NativeSdkManager_t {
    QByteArrayData data[28];
    char stringdata[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NativeSdkManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NativeSdkManager_t qt_meta_stringdata_NativeSdkManager = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 7),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 10),
QT_MOC_LITERAL(4, 37, 6),
QT_MOC_LITERAL(5, 44, 6),
QT_MOC_LITERAL(6, 51, 9),
QT_MOC_LITERAL(7, 61, 8),
QT_MOC_LITERAL(8, 70, 8),
QT_MOC_LITERAL(9, 79, 11),
QT_MOC_LITERAL(10, 91, 6),
QT_MOC_LITERAL(11, 98, 9),
QT_MOC_LITERAL(12, 108, 10),
QT_MOC_LITERAL(13, 119, 4),
QT_MOC_LITERAL(14, 124, 7),
QT_MOC_LITERAL(15, 132, 6),
QT_MOC_LITERAL(16, 139, 10),
QT_MOC_LITERAL(17, 150, 10),
QT_MOC_LITERAL(18, 161, 6),
QT_MOC_LITERAL(19, 168, 6),
QT_MOC_LITERAL(20, 175, 11),
QT_MOC_LITERAL(21, 187, 13),
QT_MOC_LITERAL(22, 201, 11),
QT_MOC_LITERAL(23, 213, 7),
QT_MOC_LITERAL(24, 221, 14),
QT_MOC_LITERAL(25, 236, 10),
QT_MOC_LITERAL(26, 247, 4),
QT_MOC_LITERAL(27, 252, 3)
    },
    "NativeSdkManager\0success\0\0responseID\0"
    "result\0failed\0errorCode\0errorMsg\0"
    "progress\0totalLength\0status\0subscribe\0"
    "handleName\0data\0request\0typeID\0"
    "callBackID\0actionName\0params\0submit\0"
    "dataRowList\0attachementes\0getUiSource\0"
    "loadQml\0parentPageName\0parentName\0"
    "type\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NativeSdkManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    3,   64,    2, 0x06 /* Public */,
       8,    4,   71,    2, 0x06 /* Public */,
      11,    2,   80,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    4,   85,    2, 0x02 /* Public */,
      19,    5,   94,    2, 0x02 /* Public */,
      22,    2,  105,    2, 0x02 /* Public */,
      23,    4,  110,    2, 0x02 /* Public */,
      27,    1,  119,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Long, QMetaType::QVariant,    3,    4,
    QMetaType::Void, QMetaType::Long, QMetaType::Long, QMetaType::QString,    3,    6,    7,
    QMetaType::Void, QMetaType::Long, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    9,    8,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   12,   13,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QVariantMap,   15,   16,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant,   15,   16,   17,   20,   21,
    QMetaType::QObjectStar, QMetaType::QString, QMetaType::QString,   15,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   15,   24,   25,   26,
    QMetaType::Void, QMetaType::QUrl,   27,

       0        // eod
};

void NativeSdkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NativeSdkManager *_t = static_cast<NativeSdkManager *>(_o);
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 1: _t->failed((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->progress((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 3: _t->subscribe((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 4: _t->request((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariantMap(*)>(_a[4]))); break;
        case 5: _t->submit((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4])),(*reinterpret_cast< QVariant(*)>(_a[5]))); break;
        case 6: { QObject* _r = _t->getUiSource((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 7: _t->loadQml((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 8: _t->url((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NativeSdkManager::*_t)(long , QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NativeSdkManager::success)) {
                *result = 0;
            }
        }
        {
            typedef void (NativeSdkManager::*_t)(long , long , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NativeSdkManager::failed)) {
                *result = 1;
            }
        }
        {
            typedef void (NativeSdkManager::*_t)(long , const int , const int , const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NativeSdkManager::progress)) {
                *result = 2;
            }
        }
        {
            typedef void (NativeSdkManager::*_t)(QString , QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NativeSdkManager::subscribe)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject NativeSdkManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NativeSdkManager.data,
      qt_meta_data_NativeSdkManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *NativeSdkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NativeSdkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NativeSdkManager.stringdata))
        return static_cast<void*>(const_cast< NativeSdkManager*>(this));
    return QObject::qt_metacast(_clname);
}

int NativeSdkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void NativeSdkManager::success(long _t1, QVariant _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NativeSdkManager::failed(long _t1, long _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NativeSdkManager::progress(long _t1, const int _t2, const int _t3, const int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NativeSdkManager::subscribe(QString _t1, QVariant _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
