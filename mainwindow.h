#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMdiSubWindow>
#include <QMainWindow>
#include "childwnd.h"
#include <QSignalMapper>
#include <QPrinter>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initMainWindow();
    void docNew();
    void docOpen();
    void docSave();
    void docSaveAs();
    void docUndo();
    void docRedo();
    void docCut();
    void docCopy();
    void docPaste();
    void textBold();
    void textItalic();
    void textUnderline();
    void textFamily(const QString&fmly);
    void textSize(const QString&ps);
    void textColor();
    void paraStyle(int nStyle);
    void docPrint();
    void docPrintPreview();
private slots:

    void refreshMenus();
    void addSubWndListMenu();
    void setActiveSubWindow(QWidget*wnd);

    void on_newAction_triggered();
    void on_closeaction_triggered();
    void on_aboutaction_triggered();
    void on_closeallaction_triggered();
    void on_Titleaction_triggered();
    void on_casecadeAction_triggered();
    void on_previousaction_triggered();
    void on_nextaction_triggered();
    void on_openAction_triggered();
    void on_saveAction_triggered();
    void on_saveAsAction_triggered();
    void on_UndoAction_triggered();
    void on_RedoAction_triggered();
    void on_CutAction_triggered();
    void on_CopyAction_triggered();
    void on_PasteAction_triggered();
    void on_boldAction_triggered();
    void on_italicAction_triggered();
    void on_underline_triggered();
    void on_fontComboBox_activated(const QString &arg1);
    void on_sizeComboBox_activated(const QString &arg1);

    void on_leftAlignAction_triggered();

    void on_rightAlignAction_triggered();

    void on_centerAction_triggered();

    void on_JustifyAction_triggered();

    void on_colorAction_triggered();

    void on_comboBox_activated(const QString &arg1);

    void on_comboBox_activated(int index);

    void on_printfaction_triggered();

    void on_printpreviewAction_triggered();
    void printPreview(QPrinter* printer);
protected:
    void closeEvent(QCloseEvent *event);
private:
    void formatEnabled();
    QMdiSubWindow* findChildWnd(const QString &docName);
    ChildWnd *activateChildWnd();
private:
    Ui::MainWindow *ui;
    QSignalMapper*m_WndMapper;//信号映射

};

#endif // MAINWINDOW_H
