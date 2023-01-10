/****************************************************************************
** Meta object code from reading C++ file 'settings.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qt_plt/settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Settings_t {
    uint offsetsAndSizes[30];
    char stringdata0[9];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[13];
    char stringdata5[6];
    char stringdata6[22];
    char stringdata7[16];
    char stringdata8[17];
    char stringdata9[17];
    char stringdata10[6];
    char stringdata11[14];
    char stringdata12[5];
    char stringdata13[13];
    char stringdata14[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Settings_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Settings_t qt_meta_stringdata_Settings = {
    {
        QT_MOC_LITERAL(0, 8),  // "Settings"
        QT_MOC_LITERAL(9, 13),  // "set_numofdata"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 3),  // "num"
        QT_MOC_LITERAL(28, 12),  // "set_csvdelim"
        QT_MOC_LITERAL(41, 5),  // "index"
        QT_MOC_LITERAL(47, 21),  // "on_buttonBox_accepted"
        QT_MOC_LITERAL(69, 15),  // "update_savetype"
        QT_MOC_LITERAL(85, 16),  // "update_savedelim"
        QT_MOC_LITERAL(102, 16),  // "update_keepstate"
        QT_MOC_LITERAL(119, 5),  // "state"
        QT_MOC_LITERAL(125, 13),  // "update_height"
        QT_MOC_LITERAL(139, 4),  // "text"
        QT_MOC_LITERAL(144, 12),  // "update_width"
        QT_MOC_LITERAL(157, 21)   // "on_buttonBox_rejected"
    },
    "Settings",
    "set_numofdata",
    "",
    "num",
    "set_csvdelim",
    "index",
    "on_buttonBox_accepted",
    "update_savetype",
    "update_savedelim",
    "update_keepstate",
    "state",
    "update_height",
    "text",
    "update_width",
    "on_buttonBox_rejected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Settings[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x08,    1 /* Private */,
       4,    1,   71,    2, 0x08,    3 /* Private */,
       6,    0,   74,    2, 0x08,    5 /* Private */,
       7,    1,   75,    2, 0x08,    6 /* Private */,
       8,    1,   78,    2, 0x08,    8 /* Private */,
       9,    1,   81,    2, 0x08,   10 /* Private */,
      11,    1,   84,    2, 0x08,   12 /* Private */,
      13,    1,   87,    2, 0x08,   14 /* Private */,
      14,    0,   90,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,

       0        // eod
};

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Settings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->set_numofdata((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->set_csvdelim((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_buttonBox_accepted(); break;
        case 3: _t->update_savetype((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->update_savedelim((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->update_keepstate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->update_height((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->update_width((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    }
}

const QMetaObject Settings::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Settings.offsetsAndSizes,
    qt_meta_data_Settings,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Settings_t
, QtPrivate::TypeAndForceComplete<Settings, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Settings.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
