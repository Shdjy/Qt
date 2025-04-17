/****************************************************************************
** Meta object code from reading C++ file 'MyTcpSocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Server-Demo3/MyTcpSocket.h"
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
    QByteArrayData data[15];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyTcpSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyTcpSocket_t qt_meta_stringdata_MyTcpSocket = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MyTcpSocket"
QT_MOC_LITERAL(1, 12, 15), // "signInSucSignal"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "account"
QT_MOC_LITERAL(4, 37, 7), // "qintptr"
QT_MOC_LITERAL(5, 45, 6), // "handle"
QT_MOC_LITERAL(6, 52, 18), // "forwardMesgProcess"
QT_MOC_LITERAL(7, 71, 9), // "toAccount"
QT_MOC_LITERAL(8, 81, 4), // "mesg"
QT_MOC_LITERAL(9, 86, 18), // "disconnectedSignal"
QT_MOC_LITERAL(10, 105, 15), // "newFriendSignal"
QT_MOC_LITERAL(11, 121, 13), // "friendAccount"
QT_MOC_LITERAL(12, 135, 14), // "sendMesgHandle"
QT_MOC_LITERAL(13, 150, 15), // "readyReadHandle"
QT_MOC_LITERAL(14, 166, 18) // "disconnectedHandle"

    },
    "MyTcpSocket\0signInSucSignal\0\0account\0"
    "qintptr\0handle\0forwardMesgProcess\0"
    "toAccount\0mesg\0disconnectedSignal\0"
    "newFriendSignal\0friendAccount\0"
    "sendMesgHandle\0readyReadHandle\0"
    "disconnectedHandle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyTcpSocket[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    2,   54,    2, 0x06 /* Public */,
       9,    2,   59,    2, 0x06 /* Public */,
      10,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   69,    2, 0x0a /* Public */,
      13,    0,   72,    2, 0x08 /* Private */,
      14,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyTcpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyTcpSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signInSucSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        case 1: _t->forwardMesgProcess((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->disconnectedSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        case 3: _t->newFriendSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->sendMesgHandle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->readyReadHandle(); break;
        case 6: _t->disconnectedHandle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyTcpSocket::*)(QString , qintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::signInSucSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyTcpSocket::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::forwardMesgProcess)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyTcpSocket::*)(QString , qintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::disconnectedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MyTcpSocket::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::newFriendSignal)) {
                *result = 3;
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
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MyTcpSocket::signInSucSignal(QString _t1, qintptr _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyTcpSocket::forwardMesgProcess(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyTcpSocket::disconnectedSignal(QString _t1, qintptr _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyTcpSocket::newFriendSignal(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
