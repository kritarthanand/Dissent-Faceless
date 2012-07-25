/****************************************************************************
** Meta object code from reading C++ file 'CSConnectionAcquirer.hpp'
**
** Created: Wed Jul 18 03:01:04 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/ClientServer/CSConnectionAcquirer.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CSConnectionAcquirer.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__ClientServer__CSConnectionAcquirer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   45,   44,   44, 0x08,
      90,   81,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__ClientServer__CSConnectionAcquirer[] = {
    "Dissent::ClientServer::CSConnectionAcquirer\0"
    "\0request\0ServerStateInquire(Request)\0"
    "response\0ServerStateResponse(Response)\0"
};

void Dissent::ClientServer::CSConnectionAcquirer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CSConnectionAcquirer *_t = static_cast<CSConnectionAcquirer *>(_o);
        switch (_id) {
        case 0: _t->ServerStateInquire((*reinterpret_cast< const Request(*)>(_a[1]))); break;
        case 1: _t->ServerStateResponse((*reinterpret_cast< const Response(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::ClientServer::CSConnectionAcquirer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::ClientServer::CSConnectionAcquirer::staticMetaObject = {
    { &Connections::ConnectionAcquirer::staticMetaObject, qt_meta_stringdata_Dissent__ClientServer__CSConnectionAcquirer,
      qt_meta_data_Dissent__ClientServer__CSConnectionAcquirer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::ClientServer::CSConnectionAcquirer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::ClientServer::CSConnectionAcquirer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::ClientServer::CSConnectionAcquirer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__ClientServer__CSConnectionAcquirer))
        return static_cast<void*>(const_cast< CSConnectionAcquirer*>(this));
    typedef Connections::ConnectionAcquirer QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Dissent::ClientServer::CSConnectionAcquirer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Connections::ConnectionAcquirer QMocSuperClass;
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
