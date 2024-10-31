#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "childwnd.h"
#include <QMdiSubWindow>
#include <QWidget>
#include <QEvent>
#include <QCloseEvent>
#include <QFileDialog>
#include <QActionGroup>
#include <QAction>
#include <QColorDialog>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrintPreviewDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initMainWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initMainWindow()
{
    //初始化字号列表项
        QFontDatabase fontdb;
       foreach (int fontsize, fontdb.standardSizes())

       ui->sizeComboBox->addItem(QString::number(fontsize));

       QFont defFont;//当前应用程序默认字体
       QString sFontSize;
       int defFontSize;//当前应用程序默认字体字号
       int defFontindex;//当前字号在索引框中的字号索引号

       defFont = QApplication::font();
       defFontSize = defFont.pointSize();
       sFontSize = QString::number(defFontSize);
       defFontindex =  ui->sizeComboBox->findText(sFontSize);

       ui->sizeComboBox->setCurrentIndex(defFontindex);

       //多文档区域滚动条
       ui->mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
       ui->mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
       this->refreshMenus();
       //connect(ui->mdiArea,&QMdiArea::subWindowActivated,this,&MainWindow::refreshMenus);
       connect(ui->mdiArea,SIGNAL(subWindowActivated(QMdiSubWindow *)),this,SLOT(MainWindow::refreshMenus()));
       addSubWndListMenu();
       connect(ui->menu_W,&QMenu::aboutToShow,this,&MainWindow::addSubWndListMenu);
        //信号映射器
       m_WndMapper = new QSignalMapper(this);
       connect(m_WndMapper,SIGNAL(mapped(QWidget*)),
                  this,SLOT(setActiveSubWindow(QWidget*)));
       //保证互斥性，一次只能选择一种
           QActionGroup *alignGroup = new QActionGroup(this);
           alignGroup->addAction(ui->leftAlignAction);
           alignGroup->addAction(ui->rightAlignAction);
           alignGroup->addAction(ui->centerAction);
           alignGroup->addAction(ui->JustifyAction);
}

void MainWindow::docNew()
{
    ChildWnd *childwnd = new ChildWnd;
    ui->mdiArea->addSubWindow(childwnd);//添加子窗口
    //复制对象
    connect(childwnd,SIGNAL(copyAvailable(bool)),ui->CutAction,SLOT(setEnabled(bool)));
    connect(childwnd,SIGNAL(copyAvailable(bool)),ui->CopyAction,SLOT(setEnabled(bool)));

    childwnd->newDoc();
    childwnd->show();
    formatEnabled();
}

void MainWindow::docOpen()
{
    QString docName = QFileDialog::getOpenFileName(this,
                                    "打开文档",
                                    "",
                                    "文本文件(*.txt);;"
                                    "HTML文件(*.html *.htm;;"
                                    "所有文件(*.*)");
     if(!docName.isEmpty())
     {
         QMdiSubWindow* existWnd =  findChildWnd(docName);
         if(existWnd){
             ui->mdiArea->setActiveSubWindow(existWnd);
             return;
         }
         ChildWnd *childWnd = new ChildWnd;
         ui->mdiArea->addSubWindow(childWnd);
         connect(childWnd,SIGNAL(copyAvailable(bool)),ui->CutAction,SLOT(setEnabled(bool)));
         connect(childWnd,SIGNAL(copyAvailable(bool)),ui->CopyAction,SLOT(setEnabled(bool)));

         if(childWnd->loadDoc(docName)){
             statusBar()->showMessage("文档已打开",3000);
             childWnd->show();
             formatEnabled();
         }else{
             childWnd->close();
         }
     }

}

void MainWindow::docSave()
{
    if(activateChildWnd()&&activateChildWnd()->saveDoc()){
        statusBar()->showMessage("保存成功",3000);
    }
}

void MainWindow::docSaveAs()
{
    if(activateChildWnd()&& activateChildWnd()->saveAsDoc())
        statusBar()->showMessage("保存成功",3000);
}

void MainWindow::docUndo()
{
    if(activateChildWnd())
        activateChildWnd()->undo();
}

void MainWindow::docRedo()
{
    if(activateChildWnd())
        activateChildWnd()->redo();
}

void MainWindow::docCut()
{
    if(activateChildWnd())
        activateChildWnd()->cut();
}

void MainWindow::docCopy()
{
    if(activateChildWnd())
        activateChildWnd()->copy();
}

void MainWindow::docPaste()
{
    if(activateChildWnd())
        activateChildWnd()->paste();
}

void MainWindow::textBold()
{
    QTextCharFormat fmt;
    fmt.setFontWeight(ui->boldAction->isChecked()?QFont::Bold : QFont::Normal);
    if(activateChildWnd())
        activateChildWnd()->setFormatOnSelectedWord(fmt);

}

void MainWindow::textItalic()
{
     QTextCharFormat fmt;
     fmt.setFontItalic(ui->italicAction->isChecked());
     if(activateChildWnd())
         activateChildWnd()->setFormatOnSelectedWord(fmt);
}

