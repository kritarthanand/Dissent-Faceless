/****************************************************************************
** Meta object code from reading C++ file 'BaseBulkRound.hpp'
**
** Created: Wed Jul 18 03:00:51 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Anonymity/BaseBulkRound.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BaseBulkRound.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Anonymity__BaseBulkRound[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Anonymity__BaseBulkRound[] = {
    "Dissent::Anonymity::BaseBulkRound\0\0"
    "SlotShuffleFinished()\0"
};

void Dissent::Anonymity::BaseBulkRound::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BaseBulkRound *_t = static_cast<BaseBulkRound *>(_o);
        switch (_id) {
        case 0: _t->SlotShuffleFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dissent::Anonymity::BaseBulkRound::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Anonymity::BaseBulkRound::staticMetaObject = {
    { &Round::staticMetaObject, qt_meta_stringdata_Dissent__Anonymity__BaseBulkRound,
      qt_meta_data_Dissent__Anonymity__BaseBulkRound, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Anonymity::BaseBulkRound::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Anonymity::BaseBulkRound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Anonymity::BaseBulkRound::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Anonymity__BaseBulkRound))
        return static_cast<void*>(const_cast< BaseBulkRound*>(this));
    return Round::qt_metacast(_clname);
}

int Dissent::Anonymity::BaseBulkRound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
