/****************************************************************************
** Meta object code from reading C++ file 'EdgeListener.hpp'
**
** Created: Wed Jul 18 03:01:16 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Transports/EdgeListener.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EdgeListener.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Transports__EdgeListener[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   35,   34,   34, 0x05,
      80,   70,   34,   34, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Transports__EdgeListener[] = {
    "Dissent::Transports::EdgeListener\0\0"
    "edge\0NewEdge(QSharedPointer<Edge>)\0"
    "to,reason\0EdgeCreationFailure(Address,QString)\0"
};

void Dissent::Transports::EdgeListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EdgeListener *_t = static_cast<EdgeListener *>(_o);
        switch (_id) {
        case 0: _t->NewEdge((*reinterpret_cast< const QSharedPointer<Edge>(*)>(_a[1]))); break;
        case 1: _t->EdgeCreationFailure((*reinterpret_cast< const Address(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Transports::EdgeListener::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Transports::EdgeListener::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Transports__EdgeListener,
      qt_meta_data_Dissent__Transports__EdgeListener, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Transports::EdgeListener::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Transports::EdgeListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Transports::EdgeListener::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Transports__EdgeListener))
        return static_cast<void*>(const_cast< EdgeListener*>(this));
    if (!strcmp(_clname, "Utils::StartStop"))
        return static_cast< Utils::StartStop*>(const_cast< EdgeListener*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Transports::EdgeListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Dissent::Transports::EdgeListener::NewEdge(const QSharedPointer<Edge> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dissent::Transports::EdgeListener::EdgeCreationFailure(const Address & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
