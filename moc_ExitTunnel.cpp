/****************************************************************************
** Meta object code from reading C++ file 'ExitTunnel.hpp'
**
** Created: Wed Jul 18 03:01:19 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Tunnel/ExitTunnel.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExitTunnel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Tunnel__ExitTunnel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   28,   28,   28, 0x0a,
      46,   28,   28,   28, 0x0a,
      70,   28,   28,   28, 0x0a,
      85,   28,   28,   28, 0x0a,
     136,   28,   28,   28, 0x0a,
     155,   28,   28,   28, 0x0a,
     184,  174,   28,   28, 0x0a,
     216,  174,   28,   28, 0x0a,
     248,   28,   28,   28, 0x0a,
     290,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Tunnel__ExitTunnel[] = {
    "Dissent::Tunnel::ExitTunnel\0\0Stopped()\0"
    "Stop()\0SessionData(QByteArray)\0"
    "DiscardProxy()\0"
    "TcpProxyStateChanged(QAbstractSocket::SocketState)\0"
    "TcpReadFromProxy()\0UdpReadFromProxy()\0"
    "host_info\0TcpDnsLookupFinished(QHostInfo)\0"
    "UdpDnsLookupFinished(QHostInfo)\0"
    "HandleError(QAbstractSocket::SocketError)\0"
    "UdpTimeout()\0"
};

void Dissent::Tunnel::ExitTunnel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExitTunnel *_t = static_cast<ExitTunnel *>(_o);
        switch (_id) {
        case 0: _t->Stopped(); break;
        case 1: _t->Stop(); break;
        case 2: _t->SessionData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->DiscardProxy(); break;
        case 4: _t->TcpProxyStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 5: _t->TcpReadFromProxy(); break;
        case 6: _t->UdpReadFromProxy(); break;
        case 7: _t->TcpDnsLookupFinished((*reinterpret_cast< const QHostInfo(*)>(_a[1]))); break;
        case 8: _t->UdpDnsLookupFinished((*reinterpret_cast< const QHostInfo(*)>(_a[1]))); break;
        case 9: _t->HandleError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 10: _t->UdpTimeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Tunnel::ExitTunnel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Tunnel::ExitTunnel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Tunnel__ExitTunnel,
      qt_meta_data_Dissent__Tunnel__ExitTunnel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Tunnel::ExitTunnel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Tunnel::ExitTunnel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Tunnel::ExitTunnel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Tunnel__ExitTunnel))
        return static_cast<void*>(const_cast< ExitTunnel*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Tunnel::ExitTunnel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Dissent::Tunnel::ExitTunnel::Stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
