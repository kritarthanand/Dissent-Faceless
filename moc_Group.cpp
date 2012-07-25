/****************************************************************************
** Meta object code from reading C++ file 'Group.hpp'
**
** Created: Wed Jul 18 03:01:11 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Identity/Group.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Group.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Identity__Group[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      25, 0x0,    4,   18,

 // enum data: key, value
      40, uint(Dissent::Identity::Group::CompleteGroup),
      54, uint(Dissent::Identity::Group::FixedSubgroup),
      68, uint(Dissent::Identity::Group::ManagedSubgroup),
      84, uint(Dissent::Identity::Group::DisabledGroup),

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Identity__Group[] = {
    "Dissent::Identity::Group\0SubgroupPolicy\0"
    "CompleteGroup\0FixedSubgroup\0ManagedSubgroup\0"
    "DisabledGroup\0"
};

const QMetaObject Dissent::Identity::Group::staticMetaObject = {
    { 0, qt_meta_stringdata_Dissent__Identity__Group,
      qt_meta_data_Dissent__Identity__Group, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Identity::Group::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION
QT_END_MOC_NAMESPACE
