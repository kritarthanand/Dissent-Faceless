/****************************************************************************
** Meta object code from reading C++ file 'RepeatingBulkRound.hpp'
**
** Created: Wed Jul 18 03:00:56 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Anonymity/RepeatingBulkRound.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RepeatingBulkRound.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Anonymity__RepeatingBulkRound[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       2,   19, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   39,   39,   39, 0x08,

 // enums: name, flags, count, data
      58, 0x0,    5,   27,
      64, 0x0,    1,   37,

 // enum data: key, value
      76, uint(Dissent::Anonymity::RepeatingBulkRound::Offline),
      84, uint(Dissent::Anonymity::RepeatingBulkRound::Shuffling),
      94, uint(Dissent::Anonymity::RepeatingBulkRound::PhasePreparation),
     111, uint(Dissent::Anonymity::RepeatingBulkRound::DataSharing),
     123, uint(Dissent::Anonymity::RepeatingBulkRound::Finished),
     132, uint(Dissent::Anonymity::RepeatingBulkRound::BulkData),

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Anonymity__RepeatingBulkRound[] = {
    "Dissent::Anonymity::RepeatingBulkRound\0"
    "\0ShuffleFinished()\0State\0MessageType\0"
    "Offline\0Shuffling\0PhasePreparation\0"
    "DataSharing\0Finished\0BulkData\0"
};

void Dissent::Anonymity::RepeatingBulkRound::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RepeatingBulkRound *_t = static_cast<RepeatingBulkRound *>(_o);
        switch (_id) {
        case 0: _t->ShuffleFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dissent::Anonymity::RepeatingBulkRound::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Anonymity::RepeatingBulkRound::staticMetaObject = {
    { &Round::staticMetaObject, qt_meta_stringdata_Dissent__Anonymity__RepeatingBulkRound,
      qt_meta_data_Dissent__Anonymity__RepeatingBulkRound, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Anonymity::RepeatingBulkRound::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Anonymity::RepeatingBulkRound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Anonymity::RepeatingBulkRound::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Anonymity__RepeatingBulkRound))
        return static_cast<void*>(const_cast< RepeatingBulkRound*>(this));
    return Round::qt_metacast(_clname);
}

int Dissent::Anonymity::RepeatingBulkRound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Round::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
