/****************************************************************************
** Meta object code from reading C++ file 'MessageWebService.hpp'
**
** Created: Wed Jul 18 03:01:24 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Web/Services/MessageWebService.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MessageWebService.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Web__Services__MessageWebService[] = {

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
      48,   43,   42,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Web__Services__MessageWebService[] = {
    "Dissent::Web::Services::MessageWebService\0"
    "\0data\0HandleIncomingMessage(QByteArray)\0"
};

void Dissent::Web::Services::MessageWebService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MessageWebService *_t = static_cast<MessageWebService *>(_o);
        switch (_id) {
        case 0: _t->HandleIncomingMessage((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Web::Services::MessageWebService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Web::Services::MessageWebService::staticMetaObject = {
    { &WebService::staticMetaObject, qt_meta_stringdata_Dissent__Web__Services__MessageWebService,
      qt_meta_data_Dissent__Web__Services__MessageWebService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Web::Services::MessageWebService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Web::Services::MessageWebService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Web::Services::MessageWebService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Web__Services__MessageWebService))
        return static_cast<void*>(const_cast< MessageWebService*>(this));
    return WebService::qt_metacast(_clname);
}

int Dissent::Web::Services::MessageWebService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WebService::qt_metacall(_c, _id, _a);
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
