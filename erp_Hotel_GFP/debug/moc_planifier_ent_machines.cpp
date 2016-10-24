/****************************************************************************
** Meta object code from reading C++ file 'planifier_ent_machines.h'
**
** Created: Thu 2. Jan 02:22:25 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../planifier_ent_machines.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planifier_ent_machines.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_planifier_ent_machines[] = {

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
      24,   23,   23,   23, 0x08,
      48,   23,   23,   23, 0x08,
      67,   23,   23,   23, 0x08,
      93,   23,   23,   23, 0x08,
     122,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_planifier_ent_machines[] = {
    "planifier_ent_machines\0\0on_pushButton_clicked()\0"
    "on_ajout_clicked()\0on_modification_clicked()\0"
    "on_supprimer_ent_2_clicked()\0"
    "on_supprimer_ent_clicked()\0"
};

void planifier_ent_machines::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        planifier_ent_machines *_t = static_cast<planifier_ent_machines *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_ajout_clicked(); break;
        case 2: _t->on_modification_clicked(); break;
        case 3: _t->on_supprimer_ent_2_clicked(); break;
        case 4: _t->on_supprimer_ent_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData planifier_ent_machines::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject planifier_ent_machines::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_planifier_ent_machines,
      qt_meta_data_planifier_ent_machines, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &planifier_ent_machines::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *planifier_ent_machines::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *planifier_ent_machines::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_planifier_ent_machines))
        return static_cast<void*>(const_cast< planifier_ent_machines*>(this));
    return QDialog::qt_metacast(_clname);
}

int planifier_ent_machines::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
