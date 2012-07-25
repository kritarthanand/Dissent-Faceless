/****************************************************************************
** Meta object code from reading C++ file 'FullyConnected.hpp'
**
** Created: Wed Jul 18 03:01:09 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Connections/FullyConnected.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FullyConnected.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Connections__FullyConnected[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   38,   37,   37, 0x08,
      79,   71,   37,   37, 0x08,
     113,  104,   37,   37, 0x08,
     153,  140,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Connections__FullyConnected[] = {
    "Dissent::Connections::FullyConnected\0"
    "\0reason\0HandleDisconnect(QString)\0"
    "request\0PeerListInquire(Request)\0"
    "response\0PeerListResponse(Response)\0"
    "notification\0PeerListIncrementalUpdate(Request)\0"
};

void Dissent::Connections::FullyConnected::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FullyConnected *_t = static_cast<FullyConnected *>(_o);
        switch (_id) {
        case 0: _t->HandleDisconnect((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->PeerListInquire((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 2: _t->PeerListResponse((*reinterpret_cast< const Response(*)>(_a[1]))); break;
        case 3: _t->PeerListIncrementalUpdate((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Connections::FullyConnected::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Connections::FullyConnected::staticMetaObject = {
    { &ConnectionAcquirer::staticMetaObject, qt_meta_stringdata_Dissent__Connections__FullyConnected,
      qt_meta_data_Dissent__Connections__FullyConnected, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Connections::FullyConnected::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Connections::FullyConnected::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Connections::FullyConnected::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Connections__FullyConnected))
        return static_cast<void*>(const_cast< FullyConnected*>(this));
    return ConnectionAcquirer::qt_metacast(_clname);
}

int Dissent::Connections::FullyConnected::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConnectionAcquirer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
