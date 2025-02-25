#ifndef CHILDWND_H
#define CHILDWND_H
#include "QTextEdit"


class ChildWnd : public QTextEdit
{
    Q_OBJECT
public:
    ChildWnd();
    QString m_CurDocPath;//当前文档路径
    void newDoc();//新建文档
    QString getCurDocName();//文件路径中提取文档名
    bool loadDoc(const QString&docName);
    void setCurDoc(const QString&docName);
    bool saveDoc();
    bool saveAsDoc();
    bool saveDocOpt(QString docName);
    void setFormatOnSelectedWord(const QTextCharFormat &fmt);
    void setAlignOfDocumentText(int aligntype);
    void setParaStyle(int pStyle);
protected:
    void closeEvent(QCloseEvent *event);
private:
    bool promptSave();
private:
    bool m_bSaved;//文档是否保存
private slots:
    void docBeModified();//文档修改时加'*'



};

#endif // CHILDWND_H
