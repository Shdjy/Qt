/****************************************************************************
** Meta object code from reading C++ file 'logindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Client-v220517/logindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginDialog_t {
    QByteArrayData data[10];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginDialog_t qt_meta_stringdata_LoginDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LoginDialog"
QT_MOC_LITERAL(1, 12, 22), // "registerUserNameSignal"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "userName"
QT_MOC_LITERAL(4, 45, 10), // "exitSignal"
QT_MOC_LITERAL(5, 56, 21), // "connectedFailedhandle"
QT_MOC_LITERAL(6, 78, 24), // "registerSucccessedHandle"
QT_MOC_LITERAL(7, 103, 20), // "registerFailedHandle"
QT_MOC_LITERAL(8, 124, 22), // "on_LoginButton_clicked"
QT_MOC_LITERAL(9, 147, 21) // "on_ExitButton_clicked"

    },
    "LoginDialog\0registerUserNameSignal\0\0"
    "userName\0exitSignal\0connectedFailedhandle\0"
    "registerSucccessedHandle\0registerFailedHandle\0"
    "on_LoginButton_clicked\0on_ExitButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   53,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->registerUserNameSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->exitSignal(); break;
        case 2: _t->connectedFailedhandle(); break;
        case 3: _t->registerSucccessedHandle(); break;
        case 4: _t->registerFailedHandle(); break;
        case 5: _t->on_LoginButton_clicked(); break;
        case 6: _t->on_ExitButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoginDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginDialog::registerUserNameSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoginDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginDialog::exitSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LoginDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_LoginDialog.data,
    qt_meta_data_LoginDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void LoginDialog::registerUserNameSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LoginDialog::exitSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
