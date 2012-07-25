/****************************************************************************
** Meta object code from reading C++ file 'ConnectionAcquirer.hpp'
**
** Created: Wed Jul 18 03:01:07 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Connections/ConnectionAcquirer.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConnectionAcquirer.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Connections__ConnectionAcquirer[] = {

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
      46,   42,   41,   41, 0x08,
     107,   95,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Connections__ConnectionAcquirer[] = {
    "Dissent::Connections::ConnectionAcquirer\0"
    "\0con\0HandleConnectionSlot(QSharedPointer<Connection>)\0"
    "addr,reason\0"
    "HandleConnectionAttemptFailureSlot(Address,QString)\0"
};

void Dissent::Connections::ConnectionAcquirer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConnectionAcquirer *_t = static_cast<ConnectionAcquirer *>(_o);
        switch (_id) {
        case 0: _t->HandleConnectionSlot((*reinterpret_cast< const QSharedPointer<Connection>(*)>(_a[1]))); break;
        case 1: _t->HandleConnectionAttemptFailureSlot((*reinterpret_cast< const Address(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Connections::ConnectionAcquirer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Connections::ConnectionAcquirer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Connections__ConnectionAcquirer,
      qt_meta_data_Dissent__Connections__ConnectionAcquirer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Connections::ConnectionAcquirer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Connections::ConnectionAcquirer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Connections::ConnectionAcquirer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Connections__ConnectionAcquirer))
        return static_cast<void*>(const_cast< ConnectionAcquirer*>(this));
    if (!strcmp(_clname, "Utils::StartStop"))
        return static_cast< Utils::StartStop*>(const_cast< ConnectionAcquirer*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Connections::ConnectionAcquirer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
