/****************************************************************************
** Meta object code from reading C++ file 'serialcoms.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LuxaeGuiQml/serialcoms.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialcoms.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_serialCOMs_t {
    QByteArrayData data[67];
    char stringdata0[1029];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_serialCOMs_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_serialCOMs_t qt_meta_stringdata_serialCOMs = {
    {
QT_MOC_LITERAL(0, 0, 10), // "serialCOMs"
QT_MOC_LITERAL(1, 11, 18), // "serialtextreceived"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "txt"
QT_MOC_LITERAL(4, 35, 14), // "serialtextsent"
QT_MOC_LITERAL(5, 50, 13), // "comdiscovered"
QT_MOC_LITERAL(6, 64, 4), // "data"
QT_MOC_LITERAL(7, 69, 13), // "alreadyopened"
QT_MOC_LITERAL(8, 83, 8), // "comerase"
QT_MOC_LITERAL(9, 92, 15), // "centergriderase"
QT_MOC_LITERAL(10, 108, 14), // "uuiddiscovered"
QT_MOC_LITERAL(11, 123, 7), // "newuuid"
QT_MOC_LITERAL(12, 131, 10), // "rawnewuuid"
QT_MOC_LITERAL(13, 142, 12), // "inforeceived"
QT_MOC_LITERAL(14, 155, 16), // "configdescriptor"
QT_MOC_LITERAL(15, 172, 9), // "hwversion"
QT_MOC_LITERAL(16, 182, 9), // "fwversion"
QT_MOC_LITERAL(17, 192, 10), // "uuidstring"
QT_MOC_LITERAL(18, 203, 18), // "patternsdescriptor"
QT_MOC_LITERAL(19, 222, 7), // "gitinfo"
QT_MOC_LITERAL(20, 230, 9), // "buildinfo"
QT_MOC_LITERAL(21, 240, 19), // "canbusflashprogress"
QT_MOC_LITERAL(22, 260, 10), // "errorframe"
QT_MOC_LITERAL(23, 271, 21), // "typeofbinbeingflashed"
QT_MOC_LITERAL(24, 293, 9), // "pingsound"
QT_MOC_LITERAL(25, 303, 23), // "setupListFoldersupdated"
QT_MOC_LITERAL(26, 327, 9), // "setuplist"
QT_MOC_LITERAL(27, 337, 14), // "updateNewSetup"
QT_MOC_LITERAL(28, 352, 4), // "path"
QT_MOC_LITERAL(29, 357, 16), // "enableqmlbuttons"
QT_MOC_LITERAL(30, 374, 6), // "enable"
QT_MOC_LITERAL(31, 381, 23), // "timeoutCOMportsDiscover"
QT_MOC_LITERAL(32, 405, 23), // "timeoutDonLightDiscover"
QT_MOC_LITERAL(33, 429, 21), // "timeoutTurningsignals"
QT_MOC_LITERAL(34, 451, 17), // "writesetupfolders"
QT_MOC_LITERAL(35, 469, 30), // "sendingSloweredChoppedSeriaUSB"
QT_MOC_LITERAL(36, 500, 15), // "setsetupfolders"
QT_MOC_LITERAL(37, 516, 16), // "newselectedSetup"
QT_MOC_LITERAL(38, 533, 10), // "openSerial"
QT_MOC_LITERAL(39, 544, 11), // "closeSerial"
QT_MOC_LITERAL(40, 556, 17), // "writeSerialString"
QT_MOC_LITERAL(41, 574, 14), // "fowardto_qInfo"
QT_MOC_LITERAL(42, 589, 20), // "writeSerialbytearray"
QT_MOC_LITERAL(43, 610, 30), // "updatejustdataVirtualButtonPad"
QT_MOC_LITERAL(44, 641, 21), // "cleanVirtualButtonPad"
QT_MOC_LITERAL(45, 663, 22), // "updateVirtualButtonPad"
QT_MOC_LITERAL(46, 686, 17), // "discoverDONLIGHTS"
QT_MOC_LITERAL(47, 704, 21), // "getInfoOfAllDONLIGHTS"
QT_MOC_LITERAL(48, 726, 26), // "enterbootmodeOfOneDONLIGHT"
QT_MOC_LITERAL(49, 753, 4), // "uuid"
QT_MOC_LITERAL(50, 758, 23), // "flashERASEOfOneDONLIGHT"
QT_MOC_LITERAL(51, 782, 20), // "updateOfAllDONLIGHTS"
QT_MOC_LITERAL(52, 803, 5), // "uuids"
QT_MOC_LITERAL(53, 809, 18), // "patterns_filenames"
QT_MOC_LITERAL(54, 828, 17), // "configs_filenames"
QT_MOC_LITERAL(55, 846, 12), // "fw_filenames"
QT_MOC_LITERAL(56, 859, 2), // "hw"
QT_MOC_LITERAL(57, 862, 14), // "typeofbinaries"
QT_MOC_LITERAL(58, 877, 19), // "updateOfoneDONLIGHT"
QT_MOC_LITERAL(59, 897, 17), // "patterns_filename"
QT_MOC_LITERAL(60, 915, 16), // "configs_filename"
QT_MOC_LITERAL(61, 932, 11), // "fw_filename"
QT_MOC_LITERAL(62, 944, 22), // "typeofbinaries_command"
QT_MOC_LITERAL(63, 967, 14), // "turningsignals"
QT_MOC_LITERAL(64, 982, 13), // "turningsignal"
QT_MOC_LITERAL(65, 996, 15), // "getinternaltemp"
QT_MOC_LITERAL(66, 1012, 16) // "openFileExplorer"

    },
    "serialCOMs\0serialtextreceived\0\0txt\0"
    "serialtextsent\0comdiscovered\0data\0"
    "alreadyopened\0comerase\0centergriderase\0"
    "uuiddiscovered\0newuuid\0rawnewuuid\0"
    "inforeceived\0configdescriptor\0hwversion\0"
    "fwversion\0uuidstring\0patternsdescriptor\0"
    "gitinfo\0buildinfo\0canbusflashprogress\0"
    "errorframe\0typeofbinbeingflashed\0"
    "pingsound\0setupListFoldersupdated\0"
    "setuplist\0updateNewSetup\0path\0"
    "enableqmlbuttons\0enable\0timeoutCOMportsDiscover\0"
    "timeoutDonLightDiscover\0timeoutTurningsignals\0"
    "writesetupfolders\0sendingSloweredChoppedSeriaUSB\0"
    "setsetupfolders\0newselectedSetup\0"
    "openSerial\0closeSerial\0writeSerialString\0"
    "fowardto_qInfo\0writeSerialbytearray\0"
    "updatejustdataVirtualButtonPad\0"
    "cleanVirtualButtonPad\0updateVirtualButtonPad\0"
    "discoverDONLIGHTS\0getInfoOfAllDONLIGHTS\0"
    "enterbootmodeOfOneDONLIGHT\0uuid\0"
    "flashERASEOfOneDONLIGHT\0updateOfAllDONLIGHTS\0"
    "uuids\0patterns_filenames\0configs_filenames\0"
    "fw_filenames\0hw\0typeofbinaries\0"
    "updateOfoneDONLIGHT\0patterns_filename\0"
    "configs_filename\0fw_filename\0"
    "typeofbinaries_command\0turningsignals\0"
    "turningsignal\0getinternaltemp\0"
    "openFileExplorer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_serialCOMs[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  199,    2, 0x06 /* Public */,
       4,    1,  202,    2, 0x06 /* Public */,
       5,    2,  205,    2, 0x06 /* Public */,
       8,    0,  210,    2, 0x06 /* Public */,
       9,    0,  211,    2, 0x06 /* Public */,
      10,    2,  212,    2, 0x06 /* Public */,
      13,    7,  217,    2, 0x06 /* Public */,
      21,    4,  232,    2, 0x06 /* Public */,
      24,    0,  241,    2, 0x06 /* Public */,
      25,    1,  242,    2, 0x06 /* Public */,
      27,    1,  245,    2, 0x06 /* Public */,
      29,    1,  248,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    0,  251,    2, 0x08 /* Private */,
      32,    0,  252,    2, 0x08 /* Private */,
      33,    0,  253,    2, 0x08 /* Private */,
      34,    1,  254,    2, 0x08 /* Private */,
      35,    0,  257,    2, 0x08 /* Private */,
      36,    0,  258,    2, 0x0a /* Public */,
      37,    1,  259,    2, 0x0a /* Public */,
      38,    1,  262,    2, 0x0a /* Public */,
      39,    0,  265,    2, 0x0a /* Public */,
      40,    2,  266,    2, 0x0a /* Public */,
      40,    1,  271,    2, 0x2a /* Public | MethodCloned */,
      42,    2,  274,    2, 0x0a /* Public */,
      42,    1,  279,    2, 0x2a /* Public | MethodCloned */,
      43,    1,  282,    2, 0x0a /* Public */,
      44,    1,  285,    2, 0x0a /* Public */,
      45,    1,  288,    2, 0x0a /* Public */,
      46,    0,  291,    2, 0x0a /* Public */,
      47,    0,  292,    2, 0x0a /* Public */,
      48,    1,  293,    2, 0x0a /* Public */,
      50,    1,  296,    2, 0x0a /* Public */,
      51,    6,  299,    2, 0x0a /* Public */,
      58,    5,  312,    2, 0x0a /* Public */,
      63,    1,  323,    2, 0x0a /* Public */,
      65,    1,  326,    2, 0x0a /* Public */,
      66,    0,  329,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariant,   11,   12,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   14,   15,   16,   17,   18,   19,   20,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Int, QMetaType::Int, QMetaType::QVariant,   17,   21,   22,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   26,
    QMetaType::Void, QMetaType::QVariant,   28,
    QMetaType::Void, QMetaType::QVariant,   30,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,   41,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Bool,    6,   41,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   52,   53,   54,   55,   56,   57,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   49,   59,   60,   61,   62,
    QMetaType::Void, QMetaType::QString,   64,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void,

       0        // eod
};

