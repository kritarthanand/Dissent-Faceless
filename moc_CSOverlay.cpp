/****************************************************************************
** Meta object code from reading C++ file 'CSOverlay.hpp'
**
** Created: Wed Jul 18 03:01:05 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/ClientServer/CSOverlay.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CSOverlay.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__ClientServer__CSOverlay[] = {

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
      34,   33,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__ClientServer__CSOverlay[] = {
    "Dissent::ClientServer::CSOverlay\0\0"
    "GroupUpdated()\0"
};

void Dissent::ClientServer::CSOverlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CSOverlay *_t = static_cast<CSOverlay *>(_o);
        switch (_id) {
        case 0: _t->GroupUpdated(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dissent::ClientServer::CSOverlay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::ClientServer::CSOverlay::staticMetaObject = {
    { &Overlay::BaseOverlay::staticMetaObject, qt_meta_stringdata_Dissent__ClientServer__CSOverlay,
      qt_meta_data_Dissent__ClientServer__CSOverlay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::ClientServer::CSOverlay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::ClientServer::CSOverlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::ClientServer::CSOverlay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__ClientServer__CSOverlay))
        return static_cast<void*>(const_cast< CSOverlay*>(this));
    typedef Overlay::BaseOverlay QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Dissent::ClientServer::CSOverlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Overlay::BaseOverlay QMocSuperClass;
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
QT_END_MOC_NAMESPACE
