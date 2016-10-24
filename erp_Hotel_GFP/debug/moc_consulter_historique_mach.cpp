/****************************************************************************
** Meta object code from reading C++ file 'consulter_historique_mach.h'
**
** Created: Thu 2. Jan 02:22:38 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../consulter_historique_mach.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'consulter_historique_mach.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_consulter_historique_mach[] = {

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
      27,   26,   26,   26, 0x08,
      58,   26,   26,   26, 0x08,
      90,   26,   26,   26, 0x08,
     117,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_consulter_historique_mach[] = {
    "consulter_historique_mach\0\0"
    "on_panne_machines_PB_clicked()\0"
    "on_recherche_panne_pb_clicked()\0"
    "on_planif_ent_pb_clicked()\0on_menu_clicked()\0"
};

void consulter_historique_mach::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        consulter_historique_mach *_t = static_cast<consulter_historique_mach *>(_o);
        switch (_id) {
        case 0: _t->on_panne_machines_PB_clicked(); break;
        case 1: _t->on_recherche_panne_pb_clicked(); break;
        case 2: _t->on_planif_ent_pb_clicked(); break;
        case 3: _t->on_menu_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData consulter_historique_mach::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject consulter_historique_mach::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_consulter_historique_mach,
      qt_meta_data_consulter_historique_mach, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &consulter_historique_mach::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *consulter_historique_mach::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *consulter_historique_mach::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_consulter_historique_mach))
        return static_cast<void*>(const_cast< consulter_historique_mach*>(this));
    return QDialog::qt_metacast(_clname);
}

int consulter_historique_mach::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
