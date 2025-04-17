/****************************************************************************
** Meta object code from reading C++ file 'ChatBusiness.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Server-Demo3/ChatBusiness.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatBusiness.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatBusiness_t {
    QByteArrayData data[15];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatBusiness_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatBusiness_t qt_meta_stringdata_ChatBusiness = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ChatBusiness"
QT_MOC_LITERAL(1, 13, 5), // "start"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "qintptr"
QT_MOC_LITERAL(4, 28, 6), // "handle"
QT_MOC_LITERAL(5, 35, 15), // "signInSucSignal"
QT_MOC_LITERAL(6, 51, 7), // "account"
QT_MOC_LITERAL(7, 59, 17), // "forwardMesgSignal"
QT_MOC_LITERAL(8, 77, 9), // "toAccount"
QT_MOC_LITERAL(9, 87, 4), // "mesg"
QT_MOC_LITERAL(10, 92, 14), // "sendMesgSignal"
QT_MOC_LITERAL(11, 107, 18), // "disconnectedSignal"
QT_MOC_LITERAL(12, 126, 18), // "disconnectedHandle"
QT_MOC_LITERAL(13, 145, 15), // "signInSucHandle"
QT_MOC_LITERAL(14, 161, 17) // "forwardMesgHandle"

    },
    "ChatBusiness\0start\0\0qintptr\0handle\0"
    "signInSucSignal\0account\0forwardMesgSignal\0"
    "toAccount\0mesg\0sendMesgSignal\0"
    "disconnectedSignal\0disconnectedHandle\0"
    "signInSucHandle\0forwardMesgHandle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatBusiness[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    2,   57,    2, 0x06 /* Public */,
       7,    2,   62,    2, 0x06 /* Public */,
      10,    1,   67,    2, 0x06 /* Public */,
      11,    2,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    2,   75,    2, 0x0a /* Public */,
      13,    2,   80,    2, 0x08 /* Private */,
      14,    2,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    6,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    6,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    6,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    6,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,

       0        // eod
};

void ChatBusiness::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatBusiness *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        case 1: _t->signInSucSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        case 2: _t->forwardMesgSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->sendMesgSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->disconnectedSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        case 5: _t->disconnectedHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        case 6: _t->signInSucHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        case 7: _t->forwardMesgHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatBusiness::*)(qintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatBusiness::start)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatBusiness::*)(QString , qintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatBusiness::signInSucSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatBusiness::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatBusiness::forwardMesgSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChatBusiness::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatBusiness::sendMesgSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ChatBusiness::*)(QString , qintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatBusiness::disconnectedSignal)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChatBusiness::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ChatBusiness.data,
    qt_meta_data_ChatBusiness,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatBusiness::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatBusiness::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatBusiness.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ChatBusiness::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ChatBusiness::start(qintptr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatBusiness::signInSucSignal(QString _t1, qintptr _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChatBusiness::forwardMesgSignal(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChatBusiness::sendMesgSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ChatBusiness::disconnectedSignal(QString _t1, qintptr _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
