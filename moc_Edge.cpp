/****************************************************************************
** Meta object code from reading C++ file 'Edge.hpp'
**
** Created: Wed Jul 18 03:01:16 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Transports/Edge.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Edge.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Transports__Edge[] = {

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
      27,   26,   26,   26, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Transports__Edge[] = {
    "Dissent::Transports::Edge\0\0StoppedSignal()\0"
};

void Dissent::Transports::Edge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Edge *_t = static_cast<Edge *>(_o);
        switch (_id) {
        case 0: _t->StoppedSignal(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dissent::Transports::Edge::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Transports::Edge::staticMetaObject = {
    { &Messaging::SourceObject::staticMetaObject, qt_meta_stringdata_Dissent__Transports__Edge,
      qt_meta_data_Dissent__Transports__Edge, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Transports::Edge::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Transports::Edge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Transports::Edge::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Transports__Edge))
        return static_cast<void*>(const_cast< Edge*>(this));
    if (!strcmp(_clname, "Messaging::ISender"))
        return static_cast< Messaging::ISender*>(const_cast< Edge*>(this));
    if (!strcmp(_clname, "Utils::StartStop"))
        return static_cast< Utils::StartStop*>(const_cast< Edge*>(this));
    typedef Messaging::SourceObject QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Dissent::Transports::Edge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Messaging::SourceObject QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
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
void Dissent::Transports::Edge::StoppedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
