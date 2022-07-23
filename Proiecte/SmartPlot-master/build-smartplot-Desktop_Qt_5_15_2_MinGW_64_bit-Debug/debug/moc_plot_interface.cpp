/****************************************************************************
** Meta object code from reading C++ file 'plot_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/tabs/plot/plot_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plot_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_plot_interface_t {
    QByteArrayData data[13];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_plot_interface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_plot_interface_t qt_meta_stringdata_plot_interface = {
    {
QT_MOC_LITERAL(0, 0, 14), // "plot_interface"
QT_MOC_LITERAL(1, 15, 19), // "selected_modifyData"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "selected_remove"
QT_MOC_LITERAL(4, 52, 21), // "selected_rescaleGraph"
QT_MOC_LITERAL(5, 74, 25), // "selected_pickNewLineColor"
QT_MOC_LITERAL(6, 100, 25), // "selected_pickNewFillColor"
QT_MOC_LITERAL(7, 126, 19), // "selected_changeAxis"
QT_MOC_LITERAL(8, 146, 18), // "selectedPlot_stats"
QT_MOC_LITERAL(9, 165, 25), // "selectedPlot_convertUnits"
QT_MOC_LITERAL(10, 191, 20), // "selectedPlot_convert"
QT_MOC_LITERAL(11, 212, 9), // "removeAll"
QT_MOC_LITERAL(12, 222, 14) // "toggleAxisType"

    },
    "plot_interface\0selected_modifyData\0\0"
    "selected_remove\0selected_rescaleGraph\0"
    "selected_pickNewLineColor\0"
    "selected_pickNewFillColor\0selected_changeAxis\0"
    "selectedPlot_stats\0selectedPlot_convertUnits\0"
    "selectedPlot_convert\0removeAll\0"
    "toggleAxisType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_plot_interface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void plot_interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<plot_interface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selected_modifyData(); break;
        case 1: _t->selected_remove(); break;
        case 2: _t->selected_rescaleGraph(); break;
        case 3: _t->selected_pickNewLineColor(); break;
        case 4: _t->selected_pickNewFillColor(); break;
        case 5: _t->selected_changeAxis(); break;
        case 6: _t->selectedPlot_stats(); break;
        case 7: _t->selectedPlot_convertUnits(); break;
        case 8: _t->selectedPlot_convert(); break;
        case 9: _t->removeAll(); break;
        case 10: _t->toggleAxisType(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject plot_interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_plot_interface.data,
    qt_meta_data_plot_interface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *plot_interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *plot_interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_plot_interface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int plot_interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
