/****************************************************************************
** Meta object code from reading C++ file 'RpcHandler.hpp'
**
** Created: Wed Jul 18 03:01:13 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Messaging/RpcHandler.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RpcHandler.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Messaging__RpcHandler[] = {

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
      45,   32,   31,   31, 0x0a,
     108,   76,   31,   31, 0x0a,
     195,  174,   31,   31, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Messaging__RpcHandler[] = {
    "Dissent::Messaging::RpcHandler\0\0"
    "request,data\0SendResponse(Request,QVariant)\0"
    "request,error,reason,error_data\0"
    "SendFailedResponse(Request,Response::ErrorTypes,QString,QVariant)\0"
    "request,error,reason\0"
    "SendFailedResponse(Request,Response::ErrorTypes,QString)\0"
};

void Dissent::Messaging::RpcHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RpcHandler *_t = static_cast<RpcHandler *>(_o);
        switch (_id) {
        case 0: _t->SendResponse((*reinterpret_cast< const Request(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->SendFailedResponse((*reinterpret_cast< const Request(*)>(_a[1])),(*reinterpret_cast< Response::ErrorTypes(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 2: _t->SendFailedResponse((*reinterpret_cast< const Request(*)>(_a[1])),(*reinterpret_cast< Response::ErrorTypes(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Messaging::RpcHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Messaging::RpcHandler::staticMetaObject = {
    { &ISinkObject::staticMetaObject, qt_meta_stringdata_Dissent__Messaging__RpcHandler,
      qt_meta_data_Dissent__Messaging__RpcHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Messaging::RpcHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Messaging::RpcHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Messaging::RpcHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Messaging__RpcHandler))
        return static_cast<void*>(const_cast< RpcHandler*>(this));
    return ISinkObject::qt_metacast(_clname);
}

int Dissent::Messaging::RpcHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ISinkObject::qt_metacall(_c, _id, _a);
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