void MainWindow::textUnderline()
{
    QTextCharFormat fmt;
    fmt.setFontUnderline(ui->underline->isChecked());
    if(activateChildWnd())
        activateChildWnd()->setFormatOnSelectedWord(fmt);
}

void MainWindow::textFamily(const QString &fmly)
{
    QTextCharFormat fmt;
    fmt.setFontFamily(fmly);

    if(activateChildWnd())
        activateChildWnd()->setFormatOnSelectedWord(fmt);
}

void MainWindow::textSize(const QString &ps)
{
    qreal pointSize = ps.toFloat();
    if(ps.toFloat()>0){
        QTextCharFormat fmt;
        fmt.setFontPointSize(pointSize);
        if(activateChildWnd())
            activateChildWnd()->setFormatOnSelectedWord(fmt);
    }
}

void MainWindow::textColor()
{
    if(activateChildWnd()){
       QColor color =  QColorDialog::getColor(activateChildWnd()->textColor());\
       if(!color.isValid())
           return;
       QTextCharFormat fmt;
       fmt.setForeground(color);
       activateChildWnd()->setFormatOnSelectedWord(fmt);

       QPixmap pix(16,16);
       pix.fill(color);
       ui->colorAction->setIcon(pix);


    }
}

void MainWindow::paraStyle(int nStyle)
{
    if(activateChildWnd())
        activateChildWnd()->setParaStyle(nStyle);
}

void MainWindow::docPrint()
{
    QPrinter pter(QPrinter::HighResolution);
     QPrintDialog *ddlg = new QPrintDialog(&pter,this);
     if(activateChildWnd())
         ddlg->setOption(QAbstractPrintDialog::PrintSelection,true);
     ddlg->setWindowTitle("打印文档");

     ChildWnd* childWnd = activateChildWnd();
     if(ddlg->exec() == QDialog::Accepted)
         childWnd->print(&pter);

     delete ddlg;
}

void MainWindow::docPrintPreview()
{
       QPrinter pter;
       QPrintPreviewDialog preview(&pter,this);
       connect(&preview,SIGNAL(paintRequested(QPrinter*)),
               this,SLOT(printPreview(QPrinter*)));
       preview.exec();
}

void MainWindow::formatEnabled()
{

    ui->boldAction->setEnabled(true);
    ui->italicAction->setEnabled(true);
    ui->underline->setEnabled(true);
    ui->leftAlignAction->setEnabled(true);
    ui->rightAlignAction->setEnabled(true);
    ui->centerAction->setEnabled(true);
    ui->JustifyAction->setEnabled(true);
    ui->colorAction->setEnabled(true);

}

QMdiSubWindow *MainWindow::findChildWnd(const QString &docName)
{
    QString strFile = QFileInfo(docName).canonicalFilePath();
    foreach (QMdiSubWindow* subWnd, ui->mdiArea->subWindowList())
    {
        ChildWnd* childWnd = qobject_cast<ChildWnd*>(subWnd->widget());
        if(childWnd->m_CurDocPath == strFile)
            return subWnd;


    }
    return 0;
}

ChildWnd *MainWindow::activateChildWnd()
{
    QMdiSubWindow* actWnd = ui->mdiArea->activeSubWindow();
        if(actWnd)
            return qobject_cast<ChildWnd*>(actWnd->widget());
        else
            return 0;
}

void MainWindow::on_newAction_triggered()
{
    docNew();
}

void MainWindow::refreshMenus()
{
    bool hasChild;
    hasChild = (activateChildWnd() != 0);

    ui->saveAction->setEnabled(hasChild);
    ui->saveAsAction->setEnabled(hasChild);
    ui->printfaction->setEnabled(hasChild);
    ui->printpreviewAction->setEnabled(hasChild);
    ui->closeaction->setEnabled(hasChild);
    ui->closeallaction->setEnabled(hasChild);
    ui->Titleaction->setEnabled(hasChild);
    ui->casecadeAction->setEnabled(hasChild);
    ui->nextaction->setEnabled(hasChild);
    ui->previousaction->setEnabled(hasChild);

    bool hasSelect = (activateChildWnd()&&activateChildWnd()->textCursor().hasSelection());

    ui->CutAction->setEnabled(hasSelect);
    ui->CopyAction->setEnabled(hasSelect);
    ui->boldAction->setEnabled(hasSelect);
    ui->italicAction->setEnabled(hasSelect);
    ui->underline->setEnabled(hasSelect);
    ui->leftAlignAction->setEnabled(hasSelect);
    ui->centerAction->setEnabled(hasSelect);
    ui->rightAlignAction->setEnabled(hasSelect);
    ui->JustifyAction->setEnabled(hasSelect);
    ui->colorAction->setEnabled(hasSelect);
}

