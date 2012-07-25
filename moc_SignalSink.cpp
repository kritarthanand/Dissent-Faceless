/****************************************************************************
** Meta object code from reading C++ file 'SignalSink.hpp'
**
** Created: Wed Jul 18 03:01:14 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Messaging/SignalSink.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SignalSink.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Messaging__SignalSink[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   32,   31,   31, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Messaging__SignalSink[] = {
    "Dissent::Messaging::SignalSink\0\0data\0"
    "IncomingData(QByteArray)\0"
};

void Dissent::Messaging::SignalSink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SignalSink *_t = static_cast<SignalSink *>(_o);
        switch (_id) {
        case 0: _t->IncomingData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Messaging::SignalSink::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Messaging::SignalSink::staticMetaObject = {
    { &ISinkObject::staticMetaObject, qt_meta_stringdata_Dissent__Messaging__SignalSink,
      qt_meta_data_Dissent__Messaging__SignalSink, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Messaging::SignalSink::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Messaging::SignalSink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Messaging::SignalSink::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Messaging__SignalSink))
        return static_cast<void*>(const_cast< SignalSink*>(this));
    return ISinkObject::qt_metacast(_clname);
}

int Dissent::Messaging::SignalSink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ISinkObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Dissent::Messaging::SignalSink::IncomingData(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
