/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionShow_Tool_Tips;
    QWidget *centralwidget;
    QGridLayout *gridLayout_10;
    QSplitter *splitter_8;
    QSplitter *splitter_5;
    QSplitter *splitter_4;
    QLabel *label_13;
    QTreeView *treeView;
    QSplitter *splitter_3;
    QLabel *label_14;
    QListView *lvFiles;
    QSplitter *splitter_2;
    QLabel *label_15;
    QListWidget *lvPreview;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *cbAllowDirRename;
    QCheckBox *cbAllowExtRename;
    QCheckBox *cbCreatePath;
    QSplitter *splitter_7;
    QTabWidget *tabWidget;
    QWidget *tabSubstitutions;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSplitter *splitter_6;
    QRadioButton *rbText;
    QRadioButton *rbDotSpace;
    QRadioButton *rbCase;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *leTextFrom;
    QLabel *label_2;
    QLineEdit *leTextTo;
    QSplitter *splitter_9;
    QLabel *label_3;
    QComboBox *cbDotSpaceTo;
    QSplitter *splitter_10;
    QLabel *label_5;
    QComboBox *cbCaseTo;
    QLabel *label_6;
    QComboBox *cbCaseFrom;
    QWidget *tabInsertDelete;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *rbInsert;
    QRadioButton *rbDelete;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leInsert;
    QLabel *label_8;
    QSpinBox *sbAfterChar;
    QLabel *label_9;
    QCheckBox *cbAtEnd;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QSpinBox *sbFromChar;
    QLabel *label_11;
    QSpinBox *sbNumChar;
    QSpacerItem *horizontalSpacer;
    QWidget *tabManualRename;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *leFileName;
    QSpacerItem *horizontalSpacer_5;
    QSplitter *splitter;
    QPushButton *pbPreview;
    QPushButton *pbClear;
    QPushButton *pbRename;
    QPushButton *pbQuit;
    QPushButton *pbAbout;
    QMenuBar *menubar;
    QMenu *menuSettings;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1116, 536);
        actionShow_Tool_Tips = new QAction(MainWindow);
        actionShow_Tool_Tips->setObjectName(QString::fromUtf8("actionShow_Tool_Tips"));
        actionShow_Tool_Tips->setCheckable(true);
        actionShow_Tool_Tips->setChecked(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_10 = new QGridLayout(centralwidget);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        splitter_8 = new QSplitter(centralwidget);
        splitter_8->setObjectName(QString::fromUtf8("splitter_8"));
        splitter_8->setOrientation(Qt::Vertical);
        splitter_5 = new QSplitter(splitter_8);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        splitter_4 = new QSplitter(splitter_5);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        label_13 = new QLabel(splitter_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        splitter_4->addWidget(label_13);
        treeView = new QTreeView(splitter_4);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setAlternatingRowColors(true);
        splitter_4->addWidget(treeView);
        splitter_5->addWidget(splitter_4);
        splitter_3 = new QSplitter(splitter_5);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        label_14 = new QLabel(splitter_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        splitter_3->addWidget(label_14);
        lvFiles = new QListView(splitter_3);
        lvFiles->setObjectName(QString::fromUtf8("lvFiles"));
        lvFiles->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvFiles->setProperty("showDropIndicator", QVariant(false));
        lvFiles->setAlternatingRowColors(true);
        lvFiles->setSelectionMode(QAbstractItemView::MultiSelection);
        splitter_3->addWidget(lvFiles);
        splitter_5->addWidget(splitter_3);
        splitter_2 = new QSplitter(splitter_5);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        label_15 = new QLabel(splitter_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        splitter_2->addWidget(label_15);
        lvPreview = new QListWidget(splitter_2);
        lvPreview->setObjectName(QString::fromUtf8("lvPreview"));
        lvPreview->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvPreview->setProperty("showDropIndicator", QVariant(false));
        lvPreview->setAlternatingRowColors(true);
        splitter_2->addWidget(lvPreview);
        groupBox = new QGroupBox(splitter_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        cbAllowDirRename = new QCheckBox(groupBox);
        cbAllowDirRename->setObjectName(QString::fromUtf8("cbAllowDirRename"));

        verticalLayout_4->addWidget(cbAllowDirRename);

        cbAllowExtRename = new QCheckBox(groupBox);
        cbAllowExtRename->setObjectName(QString::fromUtf8("cbAllowExtRename"));

        verticalLayout_4->addWidget(cbAllowExtRename);

        cbCreatePath = new QCheckBox(groupBox);
        cbCreatePath->setObjectName(QString::fromUtf8("cbCreatePath"));

        verticalLayout_4->addWidget(cbCreatePath);


        gridLayout_6->addLayout(verticalLayout_4, 0, 0, 1, 1);

        splitter_2->addWidget(groupBox);
        splitter_5->addWidget(splitter_2);
        splitter_8->addWidget(splitter_5);
        splitter_7 = new QSplitter(splitter_8);
        splitter_7->setObjectName(QString::fromUtf8("splitter_7"));
        splitter_7->setOrientation(Qt::Horizontal);
        tabWidget = new QTabWidget(splitter_7);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabSubstitutions = new QWidget();
        tabSubstitutions->setObjectName(QString::fromUtf8("tabSubstitutions"));
        gridLayout_9 = new QGridLayout(tabSubstitutions);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame = new QFrame(tabSubstitutions);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter_6 = new QSplitter(frame);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setOrientation(Qt::Vertical);
        rbText = new QRadioButton(splitter_6);
        rbText->setObjectName(QString::fromUtf8("rbText"));
        splitter_6->addWidget(rbText);
        rbDotSpace = new QRadioButton(splitter_6);
        rbDotSpace->setObjectName(QString::fromUtf8("rbDotSpace"));
        splitter_6->addWidget(rbDotSpace);
        rbCase = new QRadioButton(splitter_6);
        rbCase->setObjectName(QString::fromUtf8("rbCase"));
        splitter_6->addWidget(rbCase);

        gridLayout_2->addWidget(splitter_6, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(tabSubstitutions);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        horizontalSpacer_7 = new QSpacerItem(88, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        leTextFrom = new QLineEdit(tabSubstitutions);
        leTextFrom->setObjectName(QString::fromUtf8("leTextFrom"));

        horizontalLayout_6->addWidget(leTextFrom);

        label_2 = new QLabel(tabSubstitutions);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        leTextTo = new QLineEdit(tabSubstitutions);
        leTextTo->setObjectName(QString::fromUtf8("leTextTo"));

        horizontalLayout_6->addWidget(leTextTo);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        splitter_9 = new QSplitter(tabSubstitutions);
        splitter_9->setObjectName(QString::fromUtf8("splitter_9"));
        splitter_9->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_9);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        splitter_9->addWidget(label_3);
        cbDotSpaceTo = new QComboBox(splitter_9);
        cbDotSpaceTo->setObjectName(QString::fromUtf8("cbDotSpaceTo"));
        splitter_9->addWidget(cbDotSpaceTo);

        gridLayout_3->addWidget(splitter_9, 1, 0, 1, 1);

        splitter_10 = new QSplitter(tabSubstitutions);
        splitter_10->setObjectName(QString::fromUtf8("splitter_10"));
        splitter_10->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(splitter_10);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        splitter_10->addWidget(label_5);
        cbCaseTo = new QComboBox(splitter_10);
        cbCaseTo->setObjectName(QString::fromUtf8("cbCaseTo"));
        splitter_10->addWidget(cbCaseTo);
        label_6 = new QLabel(splitter_10);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        splitter_10->addWidget(label_6);
        cbCaseFrom = new QComboBox(splitter_10);
        cbCaseFrom->setObjectName(QString::fromUtf8("cbCaseFrom"));
        splitter_10->addWidget(cbCaseFrom);

        gridLayout_3->addWidget(splitter_10, 2, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tabSubstitutions, QString());
        tabInsertDelete = new QWidget();
        tabInsertDelete->setObjectName(QString::fromUtf8("tabInsertDelete"));
        gridLayout_8 = new QGridLayout(tabInsertDelete);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(tabInsertDelete);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(288, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout_7->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        rbInsert = new QRadioButton(tabInsertDelete);
        rbInsert->setObjectName(QString::fromUtf8("rbInsert"));

        verticalLayout_3->addWidget(rbInsert);

        rbDelete = new QRadioButton(tabInsertDelete);
        rbDelete->setObjectName(QString::fromUtf8("rbDelete"));

        verticalLayout_3->addWidget(rbDelete);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leInsert = new QLineEdit(tabInsertDelete);
        leInsert->setObjectName(QString::fromUtf8("leInsert"));
        leInsert->setMaximumSize(QSize(336, 31));

        horizontalLayout->addWidget(leInsert);

        label_8 = new QLabel(tabInsertDelete);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        sbAfterChar = new QSpinBox(tabInsertDelete);
        sbAfterChar->setObjectName(QString::fromUtf8("sbAfterChar"));
        sbAfterChar->setMaximumSize(QSize(16777215, 31));

        horizontalLayout->addWidget(sbAfterChar);

        label_9 = new QLabel(tabInsertDelete);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        cbAtEnd = new QCheckBox(tabInsertDelete);
        cbAtEnd->setObjectName(QString::fromUtf8("cbAtEnd"));
        cbAtEnd->setMaximumSize(QSize(16777215, 31));

        horizontalLayout->addWidget(cbAtEnd);

        horizontalSpacer_2 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_10 = new QLabel(tabInsertDelete);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);

        sbFromChar = new QSpinBox(tabInsertDelete);
        sbFromChar->setObjectName(QString::fromUtf8("sbFromChar"));
        sbFromChar->setMaximumSize(QSize(16777215, 29));

        horizontalLayout_2->addWidget(sbFromChar);

        label_11 = new QLabel(tabInsertDelete);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_2->addWidget(label_11);

        sbNumChar = new QSpinBox(tabInsertDelete);
        sbNumChar->setObjectName(QString::fromUtf8("sbNumChar"));
        sbNumChar->setMaximumSize(QSize(16777215, 29));

        horizontalLayout_2->addWidget(sbNumChar);

        horizontalSpacer = new QSpacerItem(258, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);

        tabWidget->addTab(tabInsertDelete, QString());
        tabManualRename = new QWidget();
        tabManualRename->setObjectName(QString::fromUtf8("tabManualRename"));
        gridLayout_5 = new QGridLayout(tabManualRename);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_12 = new QLabel(tabManualRename);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(16777215, 31));

        horizontalLayout_5->addWidget(label_12);

        horizontalSpacer_4 = new QSpacerItem(418, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        leFileName = new QLineEdit(tabManualRename);
        leFileName->setObjectName(QString::fromUtf8("leFileName"));
        leFileName->setMaximumSize(QSize(16777215, 31));

        horizontalLayout_4->addWidget(leFileName);

        horizontalSpacer_5 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout_5->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tabManualRename, QString());
        splitter_7->addWidget(tabWidget);
        splitter = new QSplitter(splitter_7);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        pbPreview = new QPushButton(splitter);
        pbPreview->setObjectName(QString::fromUtf8("pbPreview"));
        pbPreview->setMaximumSize(QSize(150, 40));
        splitter->addWidget(pbPreview);
        pbClear = new QPushButton(splitter);
        pbClear->setObjectName(QString::fromUtf8("pbClear"));
        pbClear->setMaximumSize(QSize(150, 40));
        splitter->addWidget(pbClear);
        pbRename = new QPushButton(splitter);
        pbRename->setObjectName(QString::fromUtf8("pbRename"));
        pbRename->setMaximumSize(QSize(150, 40));
        splitter->addWidget(pbRename);
        pbQuit = new QPushButton(splitter);
        pbQuit->setObjectName(QString::fromUtf8("pbQuit"));
        pbQuit->setMaximumSize(QSize(150, 40));
        splitter->addWidget(pbQuit);
        pbAbout = new QPushButton(splitter);
        pbAbout->setObjectName(QString::fromUtf8("pbAbout"));
        pbAbout->setMaximumSize(QSize(16777215, 40));
        splitter->addWidget(pbAbout);
        splitter_7->addWidget(splitter);
        splitter_8->addWidget(splitter_7);

        gridLayout_10->addWidget(splitter_8, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1116, 18));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuSettings->menuAction());
        menuSettings->addAction(actionShow_Tool_Tips);

        retranslateUi(MainWindow);
        QObject::connect(pbPreview, SIGNAL(clicked()), MainWindow, SLOT(onClickedPreview()));
        QObject::connect(pbRename, SIGNAL(clicked()), MainWindow, SLOT(onClickedRename()));
        QObject::connect(pbClear, SIGNAL(clicked()), MainWindow, SLOT(onClickedClear()));
        QObject::connect(pbQuit, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(treeView, SIGNAL(clicked(QModelIndex)), MainWindow, SLOT(onTreeClicked(QModelIndex)));
        QObject::connect(lvFiles, SIGNAL(clicked(QModelIndex)), MainWindow, SLOT(onClickedFiles(QModelIndex)));
        QObject::connect(lvPreview, SIGNAL(doubleClicked(QModelIndex)), MainWindow, SLOT(onDoubleClickedPreviewList(QModelIndex)));
        QObject::connect(tabWidget, SIGNAL(currentChanged(int)), MainWindow, SLOT(onCurrentTabChanged(int)));
        QObject::connect(pbAbout, SIGNAL(clicked()), MainWindow, SLOT(onClickedAbout()));
        QObject::connect(leFileName, SIGNAL(returnPressed()), MainWindow, SLOT(onClickedPreview()));
        QObject::connect(actionShow_Tool_Tips, SIGNAL(toggled(bool)), MainWindow, SLOT(onActionToolTips(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QtRenamer", nullptr));
        actionShow_Tool_Tips->setText(QCoreApplication::translate("MainWindow", "Show Tool Tips", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "DirectoryTree", nullptr));
#if QT_CONFIG(tooltip)
        treeView->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Shows the local directory tree.</p><p>Double click to expand or contract the tree.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_14->setText(QCoreApplication::translate("MainWindow", "Files List", nullptr));
#if QT_CONFIG(tooltip)
        lvFiles->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Shows the files within a directory highlighted in the Directory Tree.</p><p>Click a file to select it and put it in the Preview List.</p><p>Click it again to de-select it.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_15->setText(QCoreApplication::translate("MainWindow", "Preview List", nullptr));
#if QT_CONFIG(tooltip)
        lvPreview->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Lists the files selected within the Files List.</p><p>When rename operations are applied, previews the results.</p><p>If satisfactory, that new name is used by the rename function.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Directory and extension preferences", nullptr));
#if QT_CONFIG(tooltip)
        cbAllowDirRename->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Check to allow the file path to also be edited.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbAllowDirRename->setText(QCoreApplication::translate("MainWindow", "Allow Dir renaming", nullptr));
#if QT_CONFIG(tooltip)
        cbAllowExtRename->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Check to allow the file extension to be edited.</p><p>(Use with care, some files may cease to operate or be recognised)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbAllowExtRename->setText(QCoreApplication::translate("MainWindow", "Allow extension renaming", nullptr));
#if QT_CONFIG(tooltip)
        cbCreatePath->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Check if the file rename involves a path element which does not currently exist.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbCreatePath->setText(QCoreApplication::translate("MainWindow", "Create new path if it does not exist", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Filename substitution operation types.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        rbText->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Simple text substitution from &quot;X&quot; to &quot;Y&quot;</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rbText->setText(QCoreApplication::translate("MainWindow", "Text", nullptr));
#if QT_CONFIG(tooltip)
        rbDotSpace->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Change dots and spaces commonly found in windoze files and music files,to dashes and / or underscores</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rbDotSpace->setText(QCoreApplication::translate("MainWindow", "Dots / Spaces", nullptr));
#if QT_CONFIG(tooltip)
        rbCase->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Simply change the case of the whole filename.</p><p>(If only partial change req'd, manual rename  may be better)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rbCase->setText(QCoreApplication::translate("MainWindow", "Text Case", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Change:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Change all dots and spaces to: ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Change:", nullptr));
        cbCaseTo->setCurrentText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        cbCaseFrom->setCurrentText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabSubstitutions), QCoreApplication::translate("MainWindow", "Substitutions", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Insert or delete charactor string at char number", nullptr));
#if QT_CONFIG(tooltip)
        rbInsert->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Insert text at a specified charactor number in a filename</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rbInsert->setText(QCoreApplication::translate("MainWindow", "Insert", nullptr));
#if QT_CONFIG(tooltip)
        rbDelete->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Delete text at a specified charactor number in the filename.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rbDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "After char No.", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "OR", nullptr));
        cbAtEnd->setText(QCoreApplication::translate("MainWindow", "At end", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "From:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Number of chars:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabInsertDelete), QCoreApplication::translate("MainWindow", "Insert / Delete", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", " Double Click a file in the Preview List to edit manually below.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabManualRename), QCoreApplication::translate("MainWindow", "Manual Rename", nullptr));
#if QT_CONFIG(tooltip)
        pbPreview->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>When pressed, the contents of the Review list are changed according to the renaming operation which is current.</p><p>Does not make changes, if the preview is as required, then press [Rename]</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbPreview->setText(QCoreApplication::translate("MainWindow", "Preview", nullptr));
#if QT_CONFIG(tooltip)
        pbClear->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Will clear the previewed renaming operation and revert the Preview list to its original state.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
#if QT_CONFIG(tooltip)
        pbRename->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Renames the selected files to the names displayed in the Preview list.</p><p>If the 'Create new path...' checkbox is checked, it will create new directories as required.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbRename->setText(QCoreApplication::translate("MainWindow", "Rename", nullptr));
        pbQuit->setText(QCoreApplication::translate("MainWindow", "QUIT", nullptr));
        pbAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
