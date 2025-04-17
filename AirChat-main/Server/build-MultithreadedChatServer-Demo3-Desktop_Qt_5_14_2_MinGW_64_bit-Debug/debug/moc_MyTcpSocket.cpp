/****************************************************************************
** Meta object code from reading C++ file 'MyTcpSocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MultithreadedChatServer-v220517/MyTcpSocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyTcpSocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyTcpSocket_t {
    QByteArrayData data[16];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyTcpSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyTcpSocket_t qt_meta_stringdata_MyTcpSocket = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MyTcpSocket"
QT_MOC_LITERAL(1, 12, 14), // "registerSignal"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "userName"
QT_MOC_LITERAL(4, 37, 7), // "qintptr"
QT_MOC_LITERAL(5, 45, 6), // "handle"
QT_MOC_LITERAL(6, 52, 13), // "forwardSignal"
QT_MOC_LITERAL(7, 66, 10), // "targetName"
QT_MOC_LITERAL(8, 77, 4), // "mesg"
QT_MOC_LITERAL(9, 82, 18), // "disconnectedSiganl"
QT_MOC_LITERAL(10, 101, 15), // "readyReadHandle"
QT_MOC_LITERAL(11, 117, 18), // "disconnectedHandle"
QT_MOC_LITERAL(12, 136, 23), // "registerSuccessedHandle"
QT_MOC_LITERAL(13, 160, 20), // "registerFailedHandle"
QT_MOC_LITERAL(14, 181, 10), // "sendHandle"
QT_MOC_LITERAL(15, 192, 16) // "sendFailedHandle"

    },
    "MyTcpSocket\0registerSignal\0\0userName\0"
    "qintptr\0handle\0forwardSignal\0targetName\0"
    "mesg\0disconnectedSiganl\0readyReadHandle\0"
    "disconnectedHandle\0registerSuccessedHandle\0"
    "registerFailedHandle\0sendHandle\0"
    "sendFailedHandle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyTcpSocket[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       6,    2,   64,    2, 0x06 /* Public */,
       9,    2,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   74,    2, 0x09 /* Protected */,
      11,    0,   75,    2, 0x09 /* Protected */,
      12,    1,   76,    2, 0x0a /* Public */,
      13,    0,   79,    2, 0x0a /* Public */,
      14,    1,   80,    2, 0x0a /* Public */,
      15,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void MyTcpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyTcpSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->registerSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        case 1: _t->forwardSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->disconnectedSiganl((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        case 3: _t->readyReadHandle(); break;
        case 4: _t->disconnectedHandle(); break;
        case 5: _t->registerSuccessedHandle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->registerFailedHandle(); break;
        case 7: _t->sendHandle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->sendFailedHandle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyTcpSocket::*)(QString , qintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::registerSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyTcpSocket::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::forwardSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyTcpSocket::*)(QString , qintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::disconnectedSiganl)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyTcpSocket::staticMetaObject = { {
    QMetaObject::SuperData::link<QTcpSocket::staticMetaObject>(),
    qt_meta_stringdata_MyTcpSocket.data,
    qt_meta_data_MyTcpSocket,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyTcpSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyTcpSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyTcpSocket.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int MyTcpSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
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
void MyTcpSocket::registerSignal(QString _t1, qintptr _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyTcpSocket::forwardSignal(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyTcpSocket::disconnectedSiganl(QString _t1, qintptr _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
