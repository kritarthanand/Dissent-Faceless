/****************************************************************************
** Meta object code from reading C++ file 'TcpEdgeListener.hpp'
**
** Created: Wed Jul 18 03:01:17 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Transports/TcpEdgeListener.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TcpEdgeListener.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Transports__TcpEdgeListener[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   37,   37,   37, 0x08,
      53,   37,   37,   37, 0x08,
      69,   37,   37,   37, 0x08,
      94,   88,   37,   37, 0x08,
     150,  136,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Transports__TcpEdgeListener[] = {
    "Dissent::Transports::TcpEdgeListener\0"
    "\0HandleAccept()\0HandleConnect()\0"
    "HandleDisconnect()\0error\0"
    "HandleError(QAbstractSocket::SocketError)\0"
    "socket,reason\0HandleSocketClose(QTcpSocket*,QString)\0"
};

void Dissent::Transports::TcpEdgeListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TcpEdgeListener *_t = static_cast<TcpEdgeListener *>(_o);
        switch (_id) {
        case 0: _t->HandleAccept(); break;
        case 1: _t->HandleConnect(); break;
        case 2: _t->HandleDisconnect(); break;
        case 3: _t->HandleError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->HandleSocketClose((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Transports::TcpEdgeListener::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Transports::TcpEdgeListener::staticMetaObject = {
    { &EdgeListener::staticMetaObject, qt_meta_stringdata_Dissent__Transports__TcpEdgeListener,
      qt_meta_data_Dissent__Transports__TcpEdgeListener, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Transports::TcpEdgeListener::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Transports::TcpEdgeListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Transports::TcpEdgeListener::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Transports__TcpEdgeListener))
        return static_cast<void*>(const_cast< TcpEdgeListener*>(this));
    return EdgeListener::qt_metacast(_clname);
}

int Dissent::Transports::TcpEdgeListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EdgeListener::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