//添加文件c菜单
void MainWindow::addSubWndListMenu()
{

    //清空菜单

    ui->menu_W->clear();
    ui->menu_W->addAction(ui->closeaction);
    ui->menu_W->addAction(ui->closeallaction);
    ui->menu_W->addSeparator();
    ui->menu_W->addAction(ui->Titleaction);
    ui->menu_W->addAction(ui->casecadeAction);
    ui->menu_W->addSeparator();
    ui->menu_W->addAction(ui->nextaction);
    ui->menu_W->addAction(ui->previousaction);


    QList<QMdiSubWindow*> wnds = ui->mdiArea->subWindowList();
        if(!wnds.isEmpty()) ui->menu_W->addSeparator();

        for(int i = 0; i < wnds.size(); ++i)
        {
            ChildWnd* childWnd = qobject_cast<ChildWnd*>(wnds.at(i)->widget());
            QString menuitem_text;
            menuitem_text = QString("%1 %2")
                    .arg(i+1)
                    .arg(childWnd->getCurDocName());

            QAction *menuitem_act = ui->menu_W->addAction(menuitem_text);
            menuitem_act->setCheckable(true);
            menuitem_act->setChecked(childWnd == activateChildWnd());

            connect(menuitem_act,SIGNAL(triggered(bool)),
                    m_WndMapper,SLOT(map()));
            m_WndMapper->setMapping(menuitem_act,wnds.at(i));
        }

        formatEnabled();
}

void MainWindow::setActiveSubWindow(QWidget *wnd)
{
    if(!wnd){
        return;
    }

    ui->mdiArea->setActiveSubWindow(qobject_cast<QMdiSubWindow*>(wnd));

}

void MainWindow::on_closeaction_triggered()
{
    ui->mdiArea->closeActiveSubWindow();//关闭活动的子窗口
}

void MainWindow::on_aboutaction_triggered()
{

    QTextEdit* textEdit = new QTextEdit(this);
    textEdit->setText("欢迎使用Lucifer开发的开源文本编辑器LuWPS");



}

void MainWindow::on_closeallaction_triggered()
{
    ui->mdiArea->closeAllSubWindows();
}

void MainWindow::on_Titleaction_triggered()
{
    ui->mdiArea->tileSubWindows();
}

void MainWindow::on_casecadeAction_triggered()
{
    ui->mdiArea->cascadeSubWindows();
}

void MainWindow::on_previousaction_triggered()
{
    ui->mdiArea->activatePreviousSubWindow();
}

void MainWindow::on_nextaction_triggered()
{
    ui->mdiArea->activateNextSubWindow();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    ui->mdiArea->closeAllSubWindows();
    if(ui->mdiArea->currentSubWindow()){
        event->ignore();//忽略此事件
    }else{
        event->accept();//接受此事件
    }
}

void MainWindow::on_openAction_triggered()
{
    docOpen();
}

void MainWindow::on_saveAction_triggered()
{
    docSave();
}

void MainWindow::on_saveAsAction_triggered()
{
    docSaveAs();
}

void MainWindow::on_UndoAction_triggered()
{
    docUndo();
}

void MainWindow::on_RedoAction_triggered()
{
    docRedo();
}

void MainWindow::on_CutAction_triggered()
{
    docCut();
}

void MainWindow::on_CopyAction_triggered()
{
    docCopy();
}

void MainWindow::on_PasteAction_triggered()
{
    docPaste();
}

void MainWindow::on_boldAction_triggered()
{
    textBold();
}

void MainWindow::on_italicAction_triggered()
{
    textItalic();
}

void MainWindow::on_underline_triggered()
{
    textUnderline();
}

void MainWindow::on_fontComboBox_activated(const QString &arg1)
{
    textFamily(arg1);
}

void MainWindow::on_sizeComboBox_activated(const QString &arg1)
{
    textSize(arg1);
}

void MainWindow::on_leftAlignAction_triggered()
{
    if(activateChildWnd())
        activateChildWnd()->setAlignOfDocumentText(1);
}

void MainWindow::on_rightAlignAction_triggered()
{
    if(activateChildWnd())
        activateChildWnd()->setAlignOfDocumentText(2);
}

void MainWindow::on_centerAction_triggered()
{
    if(activateChildWnd())
        activateChildWnd()->setAlignOfDocumentText(3);
}

void MainWindow::on_JustifyAction_triggered()
{
    if(activateChildWnd())
        activateChildWnd()->setAlignOfDocumentText(4);
}

void MainWindow::on_colorAction_triggered()
{
    textColor();
}

void MainWindow::on_comboBox_activated(const QString &arg1)
{

}

void MainWindow::on_comboBox_activated(int index)
{
    paraStyle(index);
}

void MainWindow::on_printfaction_triggered()
{
    docPrint();
}

void MainWindow::on_printpreviewAction_triggered()
{
    docPrintPreview();
}

void MainWindow::printPreview(QPrinter *printer)
{
    activateChildWnd()->print(printer);
}
