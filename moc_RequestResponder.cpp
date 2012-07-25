/****************************************************************************
** Meta object code from reading C++ file 'RequestResponder.hpp'
**
** Created: Wed Jul 18 03:01:12 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Messaging/RequestResponder.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RequestResponder.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Messaging__RequestResponder[] = {

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
      51,   38,   37,   37, 0x05,
     115,   83,   37,   37, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Messaging__RequestResponder[] = {
    "Dissent::Messaging::RequestResponder\0"
    "\0request,data\0RespondSignal(Request,QVariant)\0"
    "request,error,reason,error_data\0"
    "FailedSignal(Request,Response::ErrorTypes,QString,QVariant)\0"
};

void Dissent::Messaging::RequestResponder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RequestResponder *_t = static_cast<RequestResponder *>(_o);
        switch (_id) {
        case 0: _t->RespondSignal((*reinterpret_cast< const Request(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->FailedSignal((*reinterpret_cast< const Request(*)>(_a[1])),(*reinterpret_cast< Response::ErrorTypes(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Messaging::RequestResponder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Messaging::RequestResponder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Messaging__RequestResponder,
      qt_meta_data_Dissent__Messaging__RequestResponder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Messaging::RequestResponder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Messaging::RequestResponder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Messaging::RequestResponder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Messaging__RequestResponder))
        return static_cast<void*>(const_cast< RequestResponder*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Messaging::RequestResponder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Dissent::Messaging::RequestResponder::RespondSignal(const Request & _t1, const QVariant & _t2)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< Dissent::Messaging::RequestResponder *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dissent::Messaging::RequestResponder::FailedSignal(const Request & _t1, Response::ErrorTypes _t2, const QString & _t3, const QVariant & _t4)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(const_cast< Dissent::Messaging::RequestResponder *>(this), &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
