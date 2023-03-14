#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>


void MainWindow::onClickedPreview() // preview button
{

    if(! selectedList.isEmpty())
	{
	if(substitutionsTab == true)
	    SubstitutionPreview();
	else if(insertTab == true)
	    InsertPreview();
	else if(manualTab == true)
	    ManualPreview();
	}
    else
        statusbar->showMessage("Nothing to Preview" );
}

/////////////////////////////////////////////////////////////////////////////
                                                                           
void MainWindow::onClickedClear()  // Clear preview button                         
{
    lvPreview->clear();
    lvPreview->addItems(selectedList);
    if(manualTab == true)
	leFileName->setText("");
}


///////////////////////////////////////////////////////////////////////

// double clicking a preview list item to manually edit it

void MainWindow::onDoubleClickedPreviewList(QModelIndex index) // preview button
{

QString str, str2;

    if(manualTab == true)
	{
	doubleClickedPath = str2 = index.model()->data(index, Qt::DisplayRole).toString();
	str = getAllowedName(str2);
	leFileName->setText(str);
	}

}

///////////////////////////////////////////////////////////////////////////////////////

// Checks what parts of the full path are allowed to be edited and returns that section

QString& MainWindow::getAllowedName(QString fullpath)
{
QFileInfo inf(fullpath);
QString str;

        if(cbAllowDirRename->isChecked() && cbAllowExtRename->isChecked()) 
            str = inf.canonicalFilePath(); // whole path and filename + ext
        else if(cbAllowDirRename->isChecked())  // path and filname no ext
            str = inf.path() + "/" + inf.completeBaseName();
        else if(cbAllowExtRename->isChecked()) // filename and ext
            str = inf.completeBaseName() + "." + inf.completeSuffix();
        else  // default just the filename
            str = inf.completeBaseName();
	
	// use global retstr to avoid warnings about returning reference to a local
	return(retstr = str);
}

///////////////////////////////////////////////////////////////////////////////////////

QString& MainWindow::returnFullName(QString path)
{
QString str = path;
        
	if(doubleClickedPath != str) // set when preview item doubleclicked
	    {
	    QFileInfo inf(doubleClickedPath);
	    // whole path and filename + ext - no action req'd
	    if(cbAllowDirRename->isChecked() && cbAllowExtRename->isChecked())
        	str = str; // pointless but ensures other else if() work
    	    else if(cbAllowDirRename->isChecked())  // path and filename no ext
        	str = str + "." + inf.suffix();
    	    else if(cbAllowExtRename->isChecked()) // filename and ext
        	str = inf.canonicalPath() + "/" + str;
    	    else  // default just the filename
        	str = inf.canonicalPath() + "/" + str + "." + inf.suffix();
    	    }

        // use global retstr to avoid returning reference to a local out of scope
        return(retstr = str);
}


///////////////////////////////////////////////////////////////////////////////////////





void MainWindow::ManualPreview()
{
QString str, str2;

    str2 = leFileName->text();
    str = returnFullName(str2);

    while(! previewList[0].isEmpty())
	previewList[0].removeAt(0);
    while(! previewList[1].isEmpty())
        previewList[1].removeAt(0);
    previewList[0] << selectedList;

    previewList[1] << str;
    lvPreview->clear();
    lvPreview->addItems(previewList[1]);
    leFileName->setText("");
}

//////////////////////////////////////////////////////////////////////////////////

void MainWindow::InsertPreview()
{
QString str, str2;

    while(! previewList[0].isEmpty())
	previewList[0].removeAt(0);
    while(! previewList[1].isEmpty())
        previewList[1].removeAt(0);
    previewList[0] << selectedList;

    // use safe function to prevent renaming of elements not intended
    for (int i = 0; i < previewList[0].size(); i++)
        {
	str2 = previewList[0].at(i);
	doubleClickedPath = str2;
	str = getAllowedName(str2);
    	if(rbInsert->isChecked()) 
	    {
	    if(cbAtEnd->isChecked()) // append
		str.insert(str.size(), leInsert->text());
	    else  // insert
		str.insert(sbAfterChar->value(), leInsert->text());
	    }
	else  // remove
	    str.remove(sbFromChar->value(), sbNumChar->value());
	
	str2 = returnFullName(str);
	previewList[1] << str2;	    
	}

    lvPreview->clear();
    lvPreview->addItems(previewList[1]);

}

//////////////////////////////////////////////////////////////////////////////////

void MainWindow::SubstitutionPreview()
{
QString str, str2;
int toupper = -1, dot = -1;

    if(rbText->isChecked()) 
	{
	while(! previewList[0].isEmpty())
	    previewList[0].removeAt(0);
	while(! previewList[1].isEmpty())
	    previewList[1].removeAt(0);
	previewList[0] << selectedList;

	// use safe function to prevent renaming of elements not intended
	for (int i = 0; i < previewList[0].size(); i++)
    	    {
	    str2 = previewList[0].at(i);
	    doubleClickedPath = str2;
	    str = getAllowedName(str2);
    	    str = str.replace(leTextFrom->text(), leTextTo->text());
	    str2 = returnFullName(str);
	    previewList[1] << str2;	    
	    }
	lvPreview->clear();
	lvPreview->addItems(previewList[1]);
	}
    else if(rbDotSpace->isChecked())
	{
	// 0 = underscores 1 = dashes 2 = dot to dash, space to underscore
	while(! previewList[0].isEmpty())
	    previewList[0].removeAt(0);
	while(! previewList[1].isEmpty())
	    previewList[1].removeAt(0);
	previewList[0] << selectedList;
	
	dot = cbDotSpaceTo->currentIndex();
	if(dot == -1) return;
	
	// use safe function to prevent renaming of elements not intended
	for (int i = 0; i < previewList[0].size(); i++)
    	    {
	    str2 = previewList[0].at(i);
	    doubleClickedPath = str2;
	    str = getAllowedName(str2);
	    if(dot == 0) //underscores
		{
		str = str.replace(" ", "_");
		str = str.replace(".", "_");
		}
	    else if(dot == 1) // dashes
		{
		str = str.replace(" ", "-");
		str = str.replace(".", "-");
		}
	    else // dot to dash, space to underscore
		{
		str = str.replace(" ", "_");
		str = str.replace(".", "-");
		}
	    str2 = returnFullName(str);
	    previewList[1] << str2;	    
	    }

	lvPreview->clear();
	lvPreview->addItems(previewList[1]);
	}
    else if(rbCase->isChecked())
        {
	while(! previewList[0].isEmpty())
	    previewList[0].removeAt(0);
	while(! previewList[1].isEmpty())
	    previewList[1].removeAt(0);
	previewList[0] << selectedList;

	if(cbCaseFrom->currentIndex() == 1 && cbCaseTo->currentIndex() == 0)
	    toupper = 1;
	else if(cbCaseFrom->currentIndex() == 0 && cbCaseTo->currentIndex() == 1)
	    toupper = 0;
	if(toupper == -1) return;

	// use safe function to prevent renaming of elements not intended
	for (int i = 0; i < previewList[0].size(); i++)
    	    {
	    str2 = previewList[0].at(i);
	    doubleClickedPath = str2;
	    str = getAllowedName(str2);
	    if(toupper == 1)
		str = str.toUpper();
	    else
		str = str.toLower();
	    str2 = returnFullName(str);
	    previewList[1] << str2;	    
	    }

	lvPreview->clear();
	lvPreview->addItems(previewList[1]);
	}
}

