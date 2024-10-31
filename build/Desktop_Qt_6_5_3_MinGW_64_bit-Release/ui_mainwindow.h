/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *saveAsAction;
    QAction *printpreviewAction;
    QAction *printfaction;
    QAction *UndoAction;
    QAction *RedoAction;
    QAction *CutAction;
    QAction *CopyAction;
    QAction *PasteAction;
    QAction *colorAction;
    QAction *boldAction;
    QAction *italicAction;
    QAction *leftAlignAction;
    QAction *centerAction;
    QAction *rightAlignAction;
    QAction *JustifyAction;
    QAction *closeaction;
    QAction *closeallaction;
    QAction *casecadeAction;
    QAction *Titleaction;
    QAction *previousaction;
    QAction *nextaction;
    QAction *aboutaction;
    QAction *underline;
    QWidget *centralWidget;
    QComboBox *comboBox;
    QFontComboBox *fontComboBox;
    QComboBox *sizeComboBox;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_O;
    QMenu *menu_D;
    QMenu *menu;
    QMenu *menu_W;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(622, 537);
        newAction = new QAction(MainWindow);
        newAction->setObjectName("newAction");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        newAction->setIcon(icon);
        openAction = new QAction(MainWindow);
        openAction->setObjectName("openAction");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        openAction->setIcon(icon1);
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName("saveAction");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAction->setIcon(icon2);
        saveAsAction = new QAction(MainWindow);
        saveAsAction->setObjectName("saveAsAction");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/saveasaction.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAsAction->setIcon(icon3);
        printpreviewAction = new QAction(MainWindow);
        printpreviewAction->setObjectName("printpreviewAction");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/android-chrome-192x192.png"), QSize(), QIcon::Normal, QIcon::Off);
        printpreviewAction->setIcon(icon4);
        printfaction = new QAction(MainWindow);
        printfaction->setObjectName("printfaction");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/print-fill.png"), QSize(), QIcon::Normal, QIcon::Off);
        printfaction->setIcon(icon5);
        UndoAction = new QAction(MainWindow);
        UndoAction->setObjectName("UndoAction");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        UndoAction->setIcon(icon6);
        RedoAction = new QAction(MainWindow);
        RedoAction->setObjectName("RedoAction");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/redo2.png"), QSize(), QIcon::Normal, QIcon::Off);
        RedoAction->setIcon(icon7);
        CutAction = new QAction(MainWindow);
        CutAction->setObjectName("CutAction");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        CutAction->setIcon(icon8);
        CopyAction = new QAction(MainWindow);
        CopyAction->setObjectName("CopyAction");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        CopyAction->setIcon(icon9);
        PasteAction = new QAction(MainWindow);
        PasteAction->setObjectName("PasteAction");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        PasteAction->setIcon(icon10);
        colorAction = new QAction(MainWindow);
        colorAction->setObjectName("colorAction");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/eglass-color.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorAction->setIcon(icon11);
        boldAction = new QAction(MainWindow);
        boldAction->setObjectName("boldAction");
        boldAction->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/img/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldAction->setIcon(icon12);
        italicAction = new QAction(MainWindow);
        italicAction->setObjectName("italicAction");
        italicAction->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/img/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicAction->setIcon(icon13);
        leftAlignAction = new QAction(MainWindow);
        leftAlignAction->setObjectName("leftAlignAction");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/img/align-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftAlignAction->setIcon(icon14);
        centerAction = new QAction(MainWindow);
        centerAction->setObjectName("centerAction");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/img/justify.png"), QSize(), QIcon::Normal, QIcon::Off);
        centerAction->setIcon(icon15);
        rightAlignAction = new QAction(MainWindow);
        rightAlignAction->setObjectName("rightAlignAction");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/img/align-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightAlignAction->setIcon(icon16);
        JustifyAction = new QAction(MainWindow);
        JustifyAction->setObjectName("JustifyAction");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/img/two.png"), QSize(), QIcon::Normal, QIcon::Off);
        JustifyAction->setIcon(icon17);
        closeaction = new QAction(MainWindow);
        closeaction->setObjectName("closeaction");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeaction->setIcon(icon18);
        closeallaction = new QAction(MainWindow);
        closeallaction->setObjectName("closeallaction");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/img/close-square.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeallaction->setIcon(icon19);
        casecadeAction = new QAction(MainWindow);
        casecadeAction->setObjectName("casecadeAction");
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/img/Center.png"), QSize(), QIcon::Normal, QIcon::Off);
        casecadeAction->setIcon(icon20);
        Titleaction = new QAction(MainWindow);
        Titleaction->setObjectName("Titleaction");
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/img/android-chrome-512x512.png"), QSize(), QIcon::Normal, QIcon::Off);
        Titleaction->setIcon(icon21);
        previousaction = new QAction(MainWindow);
        previousaction->setObjectName("previousaction");
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/img/behind.png"), QSize(), QIcon::Normal, QIcon::Off);
        previousaction->setIcon(icon22);
        nextaction = new QAction(MainWindow);
        nextaction->setObjectName("nextaction");
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/img/after.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextaction->setIcon(icon23);
        aboutaction = new QAction(MainWindow);
        aboutaction->setObjectName("aboutaction");
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/img/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        aboutaction->setIcon(icon24);
        underline = new QAction(MainWindow);
        underline->setObjectName("underline");
        underline->setCheckable(true);
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/img/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        underline->setIcon(icon25);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(0, 0, 181, 22));
        fontComboBox = new QFontComboBox(centralWidget);
        fontComboBox->setObjectName("fontComboBox");
        fontComboBox->setGeometry(QRect(180, 0, 241, 21));
        sizeComboBox = new QComboBox(centralWidget);
        sizeComboBox->setObjectName("sizeComboBox");
        sizeComboBox->setGeometry(QRect(420, 0, 201, 22));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName("mdiArea");
        mdiArea->setGeometry(QRect(0, 20, 621, 451));
        mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 622, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName("menu_F");
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName("menu_E");
        menu_O = new QMenu(menuBar);
        menu_O->setObjectName("menu_O");
        menu_D = new QMenu(menu_O);
        menu_D->setObjectName("menu_D");
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/img/character.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_D->setIcon(icon26);
        menu = new QMenu(menu_O);
        menu->setObjectName("menu");
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/img/paragraph.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu->setIcon(icon27);
        menu_W = new QMenu(menuBar);
        menu_W->setObjectName("menu_W");
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName("menu_H");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName("toolBar_2");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_O->menuAction());
        menuBar->addAction(menu_W->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addAction(newAction);
        menu_F->addAction(openAction);
        menu_F->addAction(saveAction);
        menu_F->addAction(saveAsAction);
        menu_F->addAction(printpreviewAction);
        menu_F->addAction(printfaction);
        menu_E->addAction(UndoAction);
        menu_E->addAction(RedoAction);
        menu_E->addAction(CutAction);
        menu_E->addAction(CopyAction);
        menu_E->addAction(PasteAction);
        menu_O->addAction(menu_D->menuAction());
        menu_O->addAction(menu->menuAction());
        menu_O->addAction(colorAction);
        menu_D->addAction(boldAction);
        menu_D->addAction(italicAction);
        menu_D->addAction(underline);
        menu->addAction(leftAlignAction);
        menu->addAction(centerAction);
        menu->addAction(rightAlignAction);
        menu->addAction(JustifyAction);
        menu_W->addAction(closeaction);
        menu_W->addAction(closeallaction);
        menu_W->addAction(casecadeAction);
        menu_W->addAction(Titleaction);
        menu_W->addAction(previousaction);
        menu_W->addAction(nextaction);
        menu_H->addAction(aboutaction);
        mainToolBar->addAction(newAction);
        mainToolBar->addAction(openAction);
        mainToolBar->addAction(printfaction);
        toolBar->addAction(UndoAction);
        toolBar->addAction(RedoAction);
        toolBar->addAction(CutAction);
        toolBar->addAction(CopyAction);
        toolBar->addAction(PasteAction);
        toolBar_2->addAction(boldAction);
        toolBar_2->addAction(italicAction);
        toolBar_2->addAction(underline);
        toolBar_2->addSeparator();
        toolBar_2->addAction(leftAlignAction);
        toolBar_2->addAction(centerAction);
        toolBar_2->addAction(rightAlignAction);
        toolBar_2->addAction(JustifyAction);
        toolBar_2->addAction(colorAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "LuWPS", nullptr));
        newAction->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272(N)", nullptr));
