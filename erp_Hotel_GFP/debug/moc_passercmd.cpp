/****************************************************************************
** Meta object code from reading C++ file 'passercmd.h'
**
** Created: Thu 2. Jan 02:23:10 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../passercmd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'passercmd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_passercmd[] = {

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
      16,   11,   10,   10, 0x08,
      61,   11,   10,   10, 0x08,
      93,   10,   10,   10, 0x08,
     118,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_passercmd[] = {
    "passercmd\0\0arg1\0"
    "on_specialiteCB_currentIndexChanged(QString)\0"
    "on_detailsChB_stateChanged(int)\0"
    "on_CommanderPB_clicked()\0"
    "on_validerStockPB_clicked()\0"
};

void passercmd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        passercmd *_t = static_cast<passercmd *>(_o);
        switch (_id) {
        case 0: _t->on_specialiteCB_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_detailsChB_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_CommanderPB_clicked(); break;
        case 3: _t->on_validerStockPB_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData passercmd::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject passercmd::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_passercmd,
      qt_meta_data_passercmd, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &passercmd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *passercmd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *passercmd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_passercmd))
        return static_cast<void*>(const_cast< passercmd*>(this));
    return QWidget::qt_metacast(_clname);
}

int passercmd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
