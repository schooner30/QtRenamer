#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <QtWidgets/QDesktopWidget>
#include <QFileSystemModel>
#include <QFileIconProvider>
#include <QTreeView>
#include <QMessageBox>
#include <QCommandLineParser>
#include <QCommandLineOption>
#include <QProcess>
#include <QFileInfo>
#include <QSettings>
#include <QCloseEvent>

#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

#include "ui_mainwindow.h"

class MainWindow : public QMainWindow , private Ui_MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void closeEvent(QCloseEvent *event);  // redefine inherited function from QWidget to control exit

    void SubstitutionPreview();
    void InsertPreview();
    void ManualPreview();

    QString& getAllowedName(QString);
    QString& returnFullName(QString);

    QFileSystemModel *dirModel;
    QFileSystemModel *listModel;
    QString currentPath;
    QString rootPath;
    QString doubleClickedPath;
    QString retstr;
    QStringList selectedList;
    QStringList previewList[2];

    QSettings *settings;
    void readSettings();
    void writeSettings();

    bool patternsTab;
    bool substitutionsTab;
    bool insertTab;
    bool manualTab;

    virtual void resizeEvent(QResizeEvent*);
protected:
    bool eventFilter(QObject *obj, QEvent *ev);

private slots:
    virtual void onCloseDown();

    virtual void onTreeClicked(QModelIndex);
    virtual void onClickedPreview();
    virtual void onClickedClear();
    virtual void onClickedRename();
    virtual void onClickedAbout();
    virtual void onClickedFiles(QModelIndex);
    virtual void onCurrentTabChanged(int);
    virtual void onDoubleClickedPreviewList(QModelIndex);
    
    virtual void onActionToolTips(bool);
};
#endif // MAINWINDOW_H
