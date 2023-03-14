#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>


/////////////////////////////////////////////////////////////////////////////

void MainWindow::onClickedRename()  // Rename button
{
QString str, str2;
QDir dir;

    if(! previewList[1].isEmpty())
	{
	if(previewList[0].size() != previewList[1].size())
	    {
	    statusbar->showMessage("Mismatch between lists");
	    qDebug() << previewList[0].size() << previewList[1].size() ;
	    return;
	    }
	for (int i = 0; i < previewList[1].size(); i++)
    	    {
	    str = previewList[0].at(i);
	    str2 = previewList[1].at(i);
	    QFileInfo inf(str2);
	    if(! dir.exists(inf.absolutePath()) && cbCreatePath->isChecked())
		{ // if the path has been edited, create the new one
		if(! dir.mkdir(inf.absolutePath()))
		    {
		    statusbar->showMessage("Error creating new path");
		    return;
		    }
		}
	    else
		statusbar->showMessage("Error: Path does not exist and new path creation not authorised");
	    QFile::rename(str, str2);
	    lvPreview->clear();
	    //lvPreview->addItems(previewList);
	    }
	}
    else
        statusbar->showMessage("Nothing to Rename");


}

