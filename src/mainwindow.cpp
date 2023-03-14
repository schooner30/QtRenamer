#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);

    // model MUST be a pointer or goes out of scope as soon as displayed
    // and you get a blank widget
    dirModel = new QFileSystemModel(this);
    dirModel->setFilter(QDir::AllDirs | QDir::NoDotAndDotDot | QDir::CaseSensitive);

    listModel = new QFileSystemModel(this);
    listModel->setFilter(QDir::Files | QDir::NoDotAndDotDot | QDir::CaseSensitive);
	
    rootPath = "";
    dirModel->setRootPath("");

    treeView->setModel(dirModel);
    lvFiles->setModel(listModel);

    const QModelIndex rootIndex = dirModel->index(QDir::cleanPath(rootPath));
    if (rootIndex.isValid())
        treeView->setRootIndex(rootIndex);
    
    treeView->setAnimated(true);
    treeView->setIndentation(20);
    treeView->setSortingEnabled(false);
    treeView->setColumnWidth(0, treeView->width() / 2);

    treeView->setWindowTitle(QObject::tr("Dir View"));
    treeView->show();
    treeView->expand(dirModel->index("/"));

    lvFiles->setRootIndex(listModel->index(currentPath));


    cbCaseFrom->addItem("Upper");
    cbCaseFrom->addItem("Lower");
    cbCaseTo->addItem("Upper");
    cbCaseTo->addItem("Lower");
    cbDotSpaceTo->addItem("Underscores");
    cbDotSpaceTo->addItem("Dashes");
    cbDotSpaceTo->addItem("Dot to Dash - Space to Underscore");

    QCoreApplication::setOrganizationName("MGWare");
    QCoreApplication::setOrganizationDomain("mgware.co.uk");
    QCoreApplication::setApplicationName("QtRenamer");

    // qt does not understand ~/ so path must be absolute or it will create ~/ on PWD
    struct passwd *pw = getpwuid(getuid());
    const char *homedir = pw->pw_dir;

    QString str = homedir;
    str += "/.config/MGWare/QtRenamer/QtRenamer.ini";
    settings = new QSettings(str, QSettings::IniFormat, this);

    readSettings();

    QSize s = size();
    resize(s.width() + 10, s.height() + 10 );

}

MainWindow::~MainWindow()
{
    writeSettings();
}


//////////////////////////////////////////////////////////////////////////////////
//  
// closeEvent() traps the system event and forces closure through onCloseDown()
// any code needs to be in onCloseDown() because other exit methods go straight there.

void MainWindow::closeEvent(QCloseEvent *event )
{
    //Q_UNUSED(event);

    onCloseDown();

    event->accept();
}
    
void MainWindow::onCloseDown()
{   
    writeSettings();
}


void MainWindow::onClickedAbout()
{
QMessageBox::about (this, "About QtRenamer",
                        "                 QtRenamer\n"
                        "              (c) ArcEye 2023\n\n"
                        "  Bulk file renamer in homage to pyrenamer\n"
                        "        written entirely in Qt6 C++\n");
}

////////////////////////////////////////////////////////////////////////
// Update the lvFiles, by getting clicked signals for the treeview 
// and setting lvFiles root to that path.

void MainWindow::onTreeClicked(QModelIndex index)
{
    treeView->setColumnWidth(0, treeView->width() / 2);

    currentPath = dirModel->filePath(index);

    lvFiles->setRootIndex(listModel->setRootPath(currentPath));
}

/////////////////////////////////////////////////////////////////////////////
// clicking an entry in lvFiles puts that across to lvPreview
//
// filename = listModel->filePath(index); will get individual file clicked if req.


void MainWindow::onClickedFiles(QModelIndex index)
{
QString filename, root;

    Q_UNUSED(index);

    selectedList.clear();
    root = listModel->rootPath();
    QModelIndexList indexes = lvFiles->selectionModel()->selectedIndexes();

    for (int i = 0; i < indexes.size(); i++)
	{
	filename = root + "/";
	filename += indexes[i].data().toString();
        selectedList << filename;
	}
    
    lvPreview->clear();
    lvPreview->addItems(selectedList);
}


///////////////////////////////////////////////////////////////////////


void MainWindow::onCurrentTabChanged(int index)
{
    switch(index)
	{
	case 0:
	    substitutionsTab = true;
	    insertTab = false;
	    manualTab = false;
	    break;
	case 1:
	    substitutionsTab = false;
	    insertTab = true;
	    manualTab = false;
	    break;
	case 2:
	    substitutionsTab = false;
	    insertTab = false;
	    manualTab = true;
	    break;
	default:
	    break;
	}
}

////////////////////////////////////////////////////////////////////////////

// force col 0 of treeView to half width on any resize
void MainWindow::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);
    treeView->setColumnWidth(0, treeView->width() / 2);
}

////////////////////////////////////////////////////////////////////////////

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::ToolTip)
	return true;
    else
	return QMainWindow::eventFilter(obj, event);		
}

void MainWindow::onActionToolTips(bool check)
{

    if(!check)
	qApp->installEventFilter(this);
    else
	qApp->removeEventFilter(this);
}