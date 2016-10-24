/****************************************************************************
** Meta object code from reading C++ file 'suppmod.h'
**
** Created: Thu 2. Jan 02:23:07 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../suppmod.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'suppmod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_suppmod[] = {

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
       9,    8,    8,    8, 0x08,
      29,    8,    8,    8, 0x08,
      46,    8,    8,    8, 0x08,
      63,    8,    8,    8, 0x08,
      91,   86,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_suppmod[] = {
    "suppmod\0\0on_modsup_clicked()\0"
    "on_mod_clicked()\0on_sup_clicked()\0"
    "on_validerPB_clicked()\0arg1\0"
    "on_idALE_textChanged(QString)\0"
};

void suppmod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        suppmod *_t = static_cast<suppmod *>(_o);
        switch (_id) {
        case 0: _t->on_modsup_clicked(); break;
        case 1: _t->on_mod_clicked(); break;
        case 2: _t->on_sup_clicked(); break;
        case 3: _t->on_validerPB_clicked(); break;
        case 4: _t->on_idALE_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData suppmod::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject suppmod::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_suppmod,
      qt_meta_data_suppmod, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &suppmod::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *suppmod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *suppmod::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_suppmod))
        return static_cast<void*>(const_cast< suppmod*>(this));
    return QWidget::qt_metacast(_clname);
}

int suppmod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
