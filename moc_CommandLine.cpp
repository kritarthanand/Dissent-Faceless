/****************************************************************************
** Meta object code from reading C++ file 'CommandLine.hpp'
**
** Created: Wed Jul 18 03:01:03 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Applications/CommandLine.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommandLine.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Applications__CommandLine[] = {

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
      36,   35,   35,   35, 0x0a,
      43,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Applications__CommandLine[] = {
    "Dissent::Applications::CommandLine\0\0"
    "Stop()\0Read()\0"
};

void Dissent::Applications::CommandLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CommandLine *_t = static_cast<CommandLine *>(_o);
        switch (_id) {
        case 0: _t->Stop(); break;
        case 1: _t->Read(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dissent::Applications::CommandLine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Applications::CommandLine::staticMetaObject = {
    { &ConsoleSink::staticMetaObject, qt_meta_stringdata_Dissent__Applications__CommandLine,
      qt_meta_data_Dissent__Applications__CommandLine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Applications::CommandLine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Applications::CommandLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Applications::CommandLine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Applications__CommandLine))
        return static_cast<void*>(const_cast< CommandLine*>(this));
    return ConsoleSink::qt_metacast(_clname);
}

int Dissent::Applications::CommandLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConsoleSink::qt_metacall(_c, _id, _a);
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
