#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

void MainWindow::readSettings()
{
QString str, str2;
    
    settings->beginGroup("WINDOW");
    restoreGeometry(settings->value("mainWindowGeometry").toByteArray());
    restoreState(settings->value("mainWindowState").toByteArray());
    settings->endGroup();

    settings->beginGroup("CHECKBOXES");
    cbAllowDirRename->setChecked(settings->value("AllowDirRename", false).toBool());
    cbAllowExtRename->setChecked(settings->value("AllowExtRename", false).toBool());
    cbCreatePath->setChecked(settings->value("CreatePath", false).toBool());
    cbAtEnd->setChecked(settings->value("AtEnd", false).toBool());
    settings->endGroup();

    settings->beginGroup("RADIOBUTTONS");
    rbText->setChecked(settings->value("Text", false).toBool());
    rbDotSpace->setChecked(settings->value("DotSpace", false).toBool());
    rbCase->setChecked(settings->value("Case", false).toBool());
    rbInsert->setChecked(settings->value("Insert", false).toBool());
    rbDelete->setChecked(settings->value("Delete", false).toBool());
    settings->endGroup();

    settings->beginGroup("COMBOBOXES");
    cbCaseTo->setCurrentIndex(settings->value("CaseTo", 0).toInt());
    cbCaseFrom->setCurrentIndex(settings->value("Casefrom", 0).toInt());
    cbDotSpaceTo->setCurrentIndex(settings->value("DotSpaceTo", 0).toInt());
    settings->endGroup();


    settings->beginGroup("SPINBOXES");
    sbAfterChar->setValue(settings->value("AfterChar",  0).toInt());
    sbFromChar->setValue(settings->value("FromChar",  0).toInt());
    sbNumChar->setValue(settings->value("NumChar",  0).toInt());
    settings->endGroup();

    settings->beginGroup("LINEEDITS");
    leTextFrom->setText(settings->value("TextFrom", "").toString());
    leTextTo->setText(settings->value("TextTo", "").toString());
    settings->endGroup();

    settings->beginGroup("TAB");
    tabWidget->setCurrentIndex(settings->value("TabDisplayed", 0).toInt());
    settings->endGroup();

}


void MainWindow::writeSettings()
{
QString str, str2;

    settings->beginGroup("WINDOW");
    settings->setValue("mainWindowGeometry", saveGeometry());
    settings->setValue("mainWindowState", saveState());
    settings->endGroup();

    settings->beginGroup("CHECKBOXES");
    settings->setValue("AllowDirRename", cbAllowDirRename->isChecked());
    settings->setValue("AllowExtRename", cbAllowExtRename->isChecked());
    settings->setValue("CreatePath", cbCreatePath->isChecked());
    settings->setValue("AtEnd", cbAtEnd->isChecked());  
    settings->endGroup();

    settings->beginGroup("RADIOBUTTONS");
    settings->setValue("Text", rbText->isChecked());
    settings->setValue("DotSpace", rbDotSpace->isChecked());
    settings->setValue("Case", rbCase->isChecked());
    settings->setValue("Insert", rbInsert->isChecked());  
    settings->setValue("Delete", rbDelete->isChecked());  
    settings->endGroup();

    settings->beginGroup("COMBOBOXES");
    settings->setValue("CaseTo", cbCaseTo->currentIndex());    
    settings->setValue("Casefrom", cbCaseFrom->currentIndex());    
    settings->setValue("DotSpaceTo", cbDotSpaceTo->currentIndex());    
    settings->endGroup();


    settings->beginGroup("SPINBOXES");
    settings->setValue("AfterChar", sbAfterChar->value());    
    settings->setValue("FromChar", sbFromChar->value());
    settings->setValue("NumChar", sbNumChar->value());
    settings->endGroup();

    settings->beginGroup("LINEEDITS");
    settings->setValue("TextFrom", leTextFrom->text());
    settings->setValue("TextTo", leTextTo->text());
    settings->endGroup();

    settings->beginGroup("TAB");
    settings->setValue("TabDisplayed", tabWidget->currentIndex());
    settings->endGroup();

}

