/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "refreshMenus",
    "",
    "addSubWndListMenu",
    "setActiveSubWindow",
    "QWidget*",
    "wnd",
    "on_newAction_triggered",
    "on_closeaction_triggered",
    "on_aboutaction_triggered",
    "on_closeallaction_triggered",
    "on_Titleaction_triggered",
    "on_casecadeAction_triggered",
    "on_previousaction_triggered",
    "on_nextaction_triggered",
    "on_openAction_triggered",
    "on_saveAction_triggered",
    "on_saveAsAction_triggered",
    "on_UndoAction_triggered",
    "on_RedoAction_triggered",
    "on_CutAction_triggered",
    "on_CopyAction_triggered",
    "on_PasteAction_triggered",
    "on_boldAction_triggered",
    "on_italicAction_triggered",
    "on_underline_triggered",
    "on_fontComboBox_activated",
    "arg1",
    "on_sizeComboBox_activated",
    "on_leftAlignAction_triggered",
    "on_rightAlignAction_triggered",
    "on_centerAction_triggered",
    "on_JustifyAction_triggered",
    "on_colorAction_triggered",
    "on_comboBox_activated",
    "index",
    "on_printfaction_triggered",
    "on_printpreviewAction_triggered",
    "printPreview",
    "QPrinter*",
    "printer"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[82];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[19];
    char stringdata5[9];
    char stringdata6[4];
    char stringdata7[23];
    char stringdata8[25];
    char stringdata9[25];
    char stringdata10[28];
    char stringdata11[25];
    char stringdata12[28];
    char stringdata13[28];
    char stringdata14[24];
    char stringdata15[24];
    char stringdata16[24];
    char stringdata17[26];
    char stringdata18[24];
    char stringdata19[24];
    char stringdata20[23];
    char stringdata21[24];
    char stringdata22[25];
    char stringdata23[24];
    char stringdata24[26];
    char stringdata25[23];
    char stringdata26[26];
    char stringdata27[5];
    char stringdata28[26];
    char stringdata29[29];
    char stringdata30[30];
    char stringdata31[26];
    char stringdata32[27];
    char stringdata33[25];
    char stringdata34[22];
    char stringdata35[6];
    char stringdata36[26];
    char stringdata37[32];
    char stringdata38[13];
    char stringdata39[10];
    char stringdata40[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 12),  // "refreshMenus"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 17),  // "addSubWndListMenu"
        QT_MOC_LITERAL(43, 18),  // "setActiveSubWindow"
        QT_MOC_LITERAL(62, 8),  // "QWidget*"
        QT_MOC_LITERAL(71, 3),  // "wnd"
        QT_MOC_LITERAL(75, 22),  // "on_newAction_triggered"
        QT_MOC_LITERAL(98, 24),  // "on_closeaction_triggered"
        QT_MOC_LITERAL(123, 24),  // "on_aboutaction_triggered"
        QT_MOC_LITERAL(148, 27),  // "on_closeallaction_triggered"
        QT_MOC_LITERAL(176, 24),  // "on_Titleaction_triggered"
        QT_MOC_LITERAL(201, 27),  // "on_casecadeAction_triggered"
        QT_MOC_LITERAL(229, 27),  // "on_previousaction_triggered"
        QT_MOC_LITERAL(257, 23),  // "on_nextaction_triggered"
        QT_MOC_LITERAL(281, 23),  // "on_openAction_triggered"
        QT_MOC_LITERAL(305, 23),  // "on_saveAction_triggered"
        QT_MOC_LITERAL(329, 25),  // "on_saveAsAction_triggered"
        QT_MOC_LITERAL(355, 23),  // "on_UndoAction_triggered"
        QT_MOC_LITERAL(379, 23),  // "on_RedoAction_triggered"
        QT_MOC_LITERAL(403, 22),  // "on_CutAction_triggered"
        QT_MOC_LITERAL(426, 23),  // "on_CopyAction_triggered"
        QT_MOC_LITERAL(450, 24),  // "on_PasteAction_triggered"
        QT_MOC_LITERAL(475, 23),  // "on_boldAction_triggered"
        QT_MOC_LITERAL(499, 25),  // "on_italicAction_triggered"
        QT_MOC_LITERAL(525, 22),  // "on_underline_triggered"
        QT_MOC_LITERAL(548, 25),  // "on_fontComboBox_activated"
        QT_MOC_LITERAL(574, 4),  // "arg1"
        QT_MOC_LITERAL(579, 25),  // "on_sizeComboBox_activated"
        QT_MOC_LITERAL(605, 28),  // "on_leftAlignAction_triggered"
        QT_MOC_LITERAL(634, 29),  // "on_rightAlignAction_triggered"
        QT_MOC_LITERAL(664, 25),  // "on_centerAction_triggered"
        QT_MOC_LITERAL(690, 26),  // "on_JustifyAction_triggered"
        QT_MOC_LITERAL(717, 24),  // "on_colorAction_triggered"
        QT_MOC_LITERAL(742, 21),  // "on_comboBox_activated"
        QT_MOC_LITERAL(764, 5),  // "index"
        QT_MOC_LITERAL(770, 25),  // "on_printfaction_triggered"
        QT_MOC_LITERAL(796, 31),  // "on_printpreviewAction_triggered"
        QT_MOC_LITERAL(828, 12),  // "printPreview"
        QT_MOC_LITERAL(841, 9),  // "QPrinter*"
        QT_MOC_LITERAL(851, 7)   // "printer"
    },
    "MainWindow",
    "refreshMenus",
    "",
    "addSubWndListMenu",
    "setActiveSubWindow",
    "QWidget*",
    "wnd",
    "on_newAction_triggered",
    "on_closeaction_triggered",
    "on_aboutaction_triggered",
    "on_closeallaction_triggered",
    "on_Titleaction_triggered",
    "on_casecadeAction_triggered",
    "on_previousaction_triggered",
    "on_nextaction_triggered",
    "on_openAction_triggered",
    "on_saveAction_triggered",
    "on_saveAsAction_triggered",
    "on_UndoAction_triggered",
    "on_RedoAction_triggered",
    "on_CutAction_triggered",
    "on_CopyAction_triggered",
    "on_PasteAction_triggered",
    "on_boldAction_triggered",
    "on_italicAction_triggered",
    "on_underline_triggered",
    "on_fontComboBox_activated",
    "arg1",
    "on_sizeComboBox_activated",
    "on_leftAlignAction_triggered",
    "on_rightAlignAction_triggered",
    "on_centerAction_triggered",
    "on_JustifyAction_triggered",
    "on_colorAction_triggered",
    "on_comboBox_activated",
    "index",
    "on_printfaction_triggered",
    "on_printpreviewAction_triggered",
    "printPreview",
    "QPrinter*",
    "printer"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  218,    2, 0x08,    1 /* Private */,
       3,    0,  219,    2, 0x08,    2 /* Private */,
       4,    1,  220,    2, 0x08,    3 /* Private */,
       7,    0,  223,    2, 0x08,    5 /* Private */,
       8,    0,  224,    2, 0x08,    6 /* Private */,
       9,    0,  225,    2, 0x08,    7 /* Private */,
      10,    0,  226,    2, 0x08,    8 /* Private */,
      11,    0,  227,    2, 0x08,    9 /* Private */,
      12,    0,  228,    2, 0x08,   10 /* Private */,
      13,    0,  229,    2, 0x08,   11 /* Private */,
      14,    0,  230,    2, 0x08,   12 /* Private */,
      15,    0,  231,    2, 0x08,   13 /* Private */,
      16,    0,  232,    2, 0x08,   14 /* Private */,
      17,    0,  233,    2, 0x08,   15 /* Private */,
      18,    0,  234,    2, 0x08,   16 /* Private */,
      19,    0,  235,    2, 0x08,   17 /* Private */,
      20,    0,  236,    2, 0x08,   18 /* Private */,
      21,    0,  237,    2, 0x08,   19 /* Private */,
      22,    0,  238,    2, 0x08,   20 /* Private */,
      23,    0,  239,    2, 0x08,   21 /* Private */,
      24,    0,  240,    2, 0x08,   22 /* Private */,
      25,    0,  241,    2, 0x08,   23 /* Private */,
      26,    1,  242,    2, 0x08,   24 /* Private */,
      28,    1,  245,    2, 0x08,   26 /* Private */,
      29,    0,  248,    2, 0x08,   28 /* Private */,
      30,    0,  249,    2, 0x08,   29 /* Private */,
      31,    0,  250,    2, 0x08,   30 /* Private */,
      32,    0,  251,    2, 0x08,   31 /* Private */,
      33,    0,  252,    2, 0x08,   32 /* Private */,
      34,    1,  253,    2, 0x08,   33 /* Private */,
      34,    1,  256,    2, 0x08,   35 /* Private */,
      36,    0,  259,    2, 0x08,   37 /* Private */,
      37,    0,  260,    2, 0x08,   38 /* Private */,
      38,    1,  261,    2, 0x08,   39 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 39,   40,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'refreshMenus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addSubWndListMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setActiveSubWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'on_newAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_closeaction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_aboutaction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_closeallaction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Titleaction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_casecadeAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_previousaction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_nextaction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_openAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveAsAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_UndoAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_RedoAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_CutAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_CopyAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PasteAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_boldAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_italicAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_underline_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fontComboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_sizeComboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_leftAlignAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rightAlignAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_centerAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_JustifyAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_colorAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_comboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_printfaction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_printpreviewAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'printPreview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPrinter *, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshMenus(); break;
        case 1: _t->addSubWndListMenu(); break;
        case 2: _t->setActiveSubWindow((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 3: _t->on_newAction_triggered(); break;
        case 4: _t->on_closeaction_triggered(); break;
        case 5: _t->on_aboutaction_triggered(); break;
        case 6: _t->on_closeallaction_triggered(); break;
        case 7: _t->on_Titleaction_triggered(); break;
        case 8: _t->on_casecadeAction_triggered(); break;
        case 9: _t->on_previousaction_triggered(); break;
        case 10: _t->on_nextaction_triggered(); break;
        case 11: _t->on_openAction_triggered(); break;
        case 12: _t->on_saveAction_triggered(); break;
        case 13: _t->on_saveAsAction_triggered(); break;
        case 14: _t->on_UndoAction_triggered(); break;
        case 15: _t->on_RedoAction_triggered(); break;
        case 16: _t->on_CutAction_triggered(); break;
        case 17: _t->on_CopyAction_triggered(); break;
        case 18: _t->on_PasteAction_triggered(); break;
        case 19: _t->on_boldAction_triggered(); break;
        case 20: _t->on_italicAction_triggered(); break;
        case 21: _t->on_underline_triggered(); break;
        case 22: _t->on_fontComboBox_activated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->on_sizeComboBox_activated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->on_leftAlignAction_triggered(); break;
        case 25: _t->on_rightAlignAction_triggered(); break;
        case 26: _t->on_centerAction_triggered(); break;
        case 27: _t->on_JustifyAction_triggered(); break;
        case 28: _t->on_colorAction_triggered(); break;
        case 29: _t->on_comboBox_activated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->on_comboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 31: _t->on_printfaction_triggered(); break;
        case 32: _t->on_printpreviewAction_triggered(); break;
        case 33: _t->printPreview((*reinterpret_cast< std::add_pointer_t<QPrinter*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}
QT_WARNING_POP
