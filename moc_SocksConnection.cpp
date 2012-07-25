/****************************************************************************
** Meta object code from reading C++ file 'SocksConnection.hpp'
**
** Created: Wed Jul 18 03:01:19 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Tunnel/SocksConnection.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SocksConnection.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Tunnel__SocksConnection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x05,
      51,   33,   33,   33, 0x05,
      83,   33,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      92,   33,   33,   33, 0x0a,
     100,   33,   33,   33, 0x0a,
     117,   33,   33,   33, 0x0a,
     137,   33,   33,   33, 0x0a,
     179,   33,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Tunnel__SocksConnection[] = {
    "Dissent::Tunnel::SocksConnection\0\0"
    "ProxyConnected()\0UpstreamPacketReady(QByteArray)\0"
    "Closed()\0Close()\0ReadFromSocket()\0"
    "UdpReadFromSocket()\0"
    "HandleError(QAbstractSocket::SocketError)\0"
    "UdpHandleError(QAbstractSocket::SocketError)\0"
};

void Dissent::Tunnel::SocksConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SocksConnection *_t = static_cast<SocksConnection *>(_o);
        switch (_id) {
        case 0: _t->ProxyConnected(); break;
        case 1: _t->UpstreamPacketReady((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->Closed(); break;
        case 3: _t->Close(); break;
        case 4: _t->ReadFromSocket(); break;
        case 5: _t->UdpReadFromSocket(); break;
        case 6: _t->HandleError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: _t->UdpHandleError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Tunnel::SocksConnection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Tunnel::SocksConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Tunnel__SocksConnection,
      qt_meta_data_Dissent__Tunnel__SocksConnection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Tunnel::SocksConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Tunnel::SocksConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Tunnel::SocksConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Tunnel__SocksConnection))
        return static_cast<void*>(const_cast< SocksConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Tunnel::SocksConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Dissent::Tunnel::SocksConnection::ProxyConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Dissent::Tunnel::SocksConnection::UpstreamPacketReady(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dissent::Tunnel::SocksConnection::Closed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
