/****************************************************************************
** Meta object code from reading C++ file 'RelayForwarder.hpp'
**
** Created: Wed Jul 18 03:01:10 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Connections/RelayForwarder.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RelayForwarder.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Connections__RelayForwarder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      51,   38,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Connections__RelayForwarder[] = {
    "Dissent::Connections::RelayForwarder\0"
    "\0notification\0IncomingData(Request)\0"
};

void Dissent::Connections::RelayForwarder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RelayForwarder *_t = static_cast<RelayForwarder *>(_o);
        switch (_id) {
        case 0: _t->IncomingData((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Connections::RelayForwarder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Connections::RelayForwarder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Connections__RelayForwarder,
      qt_meta_data_Dissent__Connections__RelayForwarder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Connections::RelayForwarder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Connections::RelayForwarder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Connections::RelayForwarder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Connections__RelayForwarder))
        return static_cast<void*>(const_cast< RelayForwarder*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Connections::RelayForwarder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
