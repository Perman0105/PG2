/****************************************************************************
** Meta object code from reading C++ file 'travelagencyui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Aufgabe1/travelagencyui.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'travelagencyui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_TravelAgencyUI_t {
    uint offsetsAndSizes[18];
    char stringdata0[15];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[13];
    char stringdata5[6];
    char stringdata6[32];
    char stringdata7[17];
    char stringdata8[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TravelAgencyUI_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TravelAgencyUI_t qt_meta_stringdata_TravelAgencyUI = {
    {
        QT_MOC_LITERAL(0, 14),  // "TravelAgencyUI"
        QT_MOC_LITERAL(15, 27),  // "on_actionEinlesen_triggered"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 10),  // "closeEvent"
        QT_MOC_LITERAL(55, 12),  // "QCloseEvent*"
        QT_MOC_LITERAL(68, 5),  // "event"
        QT_MOC_LITERAL(74, 31),  // "on_listWidget_itemDoubleClicked"
        QT_MOC_LITERAL(106, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(123, 4)   // "item"
    },
    "TravelAgencyUI",
    "on_actionEinlesen_triggered",
    "",
    "closeEvent",
    "QCloseEvent*",
    "event",
    "on_listWidget_itemDoubleClicked",
    "QListWidgetItem*",
    "item"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TravelAgencyUI[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    1,   33,    2, 0x08,    2 /* Private */,
       6,    1,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject TravelAgencyUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TravelAgencyUI.offsetsAndSizes,
    qt_meta_data_TravelAgencyUI,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TravelAgencyUI_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TravelAgencyUI, std::true_type>,
        // method 'on_actionEinlesen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>,
        // method 'on_listWidget_itemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>
    >,
    nullptr
} };

void TravelAgencyUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TravelAgencyUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionEinlesen_triggered(); break;
        case 1: _t->closeEvent((*reinterpret_cast< std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 2: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *TravelAgencyUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TravelAgencyUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TravelAgencyUI.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TravelAgencyUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
