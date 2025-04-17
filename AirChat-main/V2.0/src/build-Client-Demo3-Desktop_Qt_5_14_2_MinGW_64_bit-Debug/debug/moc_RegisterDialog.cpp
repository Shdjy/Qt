/****************************************************************************
** Meta object code from reading C++ file 'RegisterDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Client-Demo3/RegisterDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RegisterDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RegisterDialog_t {
    QByteArrayData data[15];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RegisterDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RegisterDialog_t qt_meta_stringdata_RegisterDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "RegisterDialog"
QT_MOC_LITERAL(1, 15, 17), // "registerVefSignal"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "email"
QT_MOC_LITERAL(4, 40, 17), // "registerReqSignal"
QT_MOC_LITERAL(5, 58, 3), // "vef"
QT_MOC_LITERAL(6, 62, 8), // "username"
QT_MOC_LITERAL(7, 71, 6), // "passwd"
QT_MOC_LITERAL(8, 78, 14), // "registerHandle"
QT_MOC_LITERAL(9, 93, 17), // "registerSucHandle"
QT_MOC_LITERAL(10, 111, 19), // "registerFaildHandle"
QT_MOC_LITERAL(11, 131, 25), // "on_ButtonRegister_clicked"
QT_MOC_LITERAL(12, 157, 23), // "on_ButtonVerify_clicked"
QT_MOC_LITERAL(13, 181, 16), // "vefTimeoutHandle"
QT_MOC_LITERAL(14, 198, 16) // "reqTimeoutHandle"

    },
    "RegisterDialog\0registerVefSignal\0\0"
    "email\0registerReqSignal\0vef\0username\0"
    "passwd\0registerHandle\0registerSucHandle\0"
    "registerFaildHandle\0on_ButtonRegister_clicked\0"
    "on_ButtonVerify_clicked\0vefTimeoutHandle\0"
    "reqTimeoutHandle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegisterDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    4,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   71,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x0a /* Public */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RegisterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RegisterDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->registerVefSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->registerReqSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->registerHandle(); break;
        case 3: _t->registerSucHandle(); break;
        case 4: _t->registerFaildHandle(); break;
        case 5: _t->on_ButtonRegister_clicked(); break;
        case 6: _t->on_ButtonVerify_clicked(); break;
        case 7: _t->vefTimeoutHandle(); break;
        case 8: _t->reqTimeoutHandle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RegisterDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RegisterDialog::registerVefSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RegisterDialog::*)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RegisterDialog::registerReqSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RegisterDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_RegisterDialog.data,
    qt_meta_data_RegisterDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RegisterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegisterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RegisterDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RegisterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void RegisterDialog::registerVefSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RegisterDialog::registerReqSignal(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
