/****************************************************************************
** Meta object code from reading C++ file 'serialportwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../VisionSystem2/serialportwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialportwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SerialPortWidget_t {
    QByteArrayData data[14];
    char stringdata[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialPortWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialPortWidget_t qt_meta_stringdata_SerialPortWidget = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 12),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 4),
QT_MOC_LITERAL(4, 36, 8),
QT_MOC_LITERAL(5, 45, 9),
QT_MOC_LITERAL(6, 55, 16),
QT_MOC_LITERAL(7, 72, 13),
QT_MOC_LITERAL(8, 86, 7),
QT_MOC_LITERAL(9, 94, 8),
QT_MOC_LITERAL(10, 103, 29),
QT_MOC_LITERAL(11, 133, 11),
QT_MOC_LITERAL(12, 145, 8),
QT_MOC_LITERAL(13, 154, 23)
    },
    "SerialPortWidget\0dataReceived\0\0data\0"
    "dataSent\0writeData\0handleNewMarkers\0"
    "QList<Marker>\0markers\0readData\0"
    "updateCommunicationStatsLabel\0setBaudRate\0"
    "baudRate\0refreshConnectionStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialPortWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   60,    2, 0x0a /* Public */,
       6,    1,   63,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,
      11,    1,   68,    2, 0x08 /* Private */,
      13,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Int, QMetaType::QByteArray,    3,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,

       0        // eod
};

void SerialPortWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialPortWidget *_t = static_cast<SerialPortWidget *>(_o);
        switch (_id) {
        case 0: _t->dataReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->dataSent((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: { int _r = _t->writeData((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->handleNewMarkers((*reinterpret_cast< QList<Marker>(*)>(_a[1]))); break;
        case 4: _t->readData(); break;
        case 5: _t->updateCommunicationStatsLabel(); break;
        case 6: _t->setBaudRate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->refreshConnectionStatus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SerialPortWidget::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPortWidget::dataReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (SerialPortWidget::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPortWidget::dataSent)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject SerialPortWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SerialPortWidget.data,
      qt_meta_data_SerialPortWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *SerialPortWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialPortWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SerialPortWidget.stringdata))
        return static_cast<void*>(const_cast< SerialPortWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int SerialPortWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void SerialPortWidget::dataReceived(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialPortWidget::dataSent(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
