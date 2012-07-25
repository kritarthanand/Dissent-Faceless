/****************************************************************************
** Meta object code from reading C++ file 'TolerantBulkRound.hpp'
**
** Created: Wed Jul 18 03:01:02 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Anonymity/Tolerant/TolerantBulkRound.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TolerantBulkRound.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Anonymity__Tolerant__TolerantBulkRound[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       4,   24, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   48,   48,   48, 0x08,
      70,   48,   48,   48, 0x08,

 // enums: name, flags, count, data
      93, 0x0,    8,   40,
      99, 0x0,    3,   56,
     113, 0x0,    3,   62,
     129, 0x0,    8,   68,

 // enum data: key, value
     141, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::State_Offline),
     155, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::State_SigningKeyShuffling),
     181, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::State_CommitSharing),
     201, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::State_DataSharing),
     219, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::State_BlameShuffling),
     240, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::State_BlameAlibiSharing),
     264, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::State_BlameProofSharing),
     288, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::State_Finished),
     303, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::NotLookingForEvidence),
     325, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::LookingForEvidence),
     344, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::FoundEvidence),
     358, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::Header_SigningKeyShuffle),
     383, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::Header_Bulk),
     395, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::Header_BlameShuffle),
     415, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::MessageType_UserCommitData),
     442, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::MessageType_ServerCommitData),
     471, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::MessageType_UserBulkData),
     496, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::MessageType_ServerBulkData),
     523, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::MessageType_UserAlibiData),
     549, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::MessageType_ServerAlibiData),
     577, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::MessageType_UserProofData),
     603, uint(Dissent::Anonymity::Tolerant::TolerantBulkRound::MessageType_ServerProofData),

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Anonymity__Tolerant__TolerantBulkRound[] = {
    "Dissent::Anonymity::Tolerant::TolerantBulkRound\0"
    "\0KeyShuffleFinished()\0BlameShuffleFinished()\0"
    "State\0EvidenceState\0RoundTypeHeader\0"
    "MessageType\0State_Offline\0"
    "State_SigningKeyShuffling\0State_CommitSharing\0"
    "State_DataSharing\0State_BlameShuffling\0"
    "State_BlameAlibiSharing\0State_BlameProofSharing\0"
    "State_Finished\0NotLookingForEvidence\0"
    "LookingForEvidence\0FoundEvidence\0"
    "Header_SigningKeyShuffle\0Header_Bulk\0"
    "Header_BlameShuffle\0MessageType_UserCommitData\0"
    "MessageType_ServerCommitData\0"
    "MessageType_UserBulkData\0"
    "MessageType_ServerBulkData\0"
    "MessageType_UserAlibiData\0"
    "MessageType_ServerAlibiData\0"
    "MessageType_UserProofData\0"
    "MessageType_ServerProofData\0"
};

void Dissent::Anonymity::Tolerant::TolerantBulkRound::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TolerantBulkRound *_t = static_cast<TolerantBulkRound *>(_o);
        switch (_id) {
        case 0: _t->KeyShuffleFinished(); break;
        case 1: _t->BlameShuffleFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dissent::Anonymity::Tolerant::TolerantBulkRound::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Anonymity::Tolerant::TolerantBulkRound::staticMetaObject = {
    { &Dissent::Anonymity::Round::staticMetaObject, qt_meta_stringdata_Dissent__Anonymity__Tolerant__TolerantBulkRound,
      qt_meta_data_Dissent__Anonymity__Tolerant__TolerantBulkRound, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Anonymity::Tolerant::TolerantBulkRound::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Anonymity::Tolerant::TolerantBulkRound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Anonymity::Tolerant::TolerantBulkRound::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Anonymity__Tolerant__TolerantBulkRound))
        return static_cast<void*>(const_cast< TolerantBulkRound*>(this));
    typedef Dissent::Anonymity::Round QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Dissent::Anonymity::Tolerant::TolerantBulkRound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Dissent::Anonymity::Round QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
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
