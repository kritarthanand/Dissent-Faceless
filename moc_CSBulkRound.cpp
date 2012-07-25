/****************************************************************************
** Meta object code from reading C++ file 'CSBulkRound.hpp'
**
** Created: Wed Jul 18 03:00:53 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Anonymity/CSBulkRound.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CSBulkRound.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Anonymity__CSBulkRound[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      32, 0x0,    6,   22,
      44, 0x0,   13,   34,

 // enum data: key, value
      51, uint(Dissent::Anonymity::CSBulkRound::CLIENT_CIPHERTEXT),
      69, uint(Dissent::Anonymity::CSBulkRound::SERVER_CLIENT_LIST),
      88, uint(Dissent::Anonymity::CSBulkRound::SERVER_COMMIT),
     102, uint(Dissent::Anonymity::CSBulkRound::SERVER_CIPHERTEXT),
     120, uint(Dissent::Anonymity::CSBulkRound::SERVER_VALIDATION),
     138, uint(Dissent::Anonymity::CSBulkRound::SERVER_CLEARTEXT),
     155, uint(Dissent::Anonymity::CSBulkRound::OFFLINE),
     163, uint(Dissent::Anonymity::CSBulkRound::SHUFFLING),
     173, uint(Dissent::Anonymity::CSBulkRound::PROCESS_DATA_SHUFFLE),
     194, uint(Dissent::Anonymity::CSBulkRound::PROCESS_KEY_SHUFFLE),
     214, uint(Dissent::Anonymity::CSBulkRound::PREPARE_FOR_BULK),
     231, uint(Dissent::Anonymity::CSBulkRound::CLIENT_WAIT_FOR_CLEARTEXT),
     257, uint(Dissent::Anonymity::CSBulkRound::SERVER_WAIT_FOR_CLIENT_CIPHERTEXT),
     291, uint(Dissent::Anonymity::CSBulkRound::SERVER_WAIT_FOR_CLIENT_LISTS),
     320, uint(Dissent::Anonymity::CSBulkRound::SERVER_WAIT_FOR_SERVER_COMMITS),
     351, uint(Dissent::Anonymity::CSBulkRound::SERVER_WAIT_FOR_SERVER_CIPHERTEXT),
     385, uint(Dissent::Anonymity::CSBulkRound::SERVER_WAIT_FOR_SERVER_VALIDATION),
     419, uint(Dissent::Anonymity::CSBulkRound::SERVER_PUSH_CLEARTEXT),
     441, uint(Dissent::Anonymity::CSBulkRound::FINISHED),

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Anonymity__CSBulkRound[] = {
    "Dissent::Anonymity::CSBulkRound\0"
    "MessageType\0States\0CLIENT_CIPHERTEXT\0"
    "SERVER_CLIENT_LIST\0SERVER_COMMIT\0"
    "SERVER_CIPHERTEXT\0SERVER_VALIDATION\0"
    "SERVER_CLEARTEXT\0OFFLINE\0SHUFFLING\0"
    "PROCESS_DATA_SHUFFLE\0PROCESS_KEY_SHUFFLE\0"
    "PREPARE_FOR_BULK\0CLIENT_WAIT_FOR_CLEARTEXT\0"
    "SERVER_WAIT_FOR_CLIENT_CIPHERTEXT\0"
    "SERVER_WAIT_FOR_CLIENT_LISTS\0"
    "SERVER_WAIT_FOR_SERVER_COMMITS\0"
    "SERVER_WAIT_FOR_SERVER_CIPHERTEXT\0"
    "SERVER_WAIT_FOR_SERVER_VALIDATION\0"
    "SERVER_PUSH_CLEARTEXT\0FINISHED\0"
};

void Dissent::Anonymity::CSBulkRound::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dissent::Anonymity::CSBulkRound::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Anonymity::CSBulkRound::staticMetaObject = {
    { &BaseBulkRound::staticMetaObject, qt_meta_stringdata_Dissent__Anonymity__CSBulkRound,
      qt_meta_data_Dissent__Anonymity__CSBulkRound, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Anonymity::CSBulkRound::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Anonymity::CSBulkRound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Anonymity::CSBulkRound::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Anonymity__CSBulkRound))
        return static_cast<void*>(const_cast< CSBulkRound*>(this));
    return BaseBulkRound::qt_metacast(_clname);
}

int Dissent::Anonymity::CSBulkRound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseBulkRound::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
