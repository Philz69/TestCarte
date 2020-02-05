/****************************************************************************
** Meta object code from reading C++ file 'centralwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../centralwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'centralwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DonneeWidget_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DonneeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DonneeWidget_t qt_meta_stringdata_DonneeWidget = {
    {
QT_MOC_LITERAL(0, 0, 12) // "DonneeWidget"

    },
    "DonneeWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DonneeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DonneeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DonneeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DonneeWidget.data,
    qt_meta_data_DonneeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DonneeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DonneeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DonneeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DonneeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TestWidget_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestWidget_t qt_meta_stringdata_TestWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TestWidget"
QT_MOC_LITERAL(1, 11, 17), // "testButtonClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11) // "testClicked"

    },
    "TestWidget\0testButtonClicked\0\0testClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void TestWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testButtonClicked(); break;
        case 1: _t->testClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TestWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestWidget::testButtonClicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TestWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TestWidget.data,
    qt_meta_data_TestWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TestWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TestWidget::testButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ArchiveWidget_t {
    QByteArrayData data[10];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArchiveWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArchiveWidget_t qt_meta_stringdata_ArchiveWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ArchiveWidget"
QT_MOC_LITERAL(1, 14, 19), // "firstArchiveClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 18), // "lastArchiveClicked"
QT_MOC_LITERAL(4, 54, 22), // "previousArchiveClicked"
QT_MOC_LITERAL(5, 77, 18), // "nextArchiveClicked"
QT_MOC_LITERAL(6, 96, 12), // "firstClicked"
QT_MOC_LITERAL(7, 109, 11), // "lastClicked"
QT_MOC_LITERAL(8, 121, 15), // "previousClicked"
QT_MOC_LITERAL(9, 137, 11) // "nextClicked"

    },
    "ArchiveWidget\0firstArchiveClicked\0\0"
    "lastArchiveClicked\0previousArchiveClicked\0"
    "nextArchiveClicked\0firstClicked\0"
    "lastClicked\0previousClicked\0nextClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArchiveWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ArchiveWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ArchiveWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firstArchiveClicked(); break;
        case 1: _t->lastArchiveClicked(); break;
        case 2: _t->previousArchiveClicked(); break;
        case 3: _t->nextArchiveClicked(); break;
        case 4: _t->firstClicked(); break;
        case 5: _t->lastClicked(); break;
        case 6: _t->previousClicked(); break;
        case 7: _t->nextClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ArchiveWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArchiveWidget::firstArchiveClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ArchiveWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArchiveWidget::lastArchiveClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ArchiveWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArchiveWidget::previousArchiveClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ArchiveWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArchiveWidget::nextArchiveClicked)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ArchiveWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ArchiveWidget.data,
    qt_meta_data_ArchiveWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ArchiveWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArchiveWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ArchiveWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ArchiveWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ArchiveWidget::firstArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ArchiveWidget::lastArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ArchiveWidget::previousArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ArchiveWidget::nextArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_CentralWidget_t {
    QByteArrayData data[12];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CentralWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CentralWidget_t qt_meta_stringdata_CentralWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CentralWidget"
QT_MOC_LITERAL(1, 14, 19), // "firstArchiveClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 18), // "lastArchiveClicked"
QT_MOC_LITERAL(4, 54, 22), // "previousArchiveClicked"
QT_MOC_LITERAL(5, 77, 18), // "nextArchiveClicked"
QT_MOC_LITERAL(6, 96, 17), // "testButtonClicked"
QT_MOC_LITERAL(7, 114, 12), // "firstClicked"
QT_MOC_LITERAL(8, 127, 11), // "lastClicked"
QT_MOC_LITERAL(9, 139, 15), // "previousClicked"
QT_MOC_LITERAL(10, 155, 11), // "nextClicked"
QT_MOC_LITERAL(11, 167, 11) // "testClicked"

    },
    "CentralWidget\0firstArchiveClicked\0\0"
    "lastArchiveClicked\0previousArchiveClicked\0"
    "nextArchiveClicked\0testButtonClicked\0"
    "firstClicked\0lastClicked\0previousClicked\0"
    "nextClicked\0testClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CentralWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CentralWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CentralWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firstArchiveClicked(); break;
        case 1: _t->lastArchiveClicked(); break;
        case 2: _t->previousArchiveClicked(); break;
        case 3: _t->nextArchiveClicked(); break;
        case 4: _t->testButtonClicked(); break;
        case 5: _t->firstClicked(); break;
        case 6: _t->lastClicked(); break;
        case 7: _t->previousClicked(); break;
        case 8: _t->nextClicked(); break;
        case 9: _t->testClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CentralWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::firstArchiveClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CentralWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::lastArchiveClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CentralWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::previousArchiveClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CentralWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::nextArchiveClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CentralWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::testButtonClicked)) {
                *result = 4;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CentralWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CentralWidget.data,
    qt_meta_data_CentralWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CentralWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CentralWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CentralWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CentralWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void CentralWidget::firstArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CentralWidget::lastArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CentralWidget::previousArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CentralWidget::nextArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CentralWidget::testButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
