/****************************************************************************
** Meta object code from reading C++ file 'EntryTunnel.hpp'
**
** Created: Wed Jul 18 03:01:18 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Tunnel/EntryTunnel.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntryTunnel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Tunnel__EntryTunnel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   40,   29,   29, 0x0a,
      68,   29,   29,   29, 0x0a,
      84,   29,   29,   29, 0x0a,
      91,   29,   29,   29, 0x0a,
     118,   29,   29,   29, 0x0a,
     135,   29,   29,   29, 0x0a,
     156,  149,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Tunnel__EntryTunnel[] = {
    "Dissent::Tunnel::EntryTunnel\0\0Stopped()\0"
    "request\0TunnelData(Request)\0NewConnection()\0"
    "Stop()\0DownstreamData(QByteArray)\0"
    "SocksConnected()\0SocksClosed()\0packet\0"
    "SocksHasUpstreamPacket(QByteArray)\0"
};

void Dissent::Tunnel::EntryTunnel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EntryTunnel *_t = static_cast<EntryTunnel *>(_o);
        switch (_id) {
        case 0: _t->Stopped(); break;
        case 1: _t->TunnelData((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 2: _t->NewConnection(); break;
        case 3: _t->Stop(); break;
        case 4: _t->DownstreamData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->SocksConnected(); break;
        case 6: _t->SocksClosed(); break;
        case 7: _t->SocksHasUpstreamPacket((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Tunnel::EntryTunnel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Tunnel::EntryTunnel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Tunnel__EntryTunnel,
      qt_meta_data_Dissent__Tunnel__EntryTunnel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Tunnel::EntryTunnel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Tunnel::EntryTunnel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Tunnel::EntryTunnel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Tunnel__EntryTunnel))
        return static_cast<void*>(const_cast< EntryTunnel*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Tunnel::EntryTunnel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Dissent::Tunnel::EntryTunnel::Stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
