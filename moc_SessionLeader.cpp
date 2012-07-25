/****************************************************************************
** Meta object code from reading C++ file 'SessionLeader.hpp'
**
** Created: Wed Jul 18 03:00:59 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Anonymity/Sessions/SessionLeader.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SessionLeader.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Anonymity__Sessions__SessionLeader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      45,   44,   44,   44, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   44,   44,   44, 0x0a,
      68,   44,   44,   44, 0x0a,
      92,   79,   44,   44, 0x0a,
     124,  116,   44,   44, 0x0a,
     156,  116,   44,   44, 0x0a,
     189,   79,   44,   44, 0x0a,
     217,  213,   44,   44, 0x08,
     266,   44,   44,   44, 0x08,
     289,   44,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Anonymity__Sessions__SessionLeader[] = {
    "Dissent::Anonymity::Sessions::SessionLeader\0"
    "\0Stopping()\0CallStart()\0CallStop()\0"
    "notification\0LinkDisconnect(Request)\0"
    "request\0HandleChallengeRequest(Request)\0"
    "HandleChallengeResponse(Request)\0"
    "HandlePrepared(Request)\0con\0"
    "HandleConnectionSlot(QSharedPointer<Connection>)\0"
    "HandleDisconnectSlot()\0HandleRoundFinished()\0"
};

void Dissent::Anonymity::Sessions::SessionLeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SessionLeader *_t = static_cast<SessionLeader *>(_o);
        switch (_id) {
        case 0: _t->Stopping(); break;
        case 1: _t->CallStart(); break;
        case 2: _t->CallStop(); break;
        case 3: _t->LinkDisconnect((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 4: _t->HandleChallengeRequest((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 5: _t->HandleChallengeResponse((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 6: _t->HandlePrepared((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 7: _t->HandleConnectionSlot((*reinterpret_cast< const QSharedPointer<Connection>(*)>(_a[1]))); break;
        case 8: _t->HandleDisconnectSlot(); break;
        case 9: _t->HandleRoundFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Anonymity::Sessions::SessionLeader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Anonymity::Sessions::SessionLeader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Anonymity__Sessions__SessionLeader,
      qt_meta_data_Dissent__Anonymity__Sessions__SessionLeader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Anonymity::Sessions::SessionLeader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Anonymity::Sessions::SessionLeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Anonymity::Sessions::SessionLeader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Anonymity__Sessions__SessionLeader))
        return static_cast<void*>(const_cast< SessionLeader*>(this));
    if (!strcmp(_clname, "Utils::StartStop"))
        return static_cast< Utils::StartStop*>(const_cast< SessionLeader*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Anonymity::Sessions::SessionLeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Dissent::Anonymity::Sessions::SessionLeader::Stopping()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
