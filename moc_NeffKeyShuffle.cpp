/****************************************************************************
** Meta object code from reading C++ file 'NeffKeyShuffle.hpp'
**
** Created: Wed Jul 18 03:00:54 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Anonymity/NeffKeyShuffle.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NeffKeyShuffle.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Anonymity__NeffKeyShuffle[] = {

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
      35, 0x0,    3,   22,
      47, 0x0,    9,   28,

 // enum data: key, value
      54, uint(Dissent::Anonymity::NeffKeyShuffle::KEY_SUBMIT),
      65, uint(Dissent::Anonymity::NeffKeyShuffle::KEY_SHUFFLE),
      77, uint(Dissent::Anonymity::NeffKeyShuffle::ANONYMIZED_KEYS),
      93, uint(Dissent::Anonymity::NeffKeyShuffle::OFFLINE),
     101, uint(Dissent::Anonymity::NeffKeyShuffle::KEY_GENERATION),
     116, uint(Dissent::Anonymity::NeffKeyShuffle::KEY_SUBMISSION),
     131, uint(Dissent::Anonymity::NeffKeyShuffle::WAITING_FOR_KEYS),
     148, uint(Dissent::Anonymity::NeffKeyShuffle::WAITING_FOR_SHUFFLE),
     168, uint(Dissent::Anonymity::NeffKeyShuffle::SHUFFLING),
     178, uint(Dissent::Anonymity::NeffKeyShuffle::WAITING_FOR_ANONYMIZED_KEYS),
     206, uint(Dissent::Anonymity::NeffKeyShuffle::PROCESSING_ANONYMIZED_KEYS),
     233, uint(Dissent::Anonymity::NeffKeyShuffle::FINISHED),

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Anonymity__NeffKeyShuffle[] = {
    "Dissent::Anonymity::NeffKeyShuffle\0"
    "MessageType\0States\0KEY_SUBMIT\0KEY_SHUFFLE\0"
    "ANONYMIZED_KEYS\0OFFLINE\0KEY_GENERATION\0"
    "KEY_SUBMISSION\0WAITING_FOR_KEYS\0"
    "WAITING_FOR_SHUFFLE\0SHUFFLING\0"
    "WAITING_FOR_ANONYMIZED_KEYS\0"
    "PROCESSING_ANONYMIZED_KEYS\0FINISHED\0"
};

void Dissent::Anonymity::NeffKeyShuffle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dissent::Anonymity::NeffKeyShuffle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Anonymity::NeffKeyShuffle::staticMetaObject = {
    { &Round::staticMetaObject, qt_meta_stringdata_Dissent__Anonymity__NeffKeyShuffle,
      qt_meta_data_Dissent__Anonymity__NeffKeyShuffle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Anonymity::NeffKeyShuffle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Anonymity::NeffKeyShuffle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Anonymity::NeffKeyShuffle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Anonymity__NeffKeyShuffle))
        return static_cast<void*>(const_cast< NeffKeyShuffle*>(this));
    return Round::qt_metacast(_clname);
}

int Dissent::Anonymity::NeffKeyShuffle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Round::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
