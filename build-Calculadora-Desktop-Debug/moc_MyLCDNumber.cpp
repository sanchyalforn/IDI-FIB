/****************************************************************************
** Meta object code from reading C++ file 'MyLCDNumber.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Calculadora/MyLCDNumber.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyLCDNumber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyLCDNumber_t {
    QByteArrayData data[12];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyLCDNumber_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyLCDNumber_t qt_meta_stringdata_MyLCDNumber = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MyLCDNumber"
QT_MOC_LITERAL(1, 12, 4), // "suma"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "resta"
QT_MOC_LITERAL(4, 24, 3), // "div"
QT_MOC_LITERAL(5, 28, 4), // "mult"
QT_MOC_LITERAL(6, 33, 5), // "reset"
QT_MOC_LITERAL(7, 39, 6), // "setAbs"
QT_MOC_LITERAL(8, 46, 1), // "b"
QT_MOC_LITERAL(9, 48, 6), // "setOp1"
QT_MOC_LITERAL(10, 55, 1), // "n"
QT_MOC_LITERAL(11, 57, 6) // "setOp2"

    },
    "MyLCDNumber\0suma\0\0resta\0div\0mult\0reset\0"
    "setAbs\0b\0setOp1\0n\0setOp2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyLCDNumber[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x0a /* Public */,
       9,    1,   62,    2, 0x0a /* Public */,
      11,    1,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void MyLCDNumber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyLCDNumber *_t = static_cast<MyLCDNumber *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->suma(); break;
        case 1: _t->resta(); break;
        case 2: _t->div(); break;
        case 3: _t->mult(); break;
        case 4: _t->reset(); break;
        case 5: _t->setAbs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setOp1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setOp2((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MyLCDNumber::staticMetaObject = {
    { &QLCDNumber::staticMetaObject, qt_meta_stringdata_MyLCDNumber.data,
      qt_meta_data_MyLCDNumber,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyLCDNumber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyLCDNumber::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyLCDNumber.stringdata0))
        return static_cast<void*>(this);
    return QLCDNumber::qt_metacast(_clname);
}

int MyLCDNumber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLCDNumber::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
