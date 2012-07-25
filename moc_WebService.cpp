/****************************************************************************
** Meta object code from reading C++ file 'WebService.hpp'
**
** Created: Wed Jul 18 03:01:24 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Web/Services/WebService.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WebService.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Web__Services__WebService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   36,   35,   35, 0x05,
      96,   85,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
     148,   36,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Web__Services__WebService[] = {
    "Dissent::Web::Services::WebService\0\0"
    "wrp\0WebServiceCalled(QSharedPointer<WebRequest>)\0"
    "wrp,format\0"
    "FinishedWebRequest(QSharedPointer<WebRequest>,bool)\0"
    "HandleWrapper(QSharedPointer<WebRequest>)\0"
};

void Dissent::Web::Services::WebService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WebService *_t = static_cast<WebService *>(_o);
        switch (_id) {
        case 0: _t->WebServiceCalled((*reinterpret_cast< QSharedPointer<WebRequest>(*)>(_a[1]))); break;
        case 1: _t->FinishedWebRequest((*reinterpret_cast< QSharedPointer<WebRequest>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->HandleWrapper((*reinterpret_cast< QSharedPointer<WebRequest>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Web::Services::WebService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Web::Services::WebService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Web__Services__WebService,
      qt_meta_data_Dissent__Web__Services__WebService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Web::Services::WebService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Web::Services::WebService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Web::Services::WebService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Web__Services__WebService))
        return static_cast<void*>(const_cast< WebService*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Web::Services::WebService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Dissent::Web::Services::WebService::WebServiceCalled(QSharedPointer<WebRequest> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dissent::Web::Services::WebService::FinishedWebRequest(QSharedPointer<WebRequest> _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
