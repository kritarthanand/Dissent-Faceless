/****************************************************************************
** Meta object code from reading C++ file 'WebServer.hpp'
**
** Created: Wed Jul 18 03:01:23 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Web/WebServer.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WebServer.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Web__WebServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   35,   24,   24, 0x0a,
     104,   24,   24,   24, 0x0a,
     111,   24,   24,   24, 0x08,
     128,   24,   24,   24, 0x08,
     144,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Web__WebServer[] = {
    "Dissent::Web::WebServer\0\0Stopped()\0"
    "wrp,format\0"
    "HandleFinishedWebRequest(QSharedPointer<WebRequest>,bool)\0"
    "Stop()\0ReadFromClient()\0DiscardClient()\0"
    "HandleError(QAbstractSocket::SocketError)\0"
};

void Dissent::Web::WebServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WebServer *_t = static_cast<WebServer *>(_o);
        switch (_id) {
        case 0: _t->Stopped(); break;
        case 1: _t->HandleFinishedWebRequest((*reinterpret_cast< QSharedPointer<WebRequest>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->Stop(); break;
        case 3: _t->ReadFromClient(); break;
        case 4: _t->DiscardClient(); break;
        case 5: _t->HandleError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Web::WebServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Web::WebServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_Dissent__Web__WebServer,
      qt_meta_data_Dissent__Web__WebServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Web::WebServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Web::WebServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Web::WebServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Web__WebServer))
        return static_cast<void*>(const_cast< WebServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int Dissent::Web::WebServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Dissent::Web::WebServer::Stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
