/****************************************************************************
** Meta object code from reading C++ file 'ConnectionManager.hpp'
**
** Created: Wed Jul 18 03:01:08 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Connections/ConnectionManager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConnectionManager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Connections__ConnectionManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      45,   41,   40,   40, 0x05,
      97,   87,   40,   40, 0x05,
     139,   40,   40,   40, 0x05,

 // slots: signature, parameters, type, tag, flags
     162,  154,   40,   40, 0x08,
     188,  179,   40,   40, 0x08,
     220,  207,   40,   40, 0x08,
     237,  207,   40,   40, 0x08,
     252,  207,   40,   40, 0x08,
     272,   40,   40,   40, 0x08,
     298,  291,   40,   40, 0x08,
     331,  326,   40,   40, 0x08,
     367,   40,   40,   40, 0x08,
     385,   87,   40,   40, 0x08,
     428,  154,   40,   40, 0x08,
     455,  179,   40,   40, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Connections__ConnectionManager[] = {
    "Dissent::Connections::ConnectionManager\0"
    "\0con\0NewConnection(QSharedPointer<Connection>)\0"
    "to,reason\0ConnectionAttemptFailure(Address,QString)\0"
    "Disconnected()\0request\0Inquire(Request)\0"
    "response\0Inquired(Response)\0notification\0"
    "Connect(Request)\0Close(Request)\0"
    "Disconnect(Request)\0HandleDisconnect()\0"
    "reason\0HandleDisconnected(QString)\0"
    "edge\0HandleNewEdge(QSharedPointer<Edge>)\0"
    "HandleEdgeClose()\0"
    "HandleEdgeCreationFailure(Address,QString)\0"
    "HandlePingRequest(Request)\0"
    "HandlePingResponse(Response)\0"
};

void Dissent::Connections::ConnectionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConnectionManager *_t = static_cast<ConnectionManager *>(_o);
        switch (_id) {
        case 0: _t->NewConnection((*reinterpret_cast< const QSharedPointer<Connection>(*)>(_a[1]))); break;
        case 1: _t->ConnectionAttemptFailure((*reinterpret_cast< const Address(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->Disconnected(); break;
        case 3: _t->Inquire((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 4: _t->Inquired((*reinterpret_cast< const Response(*)>(_a[1]))); break;
        case 5: _t->Connect((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 6: _t->Close((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 7: _t->Disconnect((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 8: _t->HandleDisconnect(); break;
        case 9: _t->HandleDisconnected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->HandleNewEdge((*reinterpret_cast< const QSharedPointer<Edge>(*)>(_a[1]))); break;
        case 11: _t->HandleEdgeClose(); break;
        case 12: _t->HandleEdgeCreationFailure((*reinterpret_cast< const Address(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->HandlePingRequest((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 14: _t->HandlePingResponse((*reinterpret_cast< const Response(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Connections::ConnectionManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Connections::ConnectionManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Connections__ConnectionManager,
      qt_meta_data_Dissent__Connections__ConnectionManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Connections::ConnectionManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Connections::ConnectionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Connections::ConnectionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Connections__ConnectionManager))
        return static_cast<void*>(const_cast< ConnectionManager*>(this));
    if (!strcmp(_clname, "Utils::StartStop"))
        return static_cast< Utils::StartStop*>(const_cast< ConnectionManager*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Connections::ConnectionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Dissent::Connections::ConnectionManager::NewConnection(const QSharedPointer<Connection> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dissent::Connections::ConnectionManager::ConnectionAttemptFailure(const Address & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dissent::Connections::ConnectionManager::Disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
