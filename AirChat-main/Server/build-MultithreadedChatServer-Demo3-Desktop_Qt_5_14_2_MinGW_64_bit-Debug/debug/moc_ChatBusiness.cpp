/****************************************************************************
** Meta object code from reading C++ file 'ChatBusiness.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MultithreadedChatServer-v220517/ChatBusiness.h"
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
    QByteArrayData data[18];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatBusiness_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatBusiness_t qt_meta_stringdata_ChatBusiness = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ChatBusiness"
QT_MOC_LITERAL(1, 13, 14), // "registerSiganl"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "userName"
QT_MOC_LITERAL(4, 38, 7), // "qintptr"
QT_MOC_LITERAL(5, 46, 6), // "handle"
QT_MOC_LITERAL(6, 53, 13), // "forwardSiganl"
QT_MOC_LITERAL(7, 67, 10), // "targetName"
QT_MOC_LITERAL(8, 78, 4), // "mesg"
QT_MOC_LITERAL(9, 83, 10), // "sendSiganl"
QT_MOC_LITERAL(10, 94, 14), // "removeAndClose"
QT_MOC_LITERAL(11, 109, 23), // "registerSuccessedSiganl"
QT_MOC_LITERAL(12, 133, 20), // "registerFailedSiganl"
QT_MOC_LITERAL(13, 154, 16), // "sendFailedSiganl"
QT_MOC_LITERAL(14, 171, 5), // "start"
QT_MOC_LITERAL(15, 177, 20), // "socketRegisterHandle"
QT_MOC_LITERAL(16, 198, 19), // "socketForwardHandle"
QT_MOC_LITERAL(17, 218, 18) // "disconnectedHandle"

    },
    "ChatBusiness\0registerSiganl\0\0userName\0"
    "qintptr\0handle\0forwardSiganl\0targetName\0"
    "mesg\0sendSiganl\0removeAndClose\0"
    "registerSuccessedSiganl\0registerFailedSiganl\0"
    "sendFailedSiganl\0start\0socketRegisterHandle\0"
    "socketForwardHandle\0disconnectedHandle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatBusiness[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       6,    2,   74,    2, 0x06 /* Public */,
       9,    1,   79,    2, 0x06 /* Public */,
      10,    2,   82,    2, 0x06 /* Public */,
      11,    1,   87,    2, 0x06 /* Public */,
      12,    0,   90,    2, 0x06 /* Public */,
      13,    1,   91,    2, 0x06 /* Public */,
      14,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    2,   97,    2, 0x09 /* Protected */,
      16,    2,  102,    2, 0x09 /* Protected */,
      17,    2,  107,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

       0        // eod
};

void ChatBusiness::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatBusiness *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->registerSiganl((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        case 1: _t->forwardSiganl((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->sendSiganl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->removeAndClose((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        case 4: _t->registerSuccessedSiganl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->registerFailedSiganl(); break;
        case 6: _t->sendFailedSiganl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->start((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        case 8: _t->socketRegisterHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        case 9: _t->socketForwardHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->disconnectedHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qintptr(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatBusiness::*)(QString , qintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatBusiness::registerSiganl)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatBusiness::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatBusiness::forwardSiganl)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatBusiness::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatBusiness::sendSiganl)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChatBusiness::*)(QString , qintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatBusiness::removeAndClose)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ChatBusiness::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatBusiness::registerSuccessedSiganl)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ChatBusiness::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatBusiness::registerFailedSiganl)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ChatBusiness::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatBusiness::sendFailedSiganl)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ChatBusiness::*)(qintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatBusiness::start)) {
                *result = 7;
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ChatBusiness::registerSiganl(QString _t1, qintptr _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatBusiness::forwardSiganl(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChatBusiness::sendSiganl(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChatBusiness::removeAndClose(QString _t1, qintptr _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ChatBusiness::registerSuccessedSiganl(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ChatBusiness::registerFailedSiganl()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ChatBusiness::sendFailedSiganl(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ChatBusiness::start(qintptr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
