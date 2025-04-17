/****************************************************************************
** Meta object code from reading C++ file 'chatwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Client-v220517/chatwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatWidget_t {
    QByteArrayData data[12];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatWidget_t qt_meta_stringdata_ChatWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ChatWidget"
QT_MOC_LITERAL(1, 11, 21), // "connectedFailedSignal"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 23), // "registerSuccessedSignal"
QT_MOC_LITERAL(4, 58, 20), // "registerFailedSignal"
QT_MOC_LITERAL(5, 79, 18), // "disconnectedHandle"
QT_MOC_LITERAL(6, 98, 22), // "connectedTimeoutHandle"
QT_MOC_LITERAL(7, 121, 15), // "readyReadHandle"
QT_MOC_LITERAL(8, 137, 19), // "connectServerHandle"
QT_MOC_LITERAL(9, 157, 8), // "userName"
QT_MOC_LITERAL(10, 166, 10), // "exitHandle"
QT_MOC_LITERAL(11, 177, 21) // "on_sendButton_clicked"

    },
    "ChatWidget\0connectedFailedSignal\0\0"
    "registerSuccessedSignal\0registerFailedSignal\0"
    "disconnectedHandle\0connectedTimeoutHandle\0"
    "readyReadHandle\0connectServerHandle\0"
    "userName\0exitHandle\0on_sendButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatWidget[] = {

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
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   62,    2, 0x09 /* Protected */,
       6,    0,   63,    2, 0x09 /* Protected */,
       7,    0,   64,    2, 0x09 /* Protected */,
       8,    1,   65,    2, 0x0a /* Public */,
      10,    0,   68,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectedFailedSignal(); break;
        case 1: _t->registerSuccessedSignal(); break;
        case 2: _t->registerFailedSignal(); break;
        case 3: _t->disconnectedHandle(); break;
        case 4: _t->connectedTimeoutHandle(); break;
        case 5: _t->readyReadHandle(); break;
        case 6: _t->connectServerHandle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->exitHandle(); break;
        case 8: _t->on_sendButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatWidget::connectedFailedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatWidget::registerSuccessedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatWidget::registerFailedSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChatWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ChatWidget.data,
    qt_meta_data_ChatWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ChatWidget::connectedFailedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChatWidget::registerSuccessedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ChatWidget::registerFailedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
