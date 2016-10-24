/****************************************************************************
** Meta object code from reading C++ file 'grh_directeur.h'
**
** Created: Thu 2. Jan 02:22:51 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../grh_directeur.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grh_directeur.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GRH_directeur[] = {

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
      15,   14,   14,   14, 0x08,
      39,   14,   14,   14, 0x08,
      64,   14,   14,   14, 0x08,
      99,   14,   14,   14, 0x08,
     133,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GRH_directeur[] = {
    "GRH_directeur\0\0on_R_Humaines_clicked()\0"
    "on_Suivi_Congs_clicked()\0"
    "on_planifierEntretiensPB_clicked()\0"
    "on_planningEntretiensPB_clicked()\0"
    "on_deconnecxionPB_clicked()\0"
};

void GRH_directeur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GRH_directeur *_t = static_cast<GRH_directeur *>(_o);
        switch (_id) {
        case 0: _t->on_R_Humaines_clicked(); break;
        case 1: _t->on_Suivi_Congs_clicked(); break;
        case 2: _t->on_planifierEntretiensPB_clicked(); break;
        case 3: _t->on_planningEntretiensPB_clicked(); break;
        case 4: _t->on_deconnecxionPB_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GRH_directeur::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GRH_directeur::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GRH_directeur,
      qt_meta_data_GRH_directeur, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GRH_directeur::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GRH_directeur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GRH_directeur::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GRH_directeur))
        return static_cast<void*>(const_cast< GRH_directeur*>(this));
    return QDialog::qt_metacast(_clname);
}

int GRH_directeur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
