/****************************************************************************
** Meta object code from reading C++ file 'masternodemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/masternodemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MasternodeManager_t {
    QByteArrayData data[21];
    char stringdata0[407];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasternodeManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasternodeManager_t qt_meta_stringdata_MasternodeManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MasternodeManager"
QT_MOC_LITERAL(1, 18, 14), // "updateNodeList"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 18), // "updateNodeListConc"
QT_MOC_LITERAL(4, 53, 20), // "updateAdrenalineNode"
QT_MOC_LITERAL(5, 74, 5), // "alias"
QT_MOC_LITERAL(6, 80, 4), // "addr"
QT_MOC_LITERAL(7, 85, 7), // "privkey"
QT_MOC_LITERAL(8, 93, 10), // "collateral"
QT_MOC_LITERAL(9, 104, 20), // "filterMasternodeList"
QT_MOC_LITERAL(10, 125, 28), // "on_copyAddressButton_clicked"
QT_MOC_LITERAL(11, 154, 23), // "on_createButton_clicked"
QT_MOC_LITERAL(12, 178, 21), // "on_editButton_clicked"
QT_MOC_LITERAL(13, 200, 26), // "on_getConfigButton_clicked"
QT_MOC_LITERAL(14, 227, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(15, 250, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(16, 272, 25), // "on_startAllButton_clicked"
QT_MOC_LITERAL(17, 298, 24), // "on_stopAllButton_clicked"
QT_MOC_LITERAL(18, 323, 23), // "on_removeButton_clicked"
QT_MOC_LITERAL(19, 347, 37), // "on_tableWidget_2_itemSelectio..."
QT_MOC_LITERAL(20, 385, 21) // "updateMasternodeTable"

    },
    "MasternodeManager\0updateNodeList\0\0"
    "updateNodeListConc\0updateAdrenalineNode\0"
    "alias\0addr\0privkey\0collateral\0"
    "filterMasternodeList\0on_copyAddressButton_clicked\0"
    "on_createButton_clicked\0on_editButton_clicked\0"
    "on_getConfigButton_clicked\0"
    "on_startButton_clicked\0on_stopButton_clicked\0"
    "on_startAllButton_clicked\0"
    "on_stopAllButton_clicked\0"
    "on_removeButton_clicked\0"
    "on_tableWidget_2_itemSelectionChanged\0"
    "updateMasternodeTable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    4,   91,    2, 0x0a /* Public */,
       9,    0,  100,    2, 0x0a /* Public */,
      10,    0,  101,    2, 0x08 /* Private */,
      11,    0,  102,    2, 0x08 /* Private */,
      12,    0,  103,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,
      19,    0,  110,    2, 0x08 /* Private */,
      20,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasternodeManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasternodeManager *_t = static_cast<MasternodeManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateNodeList(); break;
        case 1: _t->updateNodeListConc(); break;
        case 2: _t->updateAdrenalineNode((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->filterMasternodeList(); break;
        case 4: _t->on_copyAddressButton_clicked(); break;
        case 5: _t->on_createButton_clicked(); break;
        case 6: _t->on_editButton_clicked(); break;
        case 7: _t->on_getConfigButton_clicked(); break;
        case 8: _t->on_startButton_clicked(); break;
        case 9: _t->on_stopButton_clicked(); break;
        case 10: _t->on_startAllButton_clicked(); break;
        case 11: _t->on_stopAllButton_clicked(); break;
        case 12: _t->on_removeButton_clicked(); break;
        case 13: _t->on_tableWidget_2_itemSelectionChanged(); break;
        case 14: _t->updateMasternodeTable(); break;
        default: ;
        }
    }
}

const QMetaObject MasternodeManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasternodeManager.data,
      qt_meta_data_MasternodeManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MasternodeManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeManager.stringdata0))
        return static_cast<void*>(const_cast< MasternodeManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int MasternodeManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
