/****************************************************************************
** Meta object code from reading C++ file 'GroupHolder.hpp'
**
** Created: Wed Jul 18 03:01:12 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Identity/GroupHolder.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GroupHolder.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Identity__GroupHolder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Identity__GroupHolder[] = {
    "Dissent::Identity::GroupHolder\0\0"
    "GroupUpdated()\0"
};

void Dissent::Identity::GroupHolder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GroupHolder *_t = static_cast<GroupHolder *>(_o);
        switch (_id) {
        case 0: _t->GroupUpdated(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dissent::Identity::GroupHolder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Identity::GroupHolder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Identity__GroupHolder,
      qt_meta_data_Dissent__Identity__GroupHolder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Identity::GroupHolder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Identity::GroupHolder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Identity::GroupHolder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Identity__GroupHolder))
        return static_cast<void*>(const_cast< GroupHolder*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Identity::GroupHolder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Dissent::Identity::GroupHolder::GroupUpdated()const
{
    QMetaObject::activate(const_cast< Dissent::Identity::GroupHolder *>(this), &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
