/****************************************************************************
** Meta object code from reading C++ file 'VisiTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../VisiTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisiTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VisiTest_t {
    QByteArrayData data[14];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisiTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisiTest_t qt_meta_stringdata_VisiTest = {
    {
QT_MOC_LITERAL(0, 0, 8), // "VisiTest"
QT_MOC_LITERAL(1, 9, 11), // "testSuivant"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "demarrer"
QT_MOC_LITERAL(4, 31, 7), // "arreter"
QT_MOC_LITERAL(5, 39, 5), // "vider"
QT_MOC_LITERAL(6, 45, 8), // "modeFile"
QT_MOC_LITERAL(7, 54, 8), // "modePile"
QT_MOC_LITERAL(8, 63, 7), // "premier"
QT_MOC_LITERAL(9, 71, 7), // "dernier"
QT_MOC_LITERAL(10, 79, 9), // "precedent"
QT_MOC_LITERAL(11, 89, 7), // "suivant"
QT_MOC_LITERAL(12, 97, 11), // "sauvegarder"
QT_MOC_LITERAL(13, 109, 7) // "quitter"

    },
    "VisiTest\0testSuivant\0\0demarrer\0arreter\0"
    "vider\0modeFile\0modePile\0premier\0dernier\0"
    "precedent\0suivant\0sauvegarder\0quitter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisiTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,

 // slots: parameters
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

void VisiTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VisiTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testSuivant(); break;
        case 1: _t->demarrer(); break;
        case 2: _t->arreter(); break;
        case 3: _t->vider(); break;
        case 4: _t->modeFile(); break;
        case 5: _t->modePile(); break;
        case 6: _t->premier(); break;
        case 7: _t->dernier(); break;
        case 8: _t->precedent(); break;
        case 9: _t->suivant(); break;
        case 10: _t->sauvegarder(); break;
        case 11: _t->quitter(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VisiTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_VisiTest.data,
    qt_meta_data_VisiTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VisiTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisiTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VisiTest.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int VisiTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
