/****************************************************************************
** Meta object code from reading C++ file 'NetworkBusiness.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Client-Demo3/NetworkBusiness.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkBusiness.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkBusiness_t {
    QByteArrayData data[29];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkBusiness_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkBusiness_t qt_meta_stringdata_NetworkBusiness = {
    {
QT_MOC_LITERAL(0, 0, 15), // "NetworkBusiness"
QT_MOC_LITERAL(1, 16, 5), // "start"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 17), // "registerSucSignal"
QT_MOC_LITERAL(4, 41, 19), // "registerFaildSignal"
QT_MOC_LITERAL(5, 61, 15), // "signInSucSiganl"
QT_MOC_LITERAL(6, 77, 16), // "signInInitSignal"
QT_MOC_LITERAL(7, 94, 4), // "mesg"
QT_MOC_LITERAL(8, 99, 17), // "signInFaildSignal"
QT_MOC_LITERAL(9, 117, 15), // "newFriendSignal"
QT_MOC_LITERAL(10, 133, 17), // "friendAccountInfo"
QT_MOC_LITERAL(11, 151, 20), // "faildAddFriendSignal"
QT_MOC_LITERAL(12, 172, 13), // "friendAccount"
QT_MOC_LITERAL(13, 186, 16), // "submitMesgSiganl"
QT_MOC_LITERAL(14, 203, 5), // "char*"
QT_MOC_LITERAL(15, 209, 20), // "displayRecMesgSiganl"
QT_MOC_LITERAL(16, 230, 13), // "targetAccount"
QT_MOC_LITERAL(17, 244, 7), // "payload"
QT_MOC_LITERAL(18, 252, 15), // "signInReqHandle"
QT_MOC_LITERAL(19, 268, 7), // "account"
QT_MOC_LITERAL(20, 276, 6), // "passwd"
QT_MOC_LITERAL(21, 283, 17), // "registerVefHandle"
QT_MOC_LITERAL(22, 301, 5), // "email"
QT_MOC_LITERAL(23, 307, 17), // "registerReqHandle"
QT_MOC_LITERAL(24, 325, 3), // "vef"
QT_MOC_LITERAL(25, 329, 8), // "username"
QT_MOC_LITERAL(26, 338, 15), // "addFriendHandle"
QT_MOC_LITERAL(27, 354, 13), // "newMesgHandle"
QT_MOC_LITERAL(28, 368, 14) // "sendMesgHandle"

    },
    "NetworkBusiness\0start\0\0registerSucSignal\0"
    "registerFaildSignal\0signInSucSiganl\0"
    "signInInitSignal\0mesg\0signInFaildSignal\0"
    "newFriendSignal\0friendAccountInfo\0"
    "faildAddFriendSignal\0friendAccount\0"
    "submitMesgSiganl\0char*\0displayRecMesgSiganl\0"
    "targetAccount\0payload\0signInReqHandle\0"
    "account\0passwd\0registerVefHandle\0email\0"
    "registerReqHandle\0vef\0username\0"
    "addFriendHandle\0newMesgHandle\0"
    "sendMesgHandle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkBusiness[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,
       6,    1,   98,    2, 0x06 /* Public */,
       8,    0,  101,    2, 0x06 /* Public */,
       9,    1,  102,    2, 0x06 /* Public */,
      11,    1,  105,    2, 0x06 /* Public */,
      13,    1,  108,    2, 0x06 /* Public */,
      15,    2,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    2,  116,    2, 0x0a /* Public */,
      21,    1,  121,    2, 0x0a /* Public */,
      23,    4,  124,    2, 0x0a /* Public */,
      26,    2,  133,    2, 0x0a /* Public */,
      27,    1,  138,    2, 0x0a /* Public */,
      28,    3,  141,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   17,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   19,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   22,   24,   25,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   19,   12,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   19,   16,   17,

       0        // eod
};

void NetworkBusiness::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetworkBusiness *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->registerSucSignal(); break;
        case 2: _t->registerFaildSignal(); break;
        case 3: _t->signInSucSiganl(); break;
        case 4: _t->signInInitSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->signInFaildSignal(); break;
        case 6: _t->newFriendSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->faildAddFriendSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->submitMesgSiganl((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 9: _t->displayRecMesgSiganl((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->signInReqHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->registerVefHandle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->registerReqHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 13: _t->addFriendHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->newMesgHandle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->sendMesgHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetworkBusiness::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkBusiness::start)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NetworkBusiness::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkBusiness::registerSucSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NetworkBusiness::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkBusiness::registerFaildSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NetworkBusiness::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkBusiness::signInSucSiganl)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NetworkBusiness::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkBusiness::signInInitSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NetworkBusiness::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkBusiness::signInFaildSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (NetworkBusiness::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkBusiness::newFriendSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (NetworkBusiness::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkBusiness::faildAddFriendSignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (NetworkBusiness::*)(char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkBusiness::submitMesgSiganl)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (NetworkBusiness::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkBusiness::displayRecMesgSiganl)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetworkBusiness::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NetworkBusiness.data,
    qt_meta_data_NetworkBusiness,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetworkBusiness::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkBusiness::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkBusiness.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetworkBusiness::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void NetworkBusiness::start()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NetworkBusiness::registerSucSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NetworkBusiness::registerFaildSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void NetworkBusiness::signInSucSiganl()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NetworkBusiness::signInInitSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NetworkBusiness::signInFaildSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void NetworkBusiness::newFriendSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void NetworkBusiness::faildAddFriendSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void NetworkBusiness::submitMesgSiganl(char * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void NetworkBusiness::displayRecMesgSiganl(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
