/****************************************************************************
** Meta object code from reading C++ file 'detalles_aparta.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Inicio_sesion/detalles_aparta.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'detalles_aparta.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Detalles_Aparta_t {
    QByteArrayData data[12];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Detalles_Aparta_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Detalles_Aparta_t qt_meta_stringdata_Detalles_Aparta = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Detalles_Aparta"
QT_MOC_LITERAL(1, 16, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 24), // "on_pushButton_A1_clicked"
QT_MOC_LITERAL(4, 64, 24), // "on_pushButton_A2_clicked"
QT_MOC_LITERAL(5, 89, 24), // "on_pushButton_A3_clicked"
QT_MOC_LITERAL(6, 114, 24), // "on_pushButton_A4_clicked"
QT_MOC_LITERAL(7, 139, 24), // "on_pushButton_A5_clicked"
QT_MOC_LITERAL(8, 164, 24), // "on_pushButton_A6_clicked"
QT_MOC_LITERAL(9, 189, 27), // "on_pushButton_Alqui_clicked"
QT_MOC_LITERAL(10, 217, 27), // "on_pushButton_BuyA6_clicked"
QT_MOC_LITERAL(11, 245, 28) // "on_pushButton_Buy_A4_clicked"

    },
    "Detalles_Aparta\0on_pushButton_clicked\0"
    "\0on_pushButton_A1_clicked\0"
    "on_pushButton_A2_clicked\0"
    "on_pushButton_A3_clicked\0"
    "on_pushButton_A4_clicked\0"
    "on_pushButton_A5_clicked\0"
    "on_pushButton_A6_clicked\0"
    "on_pushButton_Alqui_clicked\0"
    "on_pushButton_BuyA6_clicked\0"
    "on_pushButton_Buy_A4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Detalles_Aparta[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

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

       0        // eod
};

void Detalles_Aparta::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Detalles_Aparta *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_A1_clicked(); break;
        case 2: _t->on_pushButton_A2_clicked(); break;
        case 3: _t->on_pushButton_A3_clicked(); break;
        case 4: _t->on_pushButton_A4_clicked(); break;
        case 5: _t->on_pushButton_A5_clicked(); break;
        case 6: _t->on_pushButton_A6_clicked(); break;
        case 8: _t->on_pushButton_BuyA6_clicked(); break;
        case 9: _t->on_pushButton_Buy_A4_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Detalles_Aparta::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Detalles_Aparta.data,
    qt_meta_data_Detalles_Aparta,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Detalles_Aparta::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Detalles_Aparta::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Detalles_Aparta.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Detalles_Aparta::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
