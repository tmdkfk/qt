/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../imgaug/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[372];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "on_action_Open_triggered"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 24), // "on_actionE_xit_triggered"
QT_MOC_LITERAL(4, 62, 33), // "on_txt_rotation_angle_textCha..."
QT_MOC_LITERAL(5, 96, 4), // "arg1"
QT_MOC_LITERAL(6, 101, 21), // "on_btn_resize_clicked"
QT_MOC_LITERAL(7, 123, 23), // "on_btn_rotation_clicked"
QT_MOC_LITERAL(8, 147, 27), // "on_sbar_rotate_valueChanged"
QT_MOC_LITERAL(9, 175, 5), // "value"
QT_MOC_LITERAL(10, 181, 19), // "on_cb_hflip_clicked"
QT_MOC_LITERAL(11, 201, 7), // "checked"
QT_MOC_LITERAL(12, 209, 19), // "on_cb_vflip_clicked"
QT_MOC_LITERAL(13, 229, 29), // "on_btn_resize_default_clicked"
QT_MOC_LITERAL(14, 259, 31), // "on_txt_resize_width_textChanged"
QT_MOC_LITERAL(15, 291, 32), // "on_actionSave_AugImage_triggered"
QT_MOC_LITERAL(16, 324, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(17, 350, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(18, 367, 4) // "item"

    },
    "MainWindow\0on_action_Open_triggered\0"
    "\0on_actionE_xit_triggered\0"
    "on_txt_rotation_angle_textChanged\0"
    "arg1\0on_btn_resize_clicked\0"
    "on_btn_rotation_clicked\0"
    "on_sbar_rotate_valueChanged\0value\0"
    "on_cb_hflip_clicked\0checked\0"
    "on_cb_vflip_clicked\0on_btn_resize_default_clicked\0"
    "on_txt_resize_width_textChanged\0"
    "on_actionSave_AugImage_triggered\0"
    "on_listWidget_itemClicked\0QListWidgetItem*\0"
    "item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    1,   76,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    1,   81,    2, 0x08 /* Private */,
      10,    1,   84,    2, 0x08 /* Private */,
      12,    1,   87,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    1,   91,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_action_Open_triggered(); break;
        case 1: _t->on_actionE_xit_triggered(); break;
        case 2: _t->on_txt_rotation_angle_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_btn_resize_clicked(); break;
        case 4: _t->on_btn_rotation_clicked(); break;
        case 5: _t->on_sbar_rotate_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_cb_hflip_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_cb_vflip_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_btn_resize_default_clicked(); break;
        case 9: _t->on_txt_resize_width_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_actionSave_AugImage_triggered(); break;
        case 11: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
