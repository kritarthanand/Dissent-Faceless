/****************************************************************************
** Meta object code from reading C++ file 'StartStopSlots.hpp'
**
** Created: Wed Jul 18 03:01:20 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Utils/StartStopSlots.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StartStopSlots.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Utils__StartStopSlots[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x0a,
      44,   31,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Utils__StartStopSlots[] = {
    "Dissent::Utils::StartStopSlots\0\0"
    "CallStart()\0CallStop()\0"
};

void Dissent::Utils::StartStopSlots::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StartStopSlots *_t = static_cast<StartStopSlots *>(_o);
        switch (_id) {
        case 0: _t->CallStart(); break;
        case 1: _t->CallStop(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dissent::Utils::StartStopSlots::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Utils::StartStopSlots::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Utils__StartStopSlots,
      qt_meta_data_Dissent__Utils__StartStopSlots, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Utils::StartStopSlots::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Utils::StartStopSlots::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Utils::StartStopSlots::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Utils__StartStopSlots))
        return static_cast<void*>(const_cast< StartStopSlots*>(this));
    if (!strcmp(_clname, "StartStop"))
        return static_cast< StartStop*>(const_cast< StartStopSlots*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Utils::StartStopSlots::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
