/****************************************************************************
** Meta object code from reading C++ file 'menu_chef.h'
**
** Created: Thu 2. Jan 02:22:32 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../menu_chef.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu_chef.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_menu_chef[] = {

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
      11,   10,   10,   10, 0x08,
      40,   10,   10,   10, 0x08,
      83,   10,   10,   10, 0x08,
     127,   10,   10,   10, 0x08,
     157,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_menu_chef[] = {
    "menu_chef\0\0on_ajouter_machine_clicked()\0"
    "on_consulter_historique_machines_clicked()\0"
    "on_planifier_entretients_machines_clicked()\0"
    "on_commander_pieces_clicked()\0"
    "on_deco_pb_clicked()\0"
};

void menu_chef::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        menu_chef *_t = static_cast<menu_chef *>(_o);
        switch (_id) {
        case 0: _t->on_ajouter_machine_clicked(); break;
        case 1: _t->on_consulter_historique_machines_clicked(); break;
        case 2: _t->on_planifier_entretients_machines_clicked(); break;
        case 3: _t->on_commander_pieces_clicked(); break;
        case 4: _t->on_deco_pb_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData menu_chef::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject menu_chef::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_menu_chef,
      qt_meta_data_menu_chef, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &menu_chef::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *menu_chef::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *menu_chef::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_menu_chef))
        return static_cast<void*>(const_cast< menu_chef*>(this));
    return QDialog::qt_metacast(_clname);
}

int menu_chef::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
