/****************************************************************************
** Meta object code from reading C++ file 'RelayEdgeListener.hpp'
**
** Created: Wed Jul 18 03:01:09 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Connections/RelayEdgeListener.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RelayEdgeListener.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Connections__RelayEdgeListener[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   41,   40,   40, 0x08,
      78,   69,   40,   40, 0x08,
     113,  100,   40,   40, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Connections__RelayEdgeListener[] = {
    "Dissent::Connections::RelayEdgeListener\0"
    "\0request\0CreateEdge(Request)\0response\0"
    "EdgeCreated(Response)\0notification\0"
    "IncomingData(Request)\0"
};

void Dissent::Connections::RelayEdgeListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RelayEdgeListener *_t = static_cast<RelayEdgeListener *>(_o);
        switch (_id) {
        case 0: _t->CreateEdge((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 1: _t->EdgeCreated((*reinterpret_cast< const Response(*)>(_a[1]))); break;
        case 2: _t->IncomingData((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Connections::RelayEdgeListener::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Connections::RelayEdgeListener::staticMetaObject = {
    { &Transports::EdgeListener::staticMetaObject, qt_meta_stringdata_Dissent__Connections__RelayEdgeListener,
      qt_meta_data_Dissent__Connections__RelayEdgeListener, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Connections::RelayEdgeListener::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Connections::RelayEdgeListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Connections::RelayEdgeListener::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Connections__RelayEdgeListener))
        return static_cast<void*>(const_cast< RelayEdgeListener*>(this));
    typedef Transports::EdgeListener QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Dissent::Connections::RelayEdgeListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Transports::EdgeListener QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
