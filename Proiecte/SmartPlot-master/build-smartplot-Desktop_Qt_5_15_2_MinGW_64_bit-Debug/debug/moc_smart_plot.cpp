/****************************************************************************
** Meta object code from reading C++ file 'smart_plot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/smart_plot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smart_plot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_smart_plot_t {
    QByteArrayData data[27];
    char stringdata0[327];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_smart_plot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_smart_plot_t qt_meta_stringdata_smart_plot = {
    {
QT_MOC_LITERAL(0, 0, 10), // "smart_plot"
QT_MOC_LITERAL(1, 11, 12), // "rangeChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "QCPRange"
QT_MOC_LITERAL(4, 34, 8), // "newRange"
QT_MOC_LITERAL(5, 43, 10), // "mousePress"
QT_MOC_LITERAL(6, 54, 12), // "QMouseEvent*"
QT_MOC_LITERAL(7, 67, 5), // "event"
QT_MOC_LITERAL(8, 73, 16), // "selectionChanged"
QT_MOC_LITERAL(9, 90, 18), // "contextMenuRequest"
QT_MOC_LITERAL(10, 109, 3), // "pos"
QT_MOC_LITERAL(11, 113, 16), // "titleDoubleClick"
QT_MOC_LITERAL(12, 130, 15), // "axisDoubleClick"
QT_MOC_LITERAL(13, 146, 8), // "QCPAxis*"
QT_MOC_LITERAL(14, 155, 4), // "axis"
QT_MOC_LITERAL(15, 160, 23), // "QCPAxis::SelectablePart"
QT_MOC_LITERAL(16, 184, 4), // "part"
QT_MOC_LITERAL(17, 189, 17), // "legendDoubleClick"
QT_MOC_LITERAL(18, 207, 10), // "QCPLegend*"
QT_MOC_LITERAL(19, 218, 6), // "legend"
QT_MOC_LITERAL(20, 225, 22), // "QCPAbstractLegendItem*"
QT_MOC_LITERAL(21, 248, 4), // "item"
QT_MOC_LITERAL(22, 253, 7), // "iosOpen"
QT_MOC_LITERAL(23, 261, 8), // "fileName"
QT_MOC_LITERAL(24, 270, 19), // "zoomInButtonPressed"
QT_MOC_LITERAL(25, 290, 20), // "zoomOutButtonPressed"
QT_MOC_LITERAL(26, 311, 15) // "savePlotAsImage"

    },
    "smart_plot\0rangeChanged\0\0QCPRange\0"
    "newRange\0mousePress\0QMouseEvent*\0event\0"
    "selectionChanged\0contextMenuRequest\0"
    "pos\0titleDoubleClick\0axisDoubleClick\0"
    "QCPAxis*\0axis\0QCPAxis::SelectablePart\0"
    "part\0legendDoubleClick\0QCPLegend*\0"
    "legend\0QCPAbstractLegendItem*\0item\0"
    "iosOpen\0fileName\0zoomInButtonPressed\0"
    "zoomOutButtonPressed\0savePlotAsImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_smart_plot[] = {

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
       1,    1,   69,    2, 0x08 /* Private */,
       5,    1,   72,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    1,   76,    2, 0x08 /* Private */,
      11,    1,   79,    2, 0x08 /* Private */,
      12,    2,   82,    2, 0x08 /* Private */,
      17,    2,   87,    2, 0x08 /* Private */,
      22,    1,   92,    2, 0x08 /* Private */,
      24,    0,   95,    2, 0x08 /* Private */,
      25,    0,   96,    2, 0x08 /* Private */,
      26,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 20,   19,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void smart_plot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<smart_plot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rangeChanged((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 1: _t->mousePress((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->selectionChanged(); break;
        case 3: _t->contextMenuRequest((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->titleDoubleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->axisDoubleClick((*reinterpret_cast< QCPAxis*(*)>(_a[1])),(*reinterpret_cast< QCPAxis::SelectablePart(*)>(_a[2]))); break;
        case 6: _t->legendDoubleClick((*reinterpret_cast< QCPLegend*(*)>(_a[1])),(*reinterpret_cast< QCPAbstractLegendItem*(*)>(_a[2]))); break;
        case 7: _t->iosOpen((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->zoomInButtonPressed(); break;
        case 9: _t->zoomOutButtonPressed(); break;
        case 10: _t->savePlotAsImage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxis* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxis::SelectablePart >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAbstractLegendItem* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPLegend* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject smart_plot::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_smart_plot.data,
    qt_meta_data_smart_plot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *smart_plot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *smart_plot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_smart_plot.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int smart_plot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
