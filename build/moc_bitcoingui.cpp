/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/bitcoingui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BitcoinGUI_t {
    QByteArrayData data[52];
    char stringdata0[686];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitcoinGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitcoinGUI_t qt_meta_stringdata_BitcoinGUI = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BitcoinGUI"
QT_MOC_LITERAL(1, 11, 17), // "setNumConnections"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "count"
QT_MOC_LITERAL(4, 36, 12), // "setNumBlocks"
QT_MOC_LITERAL(5, 49, 16), // "setNumBlocksConc"
QT_MOC_LITERAL(6, 66, 19), // "setEncryptionStatus"
QT_MOC_LITERAL(7, 86, 6), // "status"
QT_MOC_LITERAL(8, 93, 7), // "message"
QT_MOC_LITERAL(9, 101, 5), // "title"
QT_MOC_LITERAL(10, 107, 5), // "modal"
QT_MOC_LITERAL(11, 113, 5), // "style"
QT_MOC_LITERAL(12, 119, 6), // "askFee"
QT_MOC_LITERAL(13, 126, 12), // "nFeeRequired"
QT_MOC_LITERAL(14, 139, 5), // "bool*"
QT_MOC_LITERAL(15, 145, 6), // "payFee"
QT_MOC_LITERAL(16, 152, 9), // "handleURI"
QT_MOC_LITERAL(17, 162, 6), // "strURI"
QT_MOC_LITERAL(18, 169, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(19, 186, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(20, 202, 19), // "gotoAddressBookPage"
QT_MOC_LITERAL(21, 222, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(22, 243, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(23, 261, 25), // "gotoMasternodeManagerPage"
QT_MOC_LITERAL(24, 287, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(25, 306, 4), // "addr"
QT_MOC_LITERAL(26, 311, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(27, 332, 15), // "gotoMessagePage"
QT_MOC_LITERAL(28, 348, 14), // "optionsClicked"
QT_MOC_LITERAL(29, 363, 12), // "aboutClicked"
QT_MOC_LITERAL(30, 376, 17), // "trayIconActivated"
QT_MOC_LITERAL(31, 394, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(32, 428, 6), // "reason"
QT_MOC_LITERAL(33, 435, 19), // "incomingTransaction"
QT_MOC_LITERAL(34, 455, 6), // "parent"
QT_MOC_LITERAL(35, 462, 5), // "start"
QT_MOC_LITERAL(36, 468, 3), // "end"
QT_MOC_LITERAL(37, 472, 15), // "incomingMessage"
QT_MOC_LITERAL(38, 488, 13), // "encryptWallet"
QT_MOC_LITERAL(39, 502, 12), // "backupWallet"
QT_MOC_LITERAL(40, 515, 16), // "changePassphrase"
QT_MOC_LITERAL(41, 532, 12), // "unlockWallet"
QT_MOC_LITERAL(42, 545, 10), // "lockWallet"
QT_MOC_LITERAL(43, 556, 21), // "showNormalIfMinimized"
QT_MOC_LITERAL(44, 578, 13), // "fToggleHidden"
QT_MOC_LITERAL(45, 592, 12), // "toggleHidden"
QT_MOC_LITERAL(46, 605, 12), // "updateWeight"
QT_MOC_LITERAL(47, 618, 21), // "updateStakingIconConc"
QT_MOC_LITERAL(48, 640, 15), // "updateNumBlocks"
QT_MOC_LITERAL(49, 656, 9), // "totalSecs"
QT_MOC_LITERAL(50, 666, 4), // "secs"
QT_MOC_LITERAL(51, 671, 14) // "detectShutdown"

    },
    "BitcoinGUI\0setNumConnections\0\0count\0"
    "setNumBlocks\0setNumBlocksConc\0"
    "setEncryptionStatus\0status\0message\0"
    "title\0modal\0style\0askFee\0nFeeRequired\0"
    "bool*\0payFee\0handleURI\0strURI\0"
    "gotoOverviewPage\0gotoHistoryPage\0"
    "gotoAddressBookPage\0gotoReceiveCoinsPage\0"
    "gotoSendCoinsPage\0gotoMasternodeManagerPage\0"
    "gotoSignMessageTab\0addr\0gotoVerifyMessageTab\0"
    "gotoMessagePage\0optionsClicked\0"
    "aboutClicked\0trayIconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0incomingTransaction\0parent\0"
    "start\0end\0incomingMessage\0encryptWallet\0"
    "backupWallet\0changePassphrase\0"
    "unlockWallet\0lockWallet\0showNormalIfMinimized\0"
    "fToggleHidden\0toggleHidden\0updateWeight\0"
    "updateStakingIconConc\0updateNumBlocks\0"
    "totalSecs\0secs\0detectShutdown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  189,    2, 0x0a /* Public */,
       4,    1,  192,    2, 0x0a /* Public */,
       5,    1,  195,    2, 0x0a /* Public */,
       6,    1,  198,    2, 0x0a /* Public */,
       8,    4,  201,    2, 0x0a /* Public */,
      12,    2,  210,    2, 0x0a /* Public */,
      16,    1,  215,    2, 0x0a /* Public */,
      18,    0,  218,    2, 0x08 /* Private */,
      19,    0,  219,    2, 0x08 /* Private */,
      20,    0,  220,    2, 0x08 /* Private */,
      21,    0,  221,    2, 0x08 /* Private */,
      22,    0,  222,    2, 0x08 /* Private */,
      23,    0,  223,    2, 0x08 /* Private */,
      24,    1,  224,    2, 0x08 /* Private */,
      24,    0,  227,    2, 0x28 /* Private | MethodCloned */,
      26,    1,  228,    2, 0x08 /* Private */,
      26,    0,  231,    2, 0x28 /* Private | MethodCloned */,
      27,    0,  232,    2, 0x08 /* Private */,
      28,    0,  233,    2, 0x08 /* Private */,
      29,    0,  234,    2, 0x08 /* Private */,
      30,    1,  235,    2, 0x08 /* Private */,
      33,    3,  238,    2, 0x08 /* Private */,
      37,    3,  245,    2, 0x08 /* Private */,
      38,    0,  252,    2, 0x08 /* Private */,
      39,    0,  253,    2, 0x08 /* Private */,
      40,    0,  254,    2, 0x08 /* Private */,
      41,    0,  255,    2, 0x08 /* Private */,
      42,    0,  256,    2, 0x08 /* Private */,
      43,    1,  257,    2, 0x08 /* Private */,
      43,    0,  260,    2, 0x28 /* Private | MethodCloned */,
      45,    0,  261,    2, 0x08 /* Private */,
      46,    0,  262,    2, 0x08 /* Private */,
      47,    0,  263,    2, 0x08 /* Private */,
      48,    3,  264,    2, 0x08 /* Private */,
      51,    0,  271,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::UInt,    9,    8,   10,   11,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 14,   13,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   34,   35,   36,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   34,   35,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,   49,   50,
    QMetaType::Void,

       0        // eod
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setNumBlocksConc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 5: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 6: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->gotoOverviewPage(); break;
        case 8: _t->gotoHistoryPage(); break;
        case 9: _t->gotoAddressBookPage(); break;
        case 10: _t->gotoReceiveCoinsPage(); break;
        case 11: _t->gotoSendCoinsPage(); break;
        case 12: _t->gotoMasternodeManagerPage(); break;
        case 13: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->gotoSignMessageTab(); break;
        case 15: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->gotoVerifyMessageTab(); break;
        case 17: _t->gotoMessagePage(); break;
        case 18: _t->optionsClicked(); break;
        case 19: _t->aboutClicked(); break;
        case 20: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 21: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->incomingMessage((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 23: _t->encryptWallet(); break;
        case 24: _t->backupWallet(); break;
        case 25: _t->changePassphrase(); break;
        case 26: _t->unlockWallet(); break;
        case 27: _t->lockWallet(); break;
        case 28: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->showNormalIfMinimized(); break;
        case 30: _t->toggleHidden(); break;
        case 31: _t->updateWeight(); break;
        case 32: _t->updateStakingIconConc(); break;
        case 33: _t->updateNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 34: _t->detectShutdown(); break;
        default: ;
        }
    }
}

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI.data,
      qt_meta_data_BitcoinGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI.stringdata0))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 35;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
