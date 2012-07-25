/****************************************************************************
** Meta object code from reading C++ file 'Session.hpp'
**
** Created: Wed Jul 18 03:00:58 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Anonymity/Sessions/Session.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Session.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Anonymity__Sessions__Session[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      45,   39,   38,   38, 0x05,
      82,   39,   38,   38, 0x05,
     119,   38,   38,   38, 0x05,

 // slots: signature, parameters, type, tag, flags
     130,   38,   38,   38, 0x0a,
     142,   38,   38,   38, 0x0a,
     166,  153,   38,   38, 0x0a,
     189,  153,   38,   38, 0x0a,
     210,  153,   38,   38, 0x0a,
     232,   38,   38,   38, 0x0a,
     242,   38,   38,   38, 0x0a,
     275,   38,  251,   38, 0x0a,
     292,  288,   38,   38, 0x0a,
     347,  337,   38,   38, 0x0a,
     368,   38,   38,   38, 0x0a,
     403,  390,   38,   38, 0x0a,
     441,  432,   38,   38, 0x08,
     462,  432,   38,   38, 0x08,
     483,  288,   38,   38, 0x08,
     532,   38,   38,   38, 0x08,
     558,   38,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Anonymity__Sessions__Session[] = {
    "Dissent::Anonymity::Sessions::Session\0"
    "\0round\0RoundStarting(QSharedPointer<Round>)\0"
    "RoundFinished(QSharedPointer<Round>)\0"
    "Stopping()\0CallStart()\0CallStop()\0"
    "notification\0HandlePrepare(Request)\0"
    "HandleBegin(Request)\0IncomingData(Request)\0"
    "OnStart()\0OnStop()\0QSharedPointer<Network>\0"
    "GetNetwork()\0con\0"
    "HandleConnection(QSharedPointer<Connection>)\0"
    "remote_id\0HandleDisconnect(Id)\0"
    "HandleRoundFinished()\0request,data\0"
    "SendChallenge(bool,QVariant)\0response\0"
    "Challenged(Response)\0Registered(Response)\0"
    "HandleConnectionSlot(QSharedPointer<Connection>)\0"
    "HandleRoundFinishedSlot()\0"
    "HandleDisconnectSlot()\0"
};

void Dissent::Anonymity::Sessions::Session::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Session *_t = static_cast<Session *>(_o);
        switch (_id) {
        case 0: _t->RoundStarting((*reinterpret_cast< const QSharedPointer<Round>(*)>(_a[1]))); break;
        case 1: _t->RoundFinished((*reinterpret_cast< const QSharedPointer<Round>(*)>(_a[1]))); break;
        case 2: _t->Stopping(); break;
        case 3: _t->CallStart(); break;
        case 4: _t->CallStop(); break;
        case 5: _t->HandlePrepare((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 6: _t->HandleBegin((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 7: _t->IncomingData((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 8: _t->OnStart(); break;
        case 9: _t->OnStop(); break;
        case 10: { QSharedPointer<Network> _r = _t->GetNetwork();
            if (_a[0]) *reinterpret_cast< QSharedPointer<Network>*>(_a[0]) = _r; }  break;
        case 11: _t->HandleConnection((*reinterpret_cast< const QSharedPointer<Connection>(*)>(_a[1]))); break;
        case 12: _t->HandleDisconnect((*reinterpret_cast< const Id(*)>(_a[1]))); break;
        case 13: _t->HandleRoundFinished(); break;
        case 14: _t->SendChallenge((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 15: _t->Challenged((*reinterpret_cast< const Response(*)>(_a[1]))); break;
        case 16: _t->Registered((*reinterpret_cast< const Response(*)>(_a[1]))); break;
        case 17: _t->HandleConnectionSlot((*reinterpret_cast< const QSharedPointer<Connection>(*)>(_a[1]))); break;
        case 18: _t->HandleRoundFinishedSlot(); break;
        case 19: _t->HandleDisconnectSlot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Anonymity::Sessions::Session::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Anonymity::Sessions::Session::staticMetaObject = {
    { &Messaging::FilterObject::staticMetaObject, qt_meta_stringdata_Dissent__Anonymity__Sessions__Session,
      qt_meta_data_Dissent__Anonymity__Sessions__Session, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Anonymity::Sessions::Session::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Anonymity::Sessions::Session::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Anonymity::Sessions::Session::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Anonymity__Sessions__Session))
        return static_cast<void*>(const_cast< Session*>(this));
    if (!strcmp(_clname, "Utils::StartStop"))
        return static_cast< Utils::StartStop*>(const_cast< Session*>(this));
    typedef Messaging::FilterObject QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Dissent::Anonymity::Sessions::Session::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Messaging::FilterObject QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void Dissent::Anonymity::Sessions::Session::RoundStarting(const QSharedPointer<Round> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dissent::Anonymity::Sessions::Session::RoundFinished(const QSharedPointer<Round> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dissent::Anonymity::Sessions::Session::Stopping()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
