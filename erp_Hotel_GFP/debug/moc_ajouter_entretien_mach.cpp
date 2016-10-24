/****************************************************************************
** Meta object code from reading C++ file 'ajouter_entretien_mach.h'
**
** Created: Thu 2. Jan 02:22:44 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ajouter_entretien_mach.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ajouter_entretien_mach.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ajouter_entretien_mach[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x08,
      45,   23,   23,   23, 0x08,
      68,   23,   23,   23, 0x08,
      91,   23,   23,   23, 0x08,
     139,  134,   23,   23, 0x08,
     176,  134,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ajouter_entretien_mach[] = {
    "ajouter_entretien_mach\0\0on_menu_Pb_clicked()\0"
    "on_actualise_clicked()\0on_envoye_PB_clicked()\0"
    "on_id_entretien_LE_cursorPositionChanged()\0"
    "arg1\0on_id_mach_2_CB_highlighted(QString)\0"
    "on_id_tech_CB_highlighted(QString)\0"
};

void ajouter_entretien_mach::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ajouter_entretien_mach *_t = static_cast<ajouter_entretien_mach *>(_o);
        switch (_id) {
        case 0: _t->on_menu_Pb_clicked(); break;
        case 1: _t->on_actualise_clicked(); break;
        case 2: _t->on_envoye_PB_clicked(); break;
        case 3: _t->on_id_entretien_LE_cursorPositionChanged(); break;
        case 4: _t->on_id_mach_2_CB_highlighted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_id_tech_CB_highlighted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ajouter_entretien_mach::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ajouter_entretien_mach::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ajouter_entretien_mach,
      qt_meta_data_ajouter_entretien_mach, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ajouter_entretien_mach::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ajouter_entretien_mach::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ajouter_entretien_mach::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ajouter_entretien_mach))
        return static_cast<void*>(const_cast< ajouter_entretien_mach*>(this));
    return QDialog::qt_metacast(_clname);
}

int ajouter_entretien_mach::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
