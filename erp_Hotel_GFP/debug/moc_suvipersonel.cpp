/****************************************************************************
** Meta object code from reading C++ file 'suvipersonel.h'
**
** Created: Thu 2. Jan 23:10:53 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../suvipersonel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'suvipersonel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SuviPersonel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      44,   13,   13,   13, 0x08,
      70,   13,   13,   13, 0x08,
     102,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SuviPersonel[] = {
    "SuviPersonel\0\0on_enregistrerAbsPB_clicked()\0"
    "on_RechercherPB_clicked()\0"
    "on_enregistrerCongePB_clicked()\0"
    "on_actualiserPB_clicked()\0"
};

void SuviPersonel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SuviPersonel *_t = static_cast<SuviPersonel *>(_o);
        switch (_id) {
        case 0: _t->on_enregistrerAbsPB_clicked(); break;
        case 1: _t->on_RechercherPB_clicked(); break;
        case 2: _t->on_enregistrerCongePB_clicked(); break;
        case 3: _t->on_actualiserPB_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SuviPersonel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SuviPersonel::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SuviPersonel,
      qt_meta_data_SuviPersonel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SuviPersonel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SuviPersonel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SuviPersonel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SuviPersonel))
        return static_cast<void*>(const_cast< SuviPersonel*>(this));
    return QDialog::qt_metacast(_clname);
}

int SuviPersonel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
