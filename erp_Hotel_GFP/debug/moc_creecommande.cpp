/****************************************************************************
** Meta object code from reading C++ file 'creecommande.h'
**
** Created: Thu 2. Jan 02:23:18 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../creecommande.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'creecommande.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_creecommande[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      40,   35,   13,   13, 0x08,
      82,   35,   13,   13, 0x08,
     117,   13,   13,   13, 0x08,
     141,   13,   13,   13, 0x08,
     166,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_creecommande[] = {
    "creecommande\0\0on_ajouter_clicked()\0"
    "arg1\0on_articleCB_currentIndexChanged(QString)\0"
    "on_QuantiteLE_textChanged(QString)\0"
    "on_TerminerPB_clicked()\0"
    "on_SupprimerPB_clicked()\0"
    "on_passercmdPB_clicked()\0"
};

void creecommande::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        creecommande *_t = static_cast<creecommande *>(_o);
        switch (_id) {
        case 0: _t->on_ajouter_clicked(); break;
        case 1: _t->on_articleCB_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_QuantiteLE_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_TerminerPB_clicked(); break;
        case 4: _t->on_SupprimerPB_clicked(); break;
        case 5: _t->on_passercmdPB_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData creecommande::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject creecommande::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_creecommande,
      qt_meta_data_creecommande, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &creecommande::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *creecommande::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *creecommande::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_creecommande))
        return static_cast<void*>(const_cast< creecommande*>(this));
    return QWidget::qt_metacast(_clname);
}

int creecommande::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
