/****************************************************************************
** Meta object code from reading C++ file 'titlewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtFresnelZones/titlewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'titlewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TitleWindow_t {
    QByteArrayData data[8];
    char stringdata[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TitleWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TitleWindow_t qt_meta_stringdata_TitleWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TitleWindow"
QT_MOC_LITERAL(1, 12, 15), // "openIntroWindow"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 24), // "openIntensityGraphWindow"
QT_MOC_LITERAL(4, 54, 24), // "openAmplitudePlateWindow"
QT_MOC_LITERAL(5, 79, 20), // "openPhasePlateWindow"
QT_MOC_LITERAL(6, 100, 17), // "openAuthorsWindow"
QT_MOC_LITERAL(7, 118, 15) // "exitApplication"

    },
    "TitleWindow\0openIntroWindow\0\0"
    "openIntensityGraphWindow\0"
    "openAmplitudePlateWindow\0openPhasePlateWindow\0"
    "openAuthorsWindow\0exitApplication"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TitleWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TitleWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TitleWindow *_t = static_cast<TitleWindow *>(_o);
        switch (_id) {
        case 0: _t->openIntroWindow(); break;
        case 1: _t->openIntensityGraphWindow(); break;
        case 2: _t->openAmplitudePlateWindow(); break;
        case 3: _t->openPhasePlateWindow(); break;
        case 4: _t->openAuthorsWindow(); break;
        case 5: _t->exitApplication(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TitleWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TitleWindow.data,
      qt_meta_data_TitleWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TitleWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TitleWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TitleWindow.stringdata))
        return static_cast<void*>(const_cast< TitleWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TitleWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
