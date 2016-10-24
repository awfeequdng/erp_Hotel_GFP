/****************************************************************************
** Meta object code from reading C++ file 'modifier_entretien_mach.h'
**
** Created: Thu 2. Jan 22:55:40 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modifier_entretien_mach.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifier_entretien_mach.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_modifier_entretien_mach[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      50,   45,   24,   24, 0x08,
      97,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_modifier_entretien_mach[] = {
    "modifier_entretien_mach\0\0on_envoye_clicked()\0"
    "arg1\0on_id_entretien_2_currentIndexChanged(QString)\0"
    "on_pushButton_clicked()\0"
};

void modifier_entretien_mach::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        modifier_entretien_mach *_t = static_cast<modifier_entretien_mach *>(_o);
        switch (_id) {
        case 0: _t->on_envoye_clicked(); break;
        case 1: _t->on_id_entretien_2_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData modifier_entretien_mach::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject modifier_entretien_mach::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_modifier_entretien_mach,
      qt_meta_data_modifier_entretien_mach, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &modifier_entretien_mach::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *modifier_entretien_mach::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *modifier_entretien_mach::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_modifier_entretien_mach))
        return static_cast<void*>(const_cast< modifier_entretien_mach*>(this));
    return QDialog::qt_metacast(_clname);
}

int modifier_entretien_mach::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
