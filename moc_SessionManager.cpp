/****************************************************************************
** Meta object code from reading C++ file 'SessionManager.hpp'
**
** Created: Wed Jul 18 03:01:00 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Anonymity/Sessions/SessionManager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SessionManager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Anonymity__Sessions__SessionManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      46,   45,   45,   45, 0x08,
      66,   45,   45,   45, 0x08,
     105,   92,   45,   45, 0x08,
     137,  129,   45,   45, 0x08,
     169,  129,   45,   45, 0x08,
     202,   92,   45,   45, 0x08,
     225,   92,   45,   45, 0x08,
     249,   92,   45,   45, 0x08,
     270,   92,   45,   45, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Anonymity__Sessions__SessionManager[] = {
    "Dissent::Anonymity::Sessions::SessionManager\0"
    "\0HandleSessionStop()\0HandleSessionLeaderStop()\0"
    "notification\0LinkDisconnect(Request)\0"
    "request\0HandleChallengeRequest(Request)\0"
    "HandleChallengeResponse(Request)\0"
    "HandlePrepare(Request)\0HandlePrepared(Request)\0"
    "HandleBegin(Request)\0IncomingData(Request)\0"
};

void Dissent::Anonymity::Sessions::SessionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SessionManager *_t = static_cast<SessionManager *>(_o);
        switch (_id) {
        case 0: _t->HandleSessionStop(); break;
        case 1: _t->HandleSessionLeaderStop(); break;
        case 2: _t->LinkDisconnect((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 3: _t->HandleChallengeRequest((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 4: _t->HandleChallengeResponse((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 5: _t->HandlePrepare((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 6: _t->HandlePrepared((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 7: _t->HandleBegin((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 8: _t->IncomingData((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Anonymity::Sessions::SessionManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Anonymity::Sessions::SessionManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Anonymity__Sessions__SessionManager,
      qt_meta_data_Dissent__Anonymity__Sessions__SessionManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Anonymity::Sessions::SessionManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Anonymity::Sessions::SessionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Anonymity::Sessions::SessionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Anonymity__Sessions__SessionManager))
        return static_cast<void*>(const_cast< SessionManager*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Anonymity::Sessions::SessionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
