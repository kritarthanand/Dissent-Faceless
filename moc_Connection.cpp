/****************************************************************************
** Meta object code from reading C++ file 'Connection.hpp'
**
** Created: Wed Jul 18 03:01:06 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Connections/Connection.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Connection.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Connections__Connection[] = {

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
      34,   33,   33,   33, 0x05,
      60,   53,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      82,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Connections__Connection[] = {
    "Dissent::Connections::Connection\0\0"
    "CalledDisconnect()\0reason\0"
    "Disconnected(QString)\0HandleEdgeClose()\0"
};

void Dissent::Connections::Connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Connection *_t = static_cast<Connection *>(_o);
        switch (_id) {
        case 0: _t->CalledDisconnect(); break;
        case 1: _t->Disconnected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->HandleEdgeClose(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Connections::Connection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Connections::Connection::staticMetaObject = {
    { &Messaging::SourceObject::staticMetaObject, qt_meta_stringdata_Dissent__Connections__Connection,
      qt_meta_data_Dissent__Connections__Connection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Connections::Connection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Connections::Connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Connections::Connection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Connections__Connection))
        return static_cast<void*>(const_cast< Connection*>(this));
    if (!strcmp(_clname, "Messaging::ISink"))
        return static_cast< Messaging::ISink*>(const_cast< Connection*>(this));
    if (!strcmp(_clname, "IOverlaySender"))
        return static_cast< IOverlaySender*>(const_cast< Connection*>(this));
    typedef Messaging::SourceObject QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Dissent::Connections::Connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Messaging::SourceObject QMocSuperClass;
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

// SIGNAL 0
void Dissent::Connections::Connection::CalledDisconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Dissent::Connections::Connection::Disconnected(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
