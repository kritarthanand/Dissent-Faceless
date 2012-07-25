/****************************************************************************
** Meta object code from reading C++ file 'ShuffleRound.hpp'
**
** Created: Wed Jul 18 03:01:01 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/Anonymity/ShuffleRound.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShuffleRound.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dissent__Anonymity__ShuffleRound[] = {

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
      49,   34,   33,   33, 0x08,

 // enums: name, flags, count, data
      95, 0x0,   18,   27,
     102, 0x0,    9,   63,

 // enum data: key, value
     114, uint(Dissent::Anonymity::ShuffleRound::OFFLINE),
     122, uint(Dissent::Anonymity::ShuffleRound::KEY_SHARING),
     134, uint(Dissent::Anonymity::ShuffleRound::WAITING_FOR_PUBLIC_KEYS),
     158, uint(Dissent::Anonymity::ShuffleRound::CIPHERTEXT_GENERATION),
     180, uint(Dissent::Anonymity::ShuffleRound::SUBMIT_CIPHERTEXT),
     198, uint(Dissent::Anonymity::ShuffleRound::WAITING_FOR_INITIAL_DATA),
     223, uint(Dissent::Anonymity::ShuffleRound::WAITING_FOR_SHUFFLE),
     243, uint(Dissent::Anonymity::ShuffleRound::SHUFFLING),
     253, uint(Dissent::Anonymity::ShuffleRound::WAITING_FOR_ENCRYPTED_INNER_DATA),
     286, uint(Dissent::Anonymity::ShuffleRound::VERIFICATION),
     299, uint(Dissent::Anonymity::ShuffleRound::WAITING_FOR_VERIFICATION_MESSAGES),
     333, uint(Dissent::Anonymity::ShuffleRound::PRIVATE_KEY_SHARING),
     353, uint(Dissent::Anonymity::ShuffleRound::WAITING_FOR_PRIVATE_KEYS),
     378, uint(Dissent::Anonymity::ShuffleRound::DECRYPTION),
     389, uint(Dissent::Anonymity::ShuffleRound::BLAME_SHARE),
     401, uint(Dissent::Anonymity::ShuffleRound::BLAME_VERIFY),
     414, uint(Dissent::Anonymity::ShuffleRound::BLAME_REVIEWING),
     430, uint(Dissent::Anonymity::ShuffleRound::FINISHED),
     439, uint(Dissent::Anonymity::ShuffleRound::PUBLIC_KEYS),
     451, uint(Dissent::Anonymity::ShuffleRound::DATA),
     456, uint(Dissent::Anonymity::ShuffleRound::SHUFFLE_DATA),
     469, uint(Dissent::Anonymity::ShuffleRound::ENCRYPTED_DATA),
     484, uint(Dissent::Anonymity::ShuffleRound::GO_MESSAGE),
     495, uint(Dissent::Anonymity::ShuffleRound::NO_GO_MESSAGE),
     509, uint(Dissent::Anonymity::ShuffleRound::PRIVATE_KEY),
     521, uint(Dissent::Anonymity::ShuffleRound::BLAME_DATA),
     532, uint(Dissent::Anonymity::ShuffleRound::BLAME_VERIFICATION),

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Anonymity__ShuffleRound[] = {
    "Dissent::Anonymity::ShuffleRound\0\0"
    "cleartexts,bad\0"
    "DecryptDone(QVector<QByteArray>,QVector<int>)\0"
    "States\0MessageType\0OFFLINE\0KEY_SHARING\0"
    "WAITING_FOR_PUBLIC_KEYS\0CIPHERTEXT_GENERATION\0"
    "SUBMIT_CIPHERTEXT\0WAITING_FOR_INITIAL_DATA\0"
    "WAITING_FOR_SHUFFLE\0SHUFFLING\0"
    "WAITING_FOR_ENCRYPTED_INNER_DATA\0"
    "VERIFICATION\0WAITING_FOR_VERIFICATION_MESSAGES\0"
    "PRIVATE_KEY_SHARING\0WAITING_FOR_PRIVATE_KEYS\0"
    "DECRYPTION\0BLAME_SHARE\0BLAME_VERIFY\0"
    "BLAME_REVIEWING\0FINISHED\0PUBLIC_KEYS\0"
    "DATA\0SHUFFLE_DATA\0ENCRYPTED_DATA\0"
    "GO_MESSAGE\0NO_GO_MESSAGE\0PRIVATE_KEY\0"
    "BLAME_DATA\0BLAME_VERIFICATION\0"
};

void Dissent::Anonymity::ShuffleRound::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShuffleRound *_t = static_cast<ShuffleRound *>(_o);
        switch (_id) {
        case 0: _t->DecryptDone((*reinterpret_cast< const QVector<QByteArray>(*)>(_a[1])),(*reinterpret_cast< const QVector<int>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Anonymity::ShuffleRound::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Anonymity::ShuffleRound::staticMetaObject = {
    { &Round::staticMetaObject, qt_meta_stringdata_Dissent__Anonymity__ShuffleRound,
      qt_meta_data_Dissent__Anonymity__ShuffleRound, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Anonymity::ShuffleRound::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Anonymity::ShuffleRound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Anonymity::ShuffleRound::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Anonymity__ShuffleRound))
        return static_cast<void*>(const_cast< ShuffleRound*>(this));
    return Round::qt_metacast(_clname);
}

int Dissent::Anonymity::ShuffleRound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_Dissent__Anonymity__ShuffleRoundPrivate__Decryptor[] = {

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
      67,   52,   51,   51, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Dissent__Anonymity__ShuffleRoundPrivate__Decryptor[] = {
    "Dissent::Anonymity::ShuffleRoundPrivate::Decryptor\0"
    "\0cleartexts,bad\0"
    "Finished(QVector<QByteArray>,QVector<int>)\0"
};

void Dissent::Anonymity::ShuffleRoundPrivate::Decryptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Decryptor *_t = static_cast<Decryptor *>(_o);
        switch (_id) {
        case 0: _t->Finished((*reinterpret_cast< const QVector<QByteArray>(*)>(_a[1])),(*reinterpret_cast< const QVector<int>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dissent::Anonymity::ShuffleRoundPrivate::Decryptor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dissent::Anonymity::ShuffleRoundPrivate::Decryptor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dissent__Anonymity__ShuffleRoundPrivate__Decryptor,
      qt_meta_data_Dissent__Anonymity__ShuffleRoundPrivate__Decryptor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dissent::Anonymity::ShuffleRoundPrivate::Decryptor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dissent::Anonymity::ShuffleRoundPrivate::Decryptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dissent::Anonymity::ShuffleRoundPrivate::Decryptor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dissent__Anonymity__ShuffleRoundPrivate__Decryptor))
        return static_cast<void*>(const_cast< Decryptor*>(this));
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(const_cast< Decryptor*>(this));
    return QObject::qt_metacast(_clname);
}

int Dissent::Anonymity::ShuffleRoundPrivate::Decryptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Dissent::Anonymity::ShuffleRoundPrivate::Decryptor::Finished(const QVector<QByteArray> & _t1, const QVector<int> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
