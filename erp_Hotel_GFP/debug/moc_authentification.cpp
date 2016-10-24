/****************************************************************************
** Meta object code from reading C++ file 'authentification.h'
**
** Created: Thu 2. Jan 02:22:21 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../authentification.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'authentification.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_authentification[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      46,   41,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_authentification[] = {
    "authentification\0\0on_connexion_clicked()\0"
    "arg1\0on_check_2_stateChanged(int)\0"
};

void authentification::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        authentification *_t = static_cast<authentification *>(_o);
        switch (_id) {
        case 0: _t->on_connexion_clicked(); break;
        case 1: _t->on_check_2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData authentification::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject authentification::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_authentification,
      qt_meta_data_authentification, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &authentification::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *authentification::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *authentification::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_authentification))
        return static_cast<void*>(const_cast< authentification*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int authentification::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
