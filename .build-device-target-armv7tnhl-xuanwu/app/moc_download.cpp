/****************************************************************************
** Meta object code from reading C++ file 'download.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../platforms/syberos/com/syberos/api/src/download.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'download.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Download_t {
    QByteArrayData data[14];
    char stringdata[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Download_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Download_t qt_meta_stringdata_Download = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 17),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 10),
QT_MOC_LITERAL(4, 39, 4),
QT_MOC_LITERAL(5, 44, 8),
QT_MOC_LITERAL(6, 53, 5),
QT_MOC_LITERAL(7, 59, 15),
QT_MOC_LITERAL(8, 75, 10),
QT_MOC_LITERAL(9, 86, 12),
QT_MOC_LITERAL(10, 99, 15),
QT_MOC_LITERAL(11, 115, 27),
QT_MOC_LITERAL(12, 143, 4),
QT_MOC_LITERAL(13, 148, 5)
    },
    "Download\0onDownloadProcess\0\0downloadId\0"
    "path\0received\0total\0onReplyFinished\0"
    "statusCode\0errorMessage\0onDownloadError\0"
    "QNetworkReply::NetworkError\0code\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Download[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   55, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x0a /* Public */,
       7,    4,   38,    2, 0x0a /* Public */,
      10,    3,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::LongLong, QMetaType::LongLong,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,    3,    4,    8,    9,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11, QMetaType::QString,    3,   12,   13,

 // constructors: parameters
    0x80000000 | 2,

 // constructors: name, argc, parameters, tag, flags
       0,    0,   54,    2, 0x0e /* Public */,

       0        // eod
};

void Download::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Download *_r = new Download();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        Download *_t = static_cast<Download *>(_o);
        switch (_id) {
        case 0: _t->onDownloadProcess((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4]))); break;
        case 1: _t->onReplyFinished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->onDownloadError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject Download::staticMetaObject = {
    { &NativeSdkHandlerBase::staticMetaObject, qt_meta_stringdata_Download.data,
      qt_meta_data_Download,  qt_static_metacall, 0, 0}
};


const QMetaObject *Download::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Download::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Download.stringdata))
        return static_cast<void*>(const_cast< Download*>(this));
    return NativeSdkHandlerBase::qt_metacast(_clname);
}

int Download::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NativeSdkHandlerBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
