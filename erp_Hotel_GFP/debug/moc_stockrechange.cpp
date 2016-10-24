/****************************************************************************
** Meta object code from reading C++ file 'stockrechange.h'
**
** Created: Thu 2. Jan 02:23:09 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../stockrechange.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stockrechange.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_stockrechange[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      35,   14,   14,   14, 0x08,
      53,   14,   14,   14, 0x08,
      76,   14,   14,   14, 0x08,
     104,   14,   14,   14, 0x08,
     127,   14,   14,   14, 0x08,
     158,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_stockrechange[] = {
    "stockrechange\0\0on_CsltQD_clicked()\0"
    "on_CCmd_clicked()\0on_PasserCmd_clicked()\0"
    "on_AjouterArticle_clicked()\0"
    "on_supprimer_clicked()\0"
    "on_commandLinkButton_clicked()\0"
    "on_deconnex_clicked()\0"
};

void stockrechange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        stockrechange *_t = static_cast<stockrechange *>(_o);
        switch (_id) {
        case 0: _t->on_CsltQD_clicked(); break;
        case 1: _t->on_CCmd_clicked(); break;
        case 2: _t->on_PasserCmd_clicked(); break;
        case 3: _t->on_AjouterArticle_clicked(); break;
        case 4: _t->on_supprimer_clicked(); break;
        case 5: _t->on_commandLinkButton_clicked(); break;
        case 6: _t->on_deconnex_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData stockrechange::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject stockrechange::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_stockrechange,
      qt_meta_data_stockrechange, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &stockrechange::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *stockrechange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *stockrechange::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_stockrechange))
        return static_cast<void*>(const_cast< stockrechange*>(this));
    return QWidget::qt_metacast(_clname);
}

int stockrechange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
