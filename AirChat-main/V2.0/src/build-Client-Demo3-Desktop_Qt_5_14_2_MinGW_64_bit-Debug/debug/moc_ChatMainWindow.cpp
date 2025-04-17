/****************************************************************************
** Meta object code from reading C++ file 'ChatMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Client-Demo3/ChatMainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatMainWindow_t {
    QByteArrayData data[20];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatMainWindow_t qt_meta_stringdata_ChatMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ChatMainWindow"
QT_MOC_LITERAL(1, 15, 15), // "addFriendSignal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "account"
QT_MOC_LITERAL(4, 40, 13), // "friendAccount"
QT_MOC_LITERAL(5, 54, 14), // "sendMesgSignal"
QT_MOC_LITERAL(6, 69, 13), // "targetAccount"
QT_MOC_LITERAL(7, 83, 7), // "payload"
QT_MOC_LITERAL(8, 91, 16), // "signInInitHandle"
QT_MOC_LITERAL(9, 108, 4), // "mesg"
QT_MOC_LITERAL(10, 113, 20), // "displayRecMesgHandle"
QT_MOC_LITERAL(11, 134, 15), // "newFriendHandle"
QT_MOC_LITERAL(12, 150, 17), // "friendAccountInfo"
QT_MOC_LITERAL(13, 168, 20), // "faildAddFriendHandle"
QT_MOC_LITERAL(14, 189, 12), // "aboutAirChat"
QT_MOC_LITERAL(15, 202, 26), // "on_ButtonAddFriend_clicked"
QT_MOC_LITERAL(16, 229, 15), // "addFriendHandle"
QT_MOC_LITERAL(17, 245, 37), // "on_listWidgetFriend_currentRo..."
QT_MOC_LITERAL(18, 283, 10), // "currentRow"
QT_MOC_LITERAL(19, 294, 14) // "sendMesgHandle"

    },
    "ChatMainWindow\0addFriendSignal\0\0account\0"
    "friendAccount\0sendMesgSignal\0targetAccount\0"
    "payload\0signInInitHandle\0mesg\0"
    "displayRecMesgHandle\0newFriendHandle\0"
    "friendAccountInfo\0faildAddFriendHandle\0"
    "aboutAirChat\0on_ButtonAddFriend_clicked\0"
    "addFriendHandle\0on_listWidgetFriend_currentRowChanged\0"
    "currentRow\0sendMesgHandle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       5,    3,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   81,    2, 0x0a /* Public */,
      10,    2,   84,    2, 0x0a /* Public */,
      11,    1,   89,    2, 0x0a /* Public */,
      13,    1,   92,    2, 0x0a /* Public */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    1,   97,    2, 0x08 /* Private */,
      17,    1,  100,    2, 0x08 /* Private */,
      19,    2,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

       0        // eod
};

void ChatMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addFriendSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->sendMesgSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->signInInitHandle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->displayRecMesgHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->newFriendHandle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->faildAddFriendHandle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->aboutAirChat(); break;
        case 7: _t->on_ButtonAddFriend_clicked(); break;
        case 8: _t->addFriendHandle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->on_listWidgetFriend_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->sendMesgHandle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatMainWindow::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMainWindow::addFriendSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatMainWindow::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMainWindow::sendMesgSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChatMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ChatMainWindow.data,
    qt_meta_data_ChatMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ChatMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void ChatMainWindow::addFriendSignal(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatMainWindow::sendMesgSignal(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
