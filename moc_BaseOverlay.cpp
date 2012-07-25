/****************************************************************************
** Meta object code from reading C++ file 'BaseOverlay.hpp'
**
** Created: Wed Jul 18 03:01:15 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Overlay/BaseOverlay.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BaseOverlay.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Overlay__BaseOverlay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,
      46,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Overlay__BaseOverlay[] = {
    "Dissent::Overlay::BaseOverlay\0\0"
    "Disconnected()\0Disconnecting()\0"
    "HandleDisconnected()\0"
};

void Dissent::Overlay::BaseOverlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BaseOverlay *_t = static_cast<BaseOverlay *>(_o);
        switch (_id) {
        case 0: _t->Disconnected(); break;
        case 1: _t->Disconnecting(); break;
        case 2: _t->HandleDisconnected(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dissent::Overlay::BaseOverlay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Overlay::BaseOverlay::staticMetaObject = {
    { &Utils::StartStopSlots::staticMetaObject, qt_meta_stringdata_Dissent__Overlay__BaseOverlay,
      qt_meta_data_Dissent__Overlay__BaseOverlay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Overlay::BaseOverlay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Overlay::BaseOverlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Overlay::BaseOverlay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Overlay__BaseOverlay))
        return static_cast<void*>(const_cast< BaseOverlay*>(this));
    typedef Utils::StartStopSlots QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Dissent::Overlay::BaseOverlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Utils::StartStopSlots QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Dissent::Overlay::BaseOverlay::Disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Dissent::Overlay::BaseOverlay::Disconnecting()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
