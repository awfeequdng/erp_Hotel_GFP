/****************************************************************************
** Meta object code from reading C++ file 'tarifs.h'
**
** Created: Thu 2. Jan 02:22:57 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tarifs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tarifs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tarifs[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      36,    7,    7,    7, 0x08,
      64,    7,    7,    7, 0x08,
      89,    7,    7,    7, 0x08,
     114,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tarifs[] = {
    "tarifs\0\0on_hauteSaison_Rb_clicked()\0"
    "on_basseSaison_Rb_clicked()\0"
    "on_afficher_Pb_clicked()\0"
    "on_modifier_Pb_clicked()\0"
    "on_retour2_Pb_clicked()\0"
};

void tarifs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tarifs *_t = static_cast<tarifs *>(_o);
        switch (_id) {
        case 0: _t->on_hauteSaison_Rb_clicked(); break;
        case 1: _t->on_basseSaison_Rb_clicked(); break;
        case 2: _t->on_afficher_Pb_clicked(); break;
        case 3: _t->on_modifier_Pb_clicked(); break;
        case 4: _t->on_retour2_Pb_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tarifs::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tarifs::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tarifs,
      qt_meta_data_tarifs, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tarifs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tarifs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tarifs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tarifs))
        return static_cast<void*>(const_cast< tarifs*>(this));
    return QDialog::qt_metacast(_clname);
}

int tarifs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