void serialCOMs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<serialCOMs *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serialtextreceived((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->serialtextsent((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->comdiscovered((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->comerase(); break;
        case 4: _t->centergriderase(); break;
        case 5: _t->uuiddiscovered((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 6: _t->inforeceived((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4])),(*reinterpret_cast< QVariant(*)>(_a[5])),(*reinterpret_cast< QVariant(*)>(_a[6])),(*reinterpret_cast< QVariant(*)>(_a[7]))); break;
        case 7: _t->canbusflashprogress((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 8: _t->pingsound(); break;
        case 9: _t->setupListFoldersupdated((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 10: _t->updateNewSetup((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 11: _t->enableqmlbuttons((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 12: _t->timeoutCOMportsDiscover(); break;
        case 13: _t->timeoutDonLightDiscover(); break;
        case 14: _t->timeoutTurningsignals(); break;
        case 15: _t->writesetupfolders((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 16: _t->sendingSloweredChoppedSeriaUSB(); break;
        case 17: _t->setsetupfolders(); break;
        case 18: _t->newselectedSetup((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->openSerial((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->closeSerial(); break;
        case 21: _t->writeSerialString((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->writeSerialString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->writeSerialbytearray((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 24: _t->writeSerialbytearray((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 25: _t->updatejustdataVirtualButtonPad((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 26: _t->cleanVirtualButtonPad((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 27: _t->updateVirtualButtonPad((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 28: _t->discoverDONLIGHTS(); break;
        case 29: _t->getInfoOfAllDONLIGHTS(); break;
        case 30: _t->enterbootmodeOfOneDONLIGHT((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->flashERASEOfOneDONLIGHT((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->updateOfAllDONLIGHTS((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 33: _t->updateOfoneDONLIGHT((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 34: _t->turningsignals((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->getinternaltemp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->openFileExplorer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (serialCOMs::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialCOMs::serialtextreceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (serialCOMs::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialCOMs::serialtextsent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (serialCOMs::*)(QVariant , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialCOMs::comdiscovered)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (serialCOMs::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialCOMs::comerase)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (serialCOMs::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialCOMs::centergriderase)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (serialCOMs::*)(QVariant , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialCOMs::uuiddiscovered)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (serialCOMs::*)(QVariant , QVariant , QVariant , QVariant , QVariant , QVariant , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialCOMs::inforeceived)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (serialCOMs::*)(QVariant , int , int , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialCOMs::canbusflashprogress)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (serialCOMs::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialCOMs::pingsound)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (serialCOMs::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialCOMs::setupListFoldersupdated)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (serialCOMs::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialCOMs::updateNewSetup)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (serialCOMs::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serialCOMs::enableqmlbuttons)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject serialCOMs::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_serialCOMs.data,
    qt_meta_data_serialCOMs,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *serialCOMs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *serialCOMs::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_serialCOMs.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int serialCOMs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void serialCOMs::serialtextreceived(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void serialCOMs::serialtextsent(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void serialCOMs::comdiscovered(QVariant _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void serialCOMs::comerase()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void serialCOMs::centergriderase()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void serialCOMs::uuiddiscovered(QVariant _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void serialCOMs::inforeceived(QVariant _t1, QVariant _t2, QVariant _t3, QVariant _t4, QVariant _t5, QVariant _t6, QVariant _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void serialCOMs::canbusflashprogress(QVariant _t1, int _t2, int _t3, QVariant _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void serialCOMs::pingsound()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void serialCOMs::setupListFoldersupdated(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void serialCOMs::updateNewSetup(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void serialCOMs::enableqmlbuttons(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
