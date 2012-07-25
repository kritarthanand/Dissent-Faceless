/****************************************************************************
** Meta object code from reading C++ file 'ResponseHandler.hpp'
**
** Created: Wed Jul 18 03:01:13 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Messaging/ResponseHandler.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ResponseHandler.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Messaging__ResponseHandler[] = {

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
      46,   37,   36,   36, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Messaging__ResponseHandler[] = {
    "Dissent::Messaging::ResponseHandler\0"
    "\0response\0RequestCompleteSignal(Response)\0"
};

void Dissent::Messaging::ResponseHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ResponseHandler *_t = static_cast<ResponseHandler *>(_o);
        switch (_id) {
        case 0: _t->RequestCompleteSignal((*reinterpret_cast< const Response(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Messaging::ResponseHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Messaging::ResponseHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Messaging__ResponseHandler,
      qt_meta_data_Dissent__Messaging__ResponseHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Messaging::ResponseHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Messaging::ResponseHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Messaging::ResponseHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Messaging__ResponseHandler))
        return static_cast<void*>(const_cast< ResponseHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Messaging::ResponseHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Dissent::Messaging::ResponseHandler::RequestCompleteSignal(const Response & _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Dissent::Messaging::ResponseHandler *>(this), &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
