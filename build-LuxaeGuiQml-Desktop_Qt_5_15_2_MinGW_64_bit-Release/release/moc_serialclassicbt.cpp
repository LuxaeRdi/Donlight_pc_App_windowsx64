/****************************************************************************
** Meta object code from reading C++ file 'serialclassicbt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LuxaeGuiQml_bluetooth/serialclassicbt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialclassicbt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_serialClassicBT_t {
    QByteArrayData data[28];
    char stringdata0[521];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_serialClassicBT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_serialClassicBT_t qt_meta_stringdata_serialClassicBT = {
    {
QT_MOC_LITERAL(0, 0, 15), // "serialClassicBT"
QT_MOC_LITERAL(1, 16, 16), // "BTdevicesRefresh"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "BTreceivedSerialData"
QT_MOC_LITERAL(4, 55, 28), // "justConnectedToBTsocketReady"
QT_MOC_LITERAL(5, 84, 15), // "connectBTdevice"
QT_MOC_LITERAL(6, 100, 4), // "addr"
QT_MOC_LITERAL(7, 105, 18), // "disconnectBTdevice"
QT_MOC_LITERAL(8, 124, 25), // "periodicBluetoothDiscover"
QT_MOC_LITERAL(9, 150, 27), // "deviceDiscoveryCacelledSLOT"
QT_MOC_LITERAL(10, 178, 20), // "deviceDiscoveredSLOT"
QT_MOC_LITERAL(11, 199, 20), // "QBluetoothDeviceInfo"
QT_MOC_LITERAL(12, 220, 6), // "device"
QT_MOC_LITERAL(13, 227, 17), // "deviceUpdatedSLOT"
QT_MOC_LITERAL(14, 245, 28), // "QBluetoothDeviceInfo::Fields"
QT_MOC_LITERAL(15, 274, 13), // "updatedFields"
QT_MOC_LITERAL(16, 288, 15), // "deviceerrorSLOT"
QT_MOC_LITERAL(17, 304, 37), // "QBluetoothDeviceDiscoveryAgen..."
QT_MOC_LITERAL(18, 342, 5), // "error"
QT_MOC_LITERAL(19, 348, 18), // "devicefinishedSLOT"
QT_MOC_LITERAL(20, 367, 16), // "serviceConnected"
QT_MOC_LITERAL(21, 384, 19), // "serviceDisconnected"
QT_MOC_LITERAL(22, 404, 12), // "serviceError"
QT_MOC_LITERAL(23, 417, 29), // "QBluetoothSocket::SocketError"
QT_MOC_LITERAL(24, 447, 19), // "servicestateChanged"
QT_MOC_LITERAL(25, 467, 29), // "QBluetoothSocket::SocketState"
QT_MOC_LITERAL(26, 497, 5), // "state"
QT_MOC_LITERAL(27, 503, 17) // "dataisreadyBTSLOT"

    },
    "serialClassicBT\0BTdevicesRefresh\0\0"
    "BTreceivedSerialData\0justConnectedToBTsocketReady\0"
    "connectBTdevice\0addr\0disconnectBTdevice\0"
    "periodicBluetoothDiscover\0"
    "deviceDiscoveryCacelledSLOT\0"
    "deviceDiscoveredSLOT\0QBluetoothDeviceInfo\0"
    "device\0deviceUpdatedSLOT\0"
    "QBluetoothDeviceInfo::Fields\0updatedFields\0"
    "deviceerrorSLOT\0QBluetoothDeviceDiscoveryAgent::Error\0"
    "error\0devicefinishedSLOT\0serviceConnected\0"
    "serviceDisconnected\0serviceError\0"
    "QBluetoothSocket::SocketError\0"
    "servicestateChanged\0QBluetoothSocket::SocketState\0"
    "state\0dataisreadyBTSLOT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_serialClassicBT[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   97,    2, 0x0a /* Public */,
       7,    1,  100,    2, 0x0a /* Public */,
       8,    0,  103,    2, 0x08 /* Private */,
       9,    0,  104,    2, 0x08 /* Private */,
      10,    1,  105,    2, 0x08 /* Private */,
      13,    2,  108,    2, 0x08 /* Private */,
      16,    1,  113,    2, 0x08 /* Private */,
      19,    0,  116,    2, 0x08 /* Private */,
      20,    0,  117,    2, 0x08 /* Private */,
      21,    0,  118,    2, 0x08 /* Private */,
      22,    1,  119,    2, 0x08 /* Private */,
      24,    1,  122,    2, 0x08 /* Private */,
      27,    0,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Int, QMetaType::QString,    6,
    QMetaType::Int, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 14,   12,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   18,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,

       0        // eod
};

void serialClassicBT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<serialClassicBT *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BTdevicesRefresh(); break;
        case 1: _t->BTreceivedSerialData(); break;
        case 2: _t->justConnectedToBTsocketReady(); break;
        case 3: { int _r = _t->connectBTdevice((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->disconnectBTdevice((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->periodicBluetoothDiscover(); break;
        case 6: _t->deviceDiscoveryCacelledSLOT(); break;
        case 7: _t->deviceDiscoveredSLOT((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1]))); break;
        case 8: _t->deviceUpdatedSLOT((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1])),(*reinterpret_cast< QBluetoothDeviceInfo::Fields(*)>(_a[2]))); break;
        case 9: _t->deviceerrorSLOT((*reinterpret_cast< QBluetoothDeviceDiscoveryAgent::Error(*)>(_a[1]))); break;
        case 10: _t->devicefinishedSLOT(); break;
        case 11: _t->serviceConnected(); break;
        case 12: _t->serviceDisconnected(); break;
        case 13: _t->serviceError((*reinterpret_cast< QBluetoothSocket::SocketError(*)>(_a[1]))); break;
        case 14: _t->servicestateChanged((*reinterpret_cast< QBluetoothSocket::SocketState(*)>(_a[1]))); break;
        case 15: _t->dataisreadyBTSLOT(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothDeviceInfo >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothDeviceInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (serialClassicBT::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialClassicBT::BTdevicesRefresh)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (serialClassicBT::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialClassicBT::BTreceivedSerialData)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (serialClassicBT::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialClassicBT::justConnectedToBTsocketReady)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject serialClassicBT::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_serialClassicBT.data,
    qt_meta_data_serialClassicBT,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *serialClassicBT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *serialClassicBT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_serialClassicBT.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int serialClassicBT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void serialClassicBT::BTdevicesRefresh()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void serialClassicBT::BTreceivedSerialData()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void serialClassicBT::justConnectedToBTsocketReady()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
