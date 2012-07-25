/****************************************************************************
** Meta object code from reading C++ file 'BulkRound.hpp'
**
** Created: Wed Jul 18 03:00:52 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Anonymity/BulkRound.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BulkRound.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Anonymity__BulkRound[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       2,   24, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x08,
      49,   30,   30,   30, 0x08,

 // enums: name, flags, count, data
      72, 0x0,    6,   32,
      78, 0x0,    3,   44,

 // enum data: key, value
      90, uint(Dissent::Anonymity::BulkRound::Offline),
      98, uint(Dissent::Anonymity::BulkRound::Shuffling),
     108, uint(Dissent::Anonymity::BulkRound::DataSharing),
     120, uint(Dissent::Anonymity::BulkRound::ReceivingLeaderData),
     140, uint(Dissent::Anonymity::BulkRound::ProcessingLeaderData),
     161, uint(Dissent::Anonymity::BulkRound::Finished),
     170, uint(Dissent::Anonymity::BulkRound::BulkData),
     179, uint(Dissent::Anonymity::BulkRound::LoggedBulkData),
     194, uint(Dissent::Anonymity::BulkRound::AggregatedBulkData),

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Anonymity__BulkRound[] = {
    "Dissent::Anonymity::BulkRound\0\0"
    "ShuffleFinished()\0BlameShuffleFinished()\0"
    "State\0MessageType\0Offline\0Shuffling\0"
    "DataSharing\0ReceivingLeaderData\0"
    "ProcessingLeaderData\0Finished\0BulkData\0"
    "LoggedBulkData\0AggregatedBulkData\0"
};

void Dissent::Anonymity::BulkRound::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BulkRound *_t = static_cast<BulkRound *>(_o);
        switch (_id) {
        case 0: _t->ShuffleFinished(); break;
        case 1: _t->BlameShuffleFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dissent::Anonymity::BulkRound::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Anonymity::BulkRound::staticMetaObject = {
    { &Round::staticMetaObject, qt_meta_stringdata_Dissent__Anonymity__BulkRound,
      qt_meta_data_Dissent__Anonymity__BulkRound, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Anonymity::BulkRound::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Anonymity::BulkRound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Anonymity::BulkRound::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Anonymity__BulkRound))
        return static_cast<void*>(const_cast< BulkRound*>(this));
    return Round::qt_metacast(_clname);
}

int Dissent::Anonymity::BulkRound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Round::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
