/****************************************************************************
** Meta object code from reading C++ file 'ajouterpersonel.h'
**
** Created: Thu 2. Jan 23:10:57 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ajouterpersonel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ajouterpersonel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AjouterPersonel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      44,   16,   16,   16, 0x08,
      73,   16,   16,   16, 0x08,
      98,   16,   16,   16, 0x08,
     121,   16,   16,   16, 0x08,
     147,   16,   16,   16, 0x08,
     169,   16,   16,   16, 0x08,
     197,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AjouterPersonel[] = {
    "AjouterPersonel\0\0on_enregistrerPB_clicked()\0"
    "on_RechercherGrhPB_clicked()\0"
    "on_supprimerPB_clicked()\0"
    "on_nouveauPB_clicked()\0on_actualiserPB_clicked()\0"
    "on_SortieCL_clicked()\0on_enregistrerPB2_clicked()\0"
    "on_deconnectionPB_clicked()\0"
};

void AjouterPersonel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AjouterPersonel *_t = static_cast<AjouterPersonel *>(_o);
        switch (_id) {
        case 0: _t->on_enregistrerPB_clicked(); break;
        case 1: _t->on_RechercherGrhPB_clicked(); break;
        case 2: _t->on_supprimerPB_clicked(); break;
        case 3: _t->on_nouveauPB_clicked(); break;
        case 4: _t->on_actualiserPB_clicked(); break;
        case 5: _t->on_SortieCL_clicked(); break;
        case 6: _t->on_enregistrerPB2_clicked(); break;
        case 7: _t->on_deconnectionPB_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AjouterPersonel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AjouterPersonel::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AjouterPersonel,
      qt_meta_data_AjouterPersonel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AjouterPersonel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AjouterPersonel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AjouterPersonel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AjouterPersonel))
        return static_cast<void*>(const_cast< AjouterPersonel*>(this));
    return QDialog::qt_metacast(_clname);
}

int AjouterPersonel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
