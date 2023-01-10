/****************************************************************************
** Meta object code from reading C++ file 'config.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qt_plt/config.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'config.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Config_t {
    uint offsetsAndSizes[26];
    char stringdata0[7];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[16];
    char stringdata5[16];
    char stringdata6[22];
    char stringdata7[17];
    char stringdata8[15];
    char stringdata9[8];
    char stringdata10[8];
    char stringdata11[8];
    char stringdata12[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Config_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Config_t qt_meta_stringdata_Config = {
    {
        QT_MOC_LITERAL(0, 6),  // "Config"
        QT_MOC_LITERAL(7, 15),  // "set_lower_x_max"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 15),  // "set_upper_x_min"
        QT_MOC_LITERAL(40, 15),  // "set_lower_y_max"
        QT_MOC_LITERAL(56, 15),  // "set_upper_y_min"
        QT_MOC_LITERAL(72, 21),  // "on_buttonBox_accepted"
        QT_MOC_LITERAL(94, 16),  // "on_Reset_clicked"
        QT_MOC_LITERAL(111, 14),  // "update_default"
        QT_MOC_LITERAL(126, 7),  // "x_lower"
        QT_MOC_LITERAL(134, 7),  // "x_upper"
        QT_MOC_LITERAL(142, 7),  // "y_lower"
        QT_MOC_LITERAL(150, 7)   // "y_upper"
    },
    "Config",
    "set_lower_x_max",
    "",
    "set_upper_x_min",
    "set_lower_y_max",
    "set_upper_y_min",
    "on_buttonBox_accepted",
    "on_Reset_clicked",
    "update_default",
    "x_lower",
    "x_upper",
    "y_lower",
    "y_upper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Config[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    4,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    9,   10,   11,   12,

       0        // eod
};

void Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Config *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->set_lower_x_max(); break;
        case 1: _t->set_upper_x_min(); break;
        case 2: _t->set_lower_y_max(); break;
        case 3: _t->set_upper_y_min(); break;
        case 4: _t->on_buttonBox_accepted(); break;
        case 5: _t->on_Reset_clicked(); break;
        case 6: _t->update_default((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject Config::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Config.offsetsAndSizes,
    qt_meta_data_Config,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Config_t
, QtPrivate::TypeAndForceComplete<Config, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *Config::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Config::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Config.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Config::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
