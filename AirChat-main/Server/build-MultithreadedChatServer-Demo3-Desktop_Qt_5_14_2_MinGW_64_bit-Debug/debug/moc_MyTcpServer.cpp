/****************************************************************************
** Meta object code from reading C++ file 'MyTcpServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MultithreadedChatServer-v220517/MyTcpServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyTcpServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyTcpServer_t {
    QByteArrayData data[10];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyTcpServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyTcpServer_t qt_meta_stringdata_MyTcpServer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MyTcpServer"
QT_MOC_LITERAL(1, 12, 14), // "registerHandle"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "userName"
QT_MOC_LITERAL(4, 37, 7), // "qintptr"
QT_MOC_LITERAL(5, 45, 6), // "handle"
QT_MOC_LITERAL(6, 52, 13), // "forwardHandle"
QT_MOC_LITERAL(7, 66, 10), // "targetName"
QT_MOC_LITERAL(8, 77, 4), // "mesg"
QT_MOC_LITERAL(9, 82, 17) // "closeThreadHandle"

    },
    "MyTcpServer\0registerHandle\0\0userName\0"
    "qintptr\0handle\0forwardHandle\0targetName\0"
    "mesg\0closeThreadHandle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyTcpServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x09 /* Protected */,
       6,    2,   34,    2, 0x09 /* Protected */,
       9,    2,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

       0        // eod
};

void MyTcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyTcpServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->registerHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        case 1: _t->forwardHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->closeThreadHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyTcpServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QTcpServer::staticMetaObject>(),
    qt_meta_stringdata_MyTcpServer.data,
    qt_meta_data_MyTcpServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyTcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyTcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyTcpServer.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int MyTcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
