/****************************************************************************
** Meta object code from reading C++ file 'imprimercmd.h'
**
** Created: Thu 2. Jan 02:23:14 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../imprimercmd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imprimercmd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_imprimercmd[] = {

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
      13,   12,   12,   12, 0x08,
      42,   37,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_imprimercmd[] = {
    "imprimercmd\0\0on_imprimerPB_clicked()\0"
    "arg1\0on_cmdnumCB_currentIndexChanged(QString)\0"
};

void imprimercmd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        imprimercmd *_t = static_cast<imprimercmd *>(_o);
        switch (_id) {
        case 0: _t->on_imprimerPB_clicked(); break;
        case 1: _t->on_cmdnumCB_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData imprimercmd::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject imprimercmd::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_imprimercmd,
      qt_meta_data_imprimercmd, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &imprimercmd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *imprimercmd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *imprimercmd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_imprimercmd))
        return static_cast<void*>(const_cast< imprimercmd*>(this));
    return QWidget::qt_metacast(_clname);
}

int imprimercmd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