#if QT_CONFIG(statustip)
        newAction->setStatusTip(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\272\344\270\200\344\270\252\346\226\260\346\226\207\346\241\243", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        newAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        openAction->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(O)", nullptr));
#if QT_CONFIG(statustip)
        openAction->setStatusTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\200\344\270\252\345\267\262\345\255\230\345\234\250\347\232\204\346\226\207\346\241\243", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        openAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        saveAction->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230(S)", nullptr));
#if QT_CONFIG(shortcut)
        saveAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        saveAsAction->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(A)", nullptr));
#if QT_CONFIG(statustip)
        saveAsAction->setStatusTip(QCoreApplication::translate("MainWindow", "\344\273\245\344\270\200\344\270\252\346\226\260\345\220\215\345\255\227\344\277\235\345\255\230\346\226\207\346\241\243", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        saveAsAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        printpreviewAction->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\351\242\204\350\247\210...", nullptr));
#if QT_CONFIG(statustip)
        printpreviewAction->setStatusTip(QCoreApplication::translate("MainWindow", "\351\242\204\350\247\210\346\211\223\345\215\260\346\225\210\346\236\234", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        printpreviewAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        printfaction->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260(P)", nullptr));
#if QT_CONFIG(shortcut)
        printfaction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        UndoAction->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200(U)", nullptr));
#if QT_CONFIG(statustip)
        UndoAction->setStatusTip(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200\345\275\223\345\211\215\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        UndoAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        RedoAction->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232(R)", nullptr));
#if QT_CONFIG(statustip)
        RedoAction->setStatusTip(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215\344\271\213\345\211\215\347\232\204\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        RedoAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        CutAction->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207(T)", nullptr));
#if QT_CONFIG(statustip)
        CutAction->setStatusTip(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\207\346\241\243\344\270\255\345\211\252\345\210\207\346\211\200\351\200\211\347\232\204\345\206\205\345\256\271\357\274\214\345\271\266\346\224\276\345\205\245\345\211\252\345\210\207\346\235\277", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        CutAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        CopyAction->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266(C)", nullptr));
#if QT_CONFIG(statustip)
        CopyAction->setStatusTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266\346\211\200\351\200\211\347\232\204\345\206\205\345\256\271\357\274\214\345\271\266\346\224\276\345\205\245\345\211\252\345\210\207\346\235\277", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        CopyAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        PasteAction->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264(P)", nullptr));
#if QT_CONFIG(statustip)
        PasteAction->setStatusTip(QCoreApplication::translate("MainWindow", "\345\260\206\345\211\252\345\210\207\346\235\277\347\232\204\345\206\205\345\256\271\347\262\230\350\264\264\345\210\260\346\226\207\346\241\243", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        PasteAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        colorAction->setText(QCoreApplication::translate("MainWindow", "\351\242\234\350\211\262(C)...", nullptr));
#if QT_CONFIG(statustip)
        colorAction->setStatusTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#endif // QT_CONFIG(statustip)
        boldAction->setText(QCoreApplication::translate("MainWindow", "\345\212\240\347\262\227(B)", nullptr));
#if QT_CONFIG(shortcut)
        boldAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        italicAction->setText(QCoreApplication::translate("MainWindow", "\345\200\276\346\226\234(I)", nullptr));
#if QT_CONFIG(shortcut)
        italicAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        leftAlignAction->setText(QCoreApplication::translate("MainWindow", "\345\267\246\345\257\271\351\275\220(L)", nullptr));
#if QT_CONFIG(statustip)
        leftAlignAction->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        leftAlignAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        centerAction->setText(QCoreApplication::translate("MainWindow", "\345\261\205\344\270\255(C)", nullptr));
#if QT_CONFIG(statustip)
        centerAction->setStatusTip(QCoreApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\346\226\207\345\255\227\345\261\205\344\270\255", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        centerAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        rightAlignAction->setText(QCoreApplication::translate("MainWindow", "\345\217\263\345\257\271\351\275\220(R)", nullptr));
#if QT_CONFIG(statustip)
        rightAlignAction->setStatusTip(QCoreApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\346\226\207\345\255\227\345\217\263\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        rightAlignAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        JustifyAction->setText(QCoreApplication::translate("MainWindow", "\344\270\244\347\253\257\345\257\271\351\275\220(J)", nullptr));
#if QT_CONFIG(statustip)
        JustifyAction->setStatusTip(QCoreApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\346\226\207\345\255\227\345\267\246\345\217\263\344\270\244\347\253\257\345\220\214\346\227\266\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        JustifyAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        closeaction->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255(O)", nullptr));
#if QT_CONFIG(statustip)
        closeaction->setStatusTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\264\273\345\212\250\345\255\220\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(statustip)
        closeallaction->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211(A)", nullptr));
#if QT_CONFIG(statustip)
        closeallaction->setStatusTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211\345\255\220\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(statustip)
        casecadeAction->setText(QCoreApplication::translate("MainWindow", "\345\261\202\345\217\240(C)", nullptr));
#if QT_CONFIG(statustip)
        casecadeAction->setStatusTip(QCoreApplication::translate("MainWindow", "\345\261\202\345\217\240\345\255\220\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(statustip)
        Titleaction->setText(QCoreApplication::translate("MainWindow", "\345\271\263\351\223\272(T)", nullptr));
        previousaction->setText(QCoreApplication::translate("MainWindow", "\345\211\215\344\270\200\344\270\252(V)", nullptr));
#if QT_CONFIG(statustip)
        previousaction->setStatusTip(QCoreApplication::translate("MainWindow", "\347\247\273\345\212\250\347\204\246\347\202\271\345\210\260\345\211\215\344\270\200\344\270\252\345\255\220\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        previousaction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        nextaction->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252(X)", nullptr));
#if QT_CONFIG(statustip)
        nextaction->setStatusTip(QCoreApplication::translate("MainWindow", "\345\220\216\344\270\200\344\270\252", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        nextaction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Tab", nullptr));
#endif // QT_CONFIG(shortcut)
        aboutaction->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216(A)", nullptr));
#if QT_CONFIG(statustip)
        aboutaction->setStatusTip(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216LuWPS\347\232\204\344\277\241\346\201\257", nullptr));
#endif // QT_CONFIG(statustip)
        underline->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277(U)", nullptr));
#if QT_CONFIG(shortcut)
        underline->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\346\240\207\345\207\206", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267\342\227\217", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267\342\227\213", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267\342\226\241", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(1,2,3)", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(A,B,C)", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(a,b,c)", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(i,ii,iii)", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(I,III,III)", nullptr));

        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_O->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217(&O)", nullptr));
        menu_D->setTitle(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223(D)", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\256\265\350\220\275", nullptr));
        menu_W->setTitle(QCoreApplication::translate("MainWindow", "\347\252\227\344\275\223(&W)", nullptr));
        menu_H->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
