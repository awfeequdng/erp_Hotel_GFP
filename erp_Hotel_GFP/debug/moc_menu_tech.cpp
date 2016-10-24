/****************************************************************************
** Meta object code from reading C++ file 'menu_tech.h'
**
** Created: Thu 2. Jan 02:22:31 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../menu_tech.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu_tech.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_menu_tech[] = {

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
      11,   10,   10,   10, 0x08,
      35,   10,   10,   10, 0x08,
      61,   10,   10,   10, 0x08,
      91,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_menu_tech[] = {
    "menu_tech\0\0on_pushButton_clicked()\0"
    "on_plan_travail_clicked()\0"
    "on_etat_de_machines_clicked()\0"
    "on_deco_pb_clicked()\0"
};

void menu_tech::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        menu_tech *_t = static_cast<menu_tech *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_plan_travail_clicked(); break;
        case 2: _t->on_etat_de_machines_clicked(); break;
        case 3: _t->on_deco_pb_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData menu_tech::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject menu_tech::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_menu_tech,
      qt_meta_data_menu_tech, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &menu_tech::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *menu_tech::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *menu_tech::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_menu_tech))
        return static_cast<void*>(const_cast< menu_tech*>(this));
    return QDialog::qt_metacast(_clname);
}

int menu_tech::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
