/****************************************************************************
** Meta object code from reading C++ file 'fileutil.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../platforms/syberos/com/syberos/api/src/util/fileutil.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileutil.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileUtil_t {
    QByteArrayData data[18];
    char stringdata[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileUtil_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileUtil_t qt_meta_stringdata_FileUtil = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 4),
QT_MOC_LITERAL(2, 14, 0),
QT_MOC_LITERAL(3, 15, 7),
QT_MOC_LITERAL(4, 23, 8),
QT_MOC_LITERAL(5, 32, 4),
QT_MOC_LITERAL(6, 37, 8),
QT_MOC_LITERAL(7, 46, 13),
QT_MOC_LITERAL(8, 60, 8),
QT_MOC_LITERAL(9, 69, 18),
QT_MOC_LITERAL(10, 88, 6),
QT_MOC_LITERAL(11, 95, 9),
QT_MOC_LITERAL(12, 105, 7),
QT_MOC_LITERAL(13, 113, 8),
QT_MOC_LITERAL(14, 122, 11),
QT_MOC_LITERAL(15, 134, 6),
QT_MOC_LITERAL(16, 141, 6),
QT_MOC_LITERAL(17, 148, 4)
    },
    "FileUtil\0move\0\0srcPath\0destPath\0copy\0"
    "fileList\0QFileInfoList\0fileType\0"
    "FileUtil::FileType\0remove\0recursive\0"
    "getInfo\0FileInfo\0getInfoSize\0exists\0"
    "chmodr\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileUtil[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x02 /* Public */,
       5,    2,   64,    2, 0x02 /* Public */,
       6,    1,   69,    2, 0x02 /* Public */,
       8,    1,   72,    2, 0x02 /* Public */,
      10,    2,   75,    2, 0x02 /* Public */,
      12,    1,   80,    2, 0x02 /* Public */,
      14,    1,   83,    2, 0x02 /* Public */,
      15,    1,   86,    2, 0x02 /* Public */,
      16,    1,   89,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    3,    4,
    0x80000000 | 7, QMetaType::QString,    3,
    0x80000000 | 9, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,    3,   11,
    0x80000000 | 13, QMetaType::QString,    3,
    QMetaType::LongLong, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,   17,

       0        // eod
};

void FileUtil::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileUtil *_t = static_cast<FileUtil *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->move((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->copy((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { QFileInfoList _r = _t->fileList((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileInfoList*>(_a[0]) = _r; }  break;
        case 3: { FileUtil::FileType _r = _t->fileType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< FileUtil::FileType*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->remove((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { FileInfo _r = _t->getInfo((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< FileInfo*>(_a[0]) = _r; }  break;
        case 6: { qint64 _r = _t->getInfoSize((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->exists((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->chmodr((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject FileUtil::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileUtil.data,
      qt_meta_data_FileUtil,  qt_static_metacall, 0, 0}
};


const QMetaObject *FileUtil::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileUtil::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileUtil.stringdata))
        return static_cast<void*>(const_cast< FileUtil*>(this));
    return QObject::qt_metacast(_clname);
}

int FileUtil::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
