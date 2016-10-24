/****************************************************************************
** Meta object code from reading C++ file 'machines.h'
**
** Created: Thu 2. Jan 22:55:42 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../machines.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'machines.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_machines[] = {

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
      10,    9,    9,    9, 0x08,
      32,    9,    9,    9, 0x08,
      66,    9,    9,    9, 0x08,
      97,    9,    9,    9, 0x08,
     130,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_machines[] = {
    "machines\0\0on_ajout_pb_clicked()\0"
    "on_modification_mach_pb_clicked()\0"
    "on_supprimer_mach_pb_clicked()\0"
    "on_supprimer_mach_pb_2_clicked()\0"
    "on_pushButton_clicked()\0"
};

void machines::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        machines *_t = static_cast<machines *>(_o);
        switch (_id) {
        case 0: _t->on_ajout_pb_clicked(); break;
        case 1: _t->on_modification_mach_pb_clicked(); break;
        case 2: _t->on_supprimer_mach_pb_clicked(); break;
        case 3: _t->on_supprimer_mach_pb_2_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData machines::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject machines::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_machines,
      qt_meta_data_machines, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &machines::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *machines::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *machines::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_machines))
        return static_cast<void*>(const_cast< machines*>(this));
    return QDialog::qt_metacast(_clname);
}

int machines::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
