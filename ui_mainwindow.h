/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Title;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;
    QPushButton *clear;
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *memberTab;
    QGroupBox *memberGroupBox;
    QPushButton *addMemberButton;
    QLabel *AddNamelabel;
    QLabel *AddMemberNum;
    QLabel *Namelabel_3;
    QLabel *Namelabel_4;
    QRadioButton *memberTypeBasicRadio;
    QRadioButton *memberTypePreferredRadio;
    QLineEdit *AddNameBox;
    QLineEdit *AddMemberNumBox;
    QLineEdit *addMemberExpBox;
    QGroupBox *groupBox_2;
    QPushButton *deleteMemberButton;
    QLineEdit *RemoveNameBox;
    QLineEdit *RemoveMemberNumBox;
    QRadioButton *deleteMemberNameRadio;
    QRadioButton *deleteMemberIDRadio;
    QPushButton *deleteMemberButton_2;
    QPushButton *ModifyMemberButton;
    QPushButton *ApplyModifyMemberButton;
    QWidget *itemTab;
    QGroupBox *itemGBox;
    QLabel *label;
    QPushButton *ItemPriceButton;
    QLineEdit *itemNameBox;
    QWidget *reportTab;
    QGroupBox *ViewMemberPurchasesGroupBox;
    QLineEdit *ViewMemberPurchaseNameBox;
    QLineEdit *ViewMemberPurchaseIDBox;
    QRadioButton *ViewMemberPuchasesNameRadio;
    QRadioButton *ViewMemberPurchasesIDRadio;
    QPushButton *ViewMemberPurchaseButton;
    QGroupBox *displayItemBox;
    QLabel *label_4;
    QComboBox *displayItemCombo;
    QPushButton *displayItemsButton;
    QGroupBox *groupBox;
    QLineEdit *DisplayExpDatesBox;
    QLabel *label_5;
    QPushButton *DisplayExpDatesButton;
    QGroupBox *groupBox_4;
    QPushButton *viewDuesButton;
    QPushButton *DisplayChangeTypeButton;
    QPushButton *rebateButton;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QPushButton *saveAllButton;
    QGroupBox *DisplayOptionsGroupBox;
    QRadioButton *displayAllRadio;
    QRadioButton *displayBasicRadio;
    QRadioButton *displayPreferredRadio;
    QLabel *TableTitle;
    QGroupBox *groupBox_3;
    QLabel *PreferredShoppersLabel;
    QLabel *BasicShoppersLabel;
    QLabel *TotalRevenueLabel;
    QLabel *PreferredShoppersAmount;
    QLabel *BasicShoppersAmount;
    QLabel *TotalRevenueAmount;
    QPushButton *pushButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1024, 619);
        QFont font;
        font.setFamily(QStringLiteral("Shree Devanagari 714"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Title = new QLabel(centralWidget);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(440, 10, 511, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Shree Devanagari 714"));
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        Title->setFont(font1);
        Title->setFocusPolicy(Qt::NoFocus);
        Title->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(922, 540, 61, 21));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(380, 70, 631, 401));
        QFont font2;
        font2.setFamily(QStringLiteral("Shree Devanagari 714"));
        tableWidget->setFont(font2);
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(700, 530, 121, 41));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(880, 10, 91, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../20070401istockpbjbeauty.jpg")));
        label_2->setScaledContents(true);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 361, 431));
        tabWidget->setFont(font2);
        memberTab = new QWidget();
        memberTab->setObjectName(QStringLiteral("memberTab"));
        memberGroupBox = new QGroupBox(memberTab);
        memberGroupBox->setObjectName(QStringLiteral("memberGroupBox"));
        memberGroupBox->setGeometry(QRect(10, 10, 331, 231));
        addMemberButton = new QPushButton(memberGroupBox);
        addMemberButton->setObjectName(QStringLiteral("addMemberButton"));
        addMemberButton->setGeometry(QRect(110, 200, 100, 20));
        AddNamelabel = new QLabel(memberGroupBox);
        AddNamelabel->setObjectName(QStringLiteral("AddNamelabel"));
        AddNamelabel->setGeometry(QRect(20, 30, 41, 21));
        QFont font3;
        font3.setPointSize(13);
        AddNamelabel->setFont(font3);
        AddMemberNum = new QLabel(memberGroupBox);
        AddMemberNum->setObjectName(QStringLiteral("AddMemberNum"));
        AddMemberNum->setGeometry(QRect(20, 68, 131, 21));
        AddMemberNum->setFont(font3);
        Namelabel_3 = new QLabel(memberGroupBox);
        Namelabel_3->setObjectName(QStringLiteral("Namelabel_3"));
        Namelabel_3->setGeometry(QRect(20, 160, 111, 21));
        Namelabel_3->setFont(font3);
        Namelabel_4 = new QLabel(memberGroupBox);
        Namelabel_4->setObjectName(QStringLiteral("Namelabel_4"));
        Namelabel_4->setGeometry(QRect(20, 108, 181, 21));
        Namelabel_4->setFont(font3);
        memberTypeBasicRadio = new QRadioButton(memberGroupBox);
        memberTypeBasicRadio->setObjectName(QStringLiteral("memberTypeBasicRadio"));
        memberTypeBasicRadio->setGeometry(QRect(200, 150, 82, 17));
        memberTypeBasicRadio->setChecked(true);
        memberTypePreferredRadio = new QRadioButton(memberGroupBox);
        memberTypePreferredRadio->setObjectName(QStringLiteral("memberTypePreferredRadio"));
        memberTypePreferredRadio->setGeometry(QRect(200, 170, 82, 17));
        AddNameBox = new QLineEdit(memberGroupBox);
        AddNameBox->setObjectName(QStringLiteral("AddNameBox"));
        AddNameBox->setGeometry(QRect(200, 30, 113, 21));
        AddMemberNumBox = new QLineEdit(memberGroupBox);
        AddMemberNumBox->setObjectName(QStringLiteral("AddMemberNumBox"));
        AddMemberNumBox->setGeometry(QRect(200, 70, 113, 21));
        addMemberExpBox = new QLineEdit(memberGroupBox);
        addMemberExpBox->setObjectName(QStringLiteral("addMemberExpBox"));
        addMemberExpBox->setGeometry(QRect(200, 110, 113, 21));
        groupBox_2 = new QGroupBox(memberTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 250, 331, 151));
        deleteMemberButton = new QPushButton(groupBox_2);
        deleteMemberButton->setObjectName(QStringLiteral("deleteMemberButton"));
        deleteMemberButton->setGeometry(QRect(10, 130, 100, 20));
        deleteMemberButton->setFont(font2);
        RemoveNameBox = new QLineEdit(groupBox_2);
        RemoveNameBox->setObjectName(QStringLiteral("RemoveNameBox"));
        RemoveNameBox->setGeometry(QRect(170, 30, 131, 21));
        RemoveMemberNumBox = new QLineEdit(groupBox_2);
        RemoveMemberNumBox->setObjectName(QStringLiteral("RemoveMemberNumBox"));
        RemoveMemberNumBox->setGeometry(QRect(170, 60, 131, 21));
        deleteMemberNameRadio = new QRadioButton(groupBox_2);
        deleteMemberNameRadio->setObjectName(QStringLiteral("deleteMemberNameRadio"));
        deleteMemberNameRadio->setGeometry(QRect(50, 30, 100, 21));
        deleteMemberNameRadio->setChecked(true);
        deleteMemberIDRadio = new QRadioButton(groupBox_2);
        deleteMemberIDRadio->setObjectName(QStringLiteral("deleteMemberIDRadio"));
        deleteMemberIDRadio->setGeometry(QRect(50, 60, 100, 20));
        deleteMemberButton_2 = new QPushButton(groupBox_2);
        deleteMemberButton_2->setObjectName(QStringLiteral("deleteMemberButton_2"));
        deleteMemberButton_2->setGeometry(QRect(10, 100, 101, 20));
        deleteMemberButton_2->setFont(font2);
        ModifyMemberButton = new QPushButton(groupBox_2);
        ModifyMemberButton->setObjectName(QStringLiteral("ModifyMemberButton"));
        ModifyMemberButton->setEnabled(true);
        ModifyMemberButton->setGeometry(QRect(180, 100, 121, 20));
        ModifyMemberButton->setFont(font2);
        ApplyModifyMemberButton = new QPushButton(groupBox_2);
        ApplyModifyMemberButton->setObjectName(QStringLiteral("ApplyModifyMemberButton"));
        ApplyModifyMemberButton->setEnabled(false);
        ApplyModifyMemberButton->setGeometry(QRect(180, 130, 121, 20));
        ApplyModifyMemberButton->setFont(font2);
        tabWidget->addTab(memberTab, QString());
        groupBox_2->raise();
        memberGroupBox->raise();
        itemTab = new QWidget();
        itemTab->setObjectName(QStringLiteral("itemTab"));
        itemGBox = new QGroupBox(itemTab);
        itemGBox->setObjectName(QStringLiteral("itemGBox"));
        itemGBox->setGeometry(QRect(10, 10, 331, 61));
        label = new QLabel(itemGBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 46, 13));
        label->setFont(font3);
        ItemPriceButton = new QPushButton(itemGBox);
        ItemPriceButton->setObjectName(QStringLiteral("ItemPriceButton"));
        ItemPriceButton->setGeometry(QRect(210, 30, 100, 20));
        itemNameBox = new QLineEdit(itemGBox);
        itemNameBox->setObjectName(QStringLiteral("itemNameBox"));
        itemNameBox->setGeometry(QRect(70, 30, 113, 21));
        tabWidget->addTab(itemTab, QString());
        reportTab = new QWidget();
        reportTab->setObjectName(QStringLiteral("reportTab"));
        ViewMemberPurchasesGroupBox = new QGroupBox(reportTab);
        ViewMemberPurchasesGroupBox->setObjectName(QStringLiteral("ViewMemberPurchasesGroupBox"));
        ViewMemberPurchasesGroupBox->setGeometry(QRect(10, 150, 331, 131));
        ViewMemberPurchasesGroupBox->setFont(font2);
        ViewMemberPurchaseNameBox = new QLineEdit(ViewMemberPurchasesGroupBox);
        ViewMemberPurchaseNameBox->setObjectName(QStringLiteral("ViewMemberPurchaseNameBox"));
        ViewMemberPurchaseNameBox->setGeometry(QRect(170, 30, 131, 21));
        ViewMemberPurchaseNameBox->setFont(font2);
        ViewMemberPurchaseIDBox = new QLineEdit(ViewMemberPurchasesGroupBox);
        ViewMemberPurchaseIDBox->setObjectName(QStringLiteral("ViewMemberPurchaseIDBox"));
        ViewMemberPurchaseIDBox->setGeometry(QRect(170, 60, 131, 21));
        ViewMemberPurchaseIDBox->setFont(font2);
        ViewMemberPuchasesNameRadio = new QRadioButton(ViewMemberPurchasesGroupBox);
        ViewMemberPuchasesNameRadio->setObjectName(QStringLiteral("ViewMemberPuchasesNameRadio"));
        ViewMemberPuchasesNameRadio->setGeometry(QRect(50, 30, 100, 21));
        ViewMemberPuchasesNameRadio->setFont(font2);
        ViewMemberPuchasesNameRadio->setChecked(true);
        ViewMemberPurchasesIDRadio = new QRadioButton(ViewMemberPurchasesGroupBox);
        ViewMemberPurchasesIDRadio->setObjectName(QStringLiteral("ViewMemberPurchasesIDRadio"));
        ViewMemberPurchasesIDRadio->setGeometry(QRect(50, 60, 100, 20));
        ViewMemberPurchasesIDRadio->setFont(font2);
        ViewMemberPurchaseButton = new QPushButton(ViewMemberPurchasesGroupBox);
        ViewMemberPurchaseButton->setObjectName(QStringLiteral("ViewMemberPurchaseButton"));
        ViewMemberPurchaseButton->setGeometry(QRect(100, 100, 111, 20));
        ViewMemberPurchaseButton->setFont(font2);
        displayItemBox = new QGroupBox(reportTab);
        displayItemBox->setObjectName(QStringLiteral("displayItemBox"));
        displayItemBox->setGeometry(QRect(10, 10, 331, 61));
        label_4 = new QLabel(displayItemBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 30, 60, 16));
        displayItemCombo = new QComboBox(displayItemBox);
        displayItemCombo->setObjectName(QStringLiteral("displayItemCombo"));
        displayItemCombo->setGeometry(QRect(10, 30, 104, 26));
        displayItemsButton = new QPushButton(displayItemBox);
        displayItemsButton->setObjectName(QStringLiteral("displayItemsButton"));
        displayItemsButton->setGeometry(QRect(200, 30, 121, 20));
        displayItemsButton->setFont(font2);
        groupBox = new QGroupBox(reportTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 80, 331, 61));
        DisplayExpDatesBox = new QLineEdit(groupBox);
        DisplayExpDatesBox->setObjectName(QStringLiteral("DisplayExpDatesBox"));
        DisplayExpDatesBox->setGeometry(QRect(70, 30, 113, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 30, 60, 16));
        DisplayExpDatesButton = new QPushButton(groupBox);
        DisplayExpDatesButton->setObjectName(QStringLiteral("DisplayExpDatesButton"));
        DisplayExpDatesButton->setGeometry(QRect(200, 30, 121, 20));
        groupBox_4 = new QGroupBox(reportTab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 290, 331, 101));
        groupBox_4->setFont(font2);
        viewDuesButton = new QPushButton(groupBox_4);
        viewDuesButton->setObjectName(QStringLiteral("viewDuesButton"));
        viewDuesButton->setGeometry(QRect(10, 40, 141, 20));
        viewDuesButton->setFont(font2);
        DisplayChangeTypeButton = new QPushButton(groupBox_4);
        DisplayChangeTypeButton->setObjectName(QStringLiteral("DisplayChangeTypeButton"));
        DisplayChangeTypeButton->setGeometry(QRect(170, 40, 141, 20));
        DisplayChangeTypeButton->setFont(font2);
        rebateButton = new QPushButton(groupBox_4);
        rebateButton->setObjectName(QStringLiteral("rebateButton"));
        rebateButton->setGeometry(QRect(10, 70, 141, 20));
        rebateButton->setFont(font2);
        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(170, 70, 141, 20));
        pushButton_3->setFont(font2);
        tabWidget->addTab(reportTab, QString());
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(390, 10, 91, 51));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../20070401istockpbjbeauty.jpg")));
        label_3->setScaledContents(true);
        saveAllButton = new QPushButton(centralWidget);
        saveAllButton->setObjectName(QStringLiteral("saveAllButton"));
        saveAllButton->setGeometry(QRect(830, 530, 81, 41));
        DisplayOptionsGroupBox = new QGroupBox(centralWidget);
        DisplayOptionsGroupBox->setObjectName(QStringLiteral("DisplayOptionsGroupBox"));
        DisplayOptionsGroupBox->setGeometry(QRect(20, 450, 121, 101));
        DisplayOptionsGroupBox->setFont(font2);
        displayAllRadio = new QRadioButton(DisplayOptionsGroupBox);
        displayAllRadio->setObjectName(QStringLiteral("displayAllRadio"));
        displayAllRadio->setGeometry(QRect(20, 30, 100, 20));
        displayAllRadio->setFont(font2);
        displayAllRadio->setChecked(true);
        displayBasicRadio = new QRadioButton(DisplayOptionsGroupBox);
        displayBasicRadio->setObjectName(QStringLiteral("displayBasicRadio"));
        displayBasicRadio->setGeometry(QRect(20, 50, 100, 20));
        displayBasicRadio->setFont(font2);
        displayPreferredRadio = new QRadioButton(DisplayOptionsGroupBox);
        displayPreferredRadio->setObjectName(QStringLiteral("displayPreferredRadio"));
        displayPreferredRadio->setGeometry(QRect(20, 70, 100, 20));
        displayPreferredRadio->setFont(font2);
        TableTitle = new QLabel(centralWidget);
        TableTitle->setObjectName(QStringLiteral("TableTitle"));
        TableTitle->setGeometry(QRect(380, 50, 401, 16));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TableTitle->sizePolicy().hasHeightForWidth());
        TableTitle->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamily(QStringLiteral("Shree Devanagari 714"));
        font4.setPointSize(15);
        TableTitle->setFont(font4);
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(390, 469, 211, 91));
        groupBox_3->setFont(font2);
        PreferredShoppersLabel = new QLabel(groupBox_3);
        PreferredShoppersLabel->setObjectName(QStringLiteral("PreferredShoppersLabel"));
        PreferredShoppersLabel->setGeometry(QRect(0, 30, 121, 16));
        PreferredShoppersLabel->setFont(font2);
        PreferredShoppersLabel->setLayoutDirection(Qt::RightToLeft);
        PreferredShoppersLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        BasicShoppersLabel = new QLabel(groupBox_3);
        BasicShoppersLabel->setObjectName(QStringLiteral("BasicShoppersLabel"));
        BasicShoppersLabel->setGeometry(QRect(20, 50, 101, 16));
        BasicShoppersLabel->setFont(font2);
        BasicShoppersLabel->setLayoutDirection(Qt::RightToLeft);
        BasicShoppersLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TotalRevenueLabel = new QLabel(groupBox_3);
        TotalRevenueLabel->setObjectName(QStringLiteral("TotalRevenueLabel"));
        TotalRevenueLabel->setGeometry(QRect(30, 70, 91, 16));
        TotalRevenueLabel->setFont(font2);
        TotalRevenueLabel->setLayoutDirection(Qt::LeftToRight);
        TotalRevenueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PreferredShoppersAmount = new QLabel(groupBox_3);
        PreferredShoppersAmount->setObjectName(QStringLiteral("PreferredShoppersAmount"));
        PreferredShoppersAmount->setGeometry(QRect(140, 30, 60, 16));
        PreferredShoppersAmount->setFont(font2);
        PreferredShoppersAmount->setFrameShape(QFrame::NoFrame);
        BasicShoppersAmount = new QLabel(groupBox_3);
        BasicShoppersAmount->setObjectName(QStringLiteral("BasicShoppersAmount"));
        BasicShoppersAmount->setGeometry(QRect(140, 50, 60, 16));
        BasicShoppersAmount->setFont(font2);
        TotalRevenueAmount = new QLabel(groupBox_3);
        TotalRevenueAmount->setObjectName(QStringLiteral("TotalRevenueAmount"));
        TotalRevenueAmount->setGeometry(QRect(140, 70, 60, 16));
        TotalRevenueAmount->setFont(font2);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 490, 141, 20));
        pushButton->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 22));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(AddNameBox, AddMemberNumBox);
        QWidget::setTabOrder(AddMemberNumBox, addMemberExpBox);
        QWidget::setTabOrder(addMemberExpBox, memberTypeBasicRadio);
        QWidget::setTabOrder(memberTypeBasicRadio, memberTypePreferredRadio);
        QWidget::setTabOrder(memberTypePreferredRadio, addMemberButton);
        QWidget::setTabOrder(addMemberButton, deleteMemberNameRadio);
        QWidget::setTabOrder(deleteMemberNameRadio, RemoveNameBox);
        QWidget::setTabOrder(RemoveNameBox, deleteMemberIDRadio);
        QWidget::setTabOrder(deleteMemberIDRadio, RemoveMemberNumBox);
        QWidget::setTabOrder(RemoveMemberNumBox, deleteMemberButton);
        QWidget::setTabOrder(deleteMemberButton, ItemPriceButton);
        QWidget::setTabOrder(ItemPriceButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, tableWidget);
        QWidget::setTabOrder(tableWidget, clear);
        QWidget::setTabOrder(clear, rebateButton);
        QWidget::setTabOrder(rebateButton, saveAllButton);
        QWidget::setTabOrder(saveAllButton, tabWidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(clear, SIGNAL(clicked()), MainWindow, SLOT(tableClear()));
        QObject::connect(addMemberButton, SIGNAL(clicked()), MainWindow, SLOT(addMember()));
        QObject::connect(deleteMemberButton, SIGNAL(clicked()), MainWindow, SLOT(deleteMember()));
        QObject::connect(saveAllButton, SIGNAL(clicked()), MainWindow, SLOT(saveAll()));
        QObject::connect(ItemPriceButton, SIGNAL(clicked()), MainWindow, SLOT(getItemInfo()));
        QObject::connect(deleteMemberButton_2, SIGNAL(clicked()), MainWindow, SLOT(viewMember()));
        QObject::connect(displayPreferredRadio, SIGNAL(clicked()), MainWindow, SLOT(setDisplayType()));
        QObject::connect(displayAllRadio, SIGNAL(clicked()), MainWindow, SLOT(setDisplayType()));
        QObject::connect(displayBasicRadio, SIGNAL(clicked()), MainWindow, SLOT(setDisplayType()));
        QObject::connect(ModifyMemberButton, SIGNAL(clicked()), MainWindow, SLOT(modifyMember()));
        QObject::connect(viewDuesButton, SIGNAL(clicked()), MainWindow, SLOT(displayDues()));
        QObject::connect(DisplayExpDatesButton, SIGNAL(clicked()), MainWindow, SLOT(displayExpirationDates()));
        QObject::connect(DisplayChangeTypeButton, SIGNAL(clicked()), MainWindow, SLOT(displayChangeType()));
        QObject::connect(ViewMemberPurchaseButton, SIGNAL(clicked()), MainWindow, SLOT(displayMemberPurchases()));
        QObject::connect(rebateButton, SIGNAL(clicked()), MainWindow, SLOT(displayRebates()));
        QObject::connect(displayItemsButton, SIGNAL(clicked()), MainWindow, SLOT(listItems()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(listMembers()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(displayAllItems()));
        QObject::connect(ApplyModifyMemberButton, SIGNAL(clicked()), MainWindow, SLOT(applyModification()));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Title->setText(QApplication::translate("MainWindow", "PBAndJ Wholesale xD", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("MainWindow", "Exit", 0));
#ifndef QT_NO_TOOLTIP
        clear->setToolTip(QApplication::translate("MainWindow", "Clear the table", 0));
#endif // QT_NO_TOOLTIP
        clear->setText(QApplication::translate("MainWindow", "Clear Table", 0));
        label_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        memberGroupBox->setToolTip(QApplication::translate("MainWindow", "Add a member", 0));
#endif // QT_NO_TOOLTIP
        memberGroupBox->setTitle(QApplication::translate("MainWindow", "Add Member", 0));
#ifndef QT_NO_TOOLTIP
        addMemberButton->setToolTip(QApplication::translate("MainWindow", "Add this member to the list", 0));
#endif // QT_NO_TOOLTIP
        addMemberButton->setText(QApplication::translate("MainWindow", "Add Member", 0));
        AddNamelabel->setText(QApplication::translate("MainWindow", "Name:", 0));
        AddMemberNum->setText(QApplication::translate("MainWindow", "Membership Number:", 0));
        Namelabel_3->setText(QApplication::translate("MainWindow", "Membership Type:", 0));
        Namelabel_4->setText(QApplication::translate("MainWindow", "Membership Expiration Date:", 0));
        memberTypeBasicRadio->setText(QApplication::translate("MainWindow", "Basic", 0));
        memberTypePreferredRadio->setText(QApplication::translate("MainWindow", "Preferred", 0));
        AddNameBox->setPlaceholderText(QApplication::translate("MainWindow", "First Last", 0));
        AddMemberNumBox->setPlaceholderText(QApplication::translate("MainWindow", "#####", 0));
        addMemberExpBox->setPlaceholderText(QApplication::translate("MainWindow", "mm/dd/yyyy", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "View/Modify/Delete", 0));
#ifndef QT_NO_TOOLTIP
        deleteMemberButton->setToolTip(QApplication::translate("MainWindow", "Delete the member from the list", 0));
#endif // QT_NO_TOOLTIP
        deleteMemberButton->setText(QApplication::translate("MainWindow", "Delete Member", 0));
        RemoveNameBox->setPlaceholderText(QApplication::translate("MainWindow", "First Last", 0));
        RemoveMemberNumBox->setPlaceholderText(QApplication::translate("MainWindow", "#####", 0));
        deleteMemberNameRadio->setText(QApplication::translate("MainWindow", "Name:", 0));
        deleteMemberIDRadio->setText(QApplication::translate("MainWindow", "Member ID:", 0));
#ifndef QT_NO_TOOLTIP
        deleteMemberButton_2->setToolTip(QApplication::translate("MainWindow", "See the members information", 0));
#endif // QT_NO_TOOLTIP
        deleteMemberButton_2->setText(QApplication::translate("MainWindow", "View Info", 0));
#ifndef QT_NO_TOOLTIP
        ModifyMemberButton->setToolTip(QApplication::translate("MainWindow", "Modify the members information", 0));
#endif // QT_NO_TOOLTIP
        ModifyMemberButton->setText(QApplication::translate("MainWindow", "Modify", 0));
#ifndef QT_NO_TOOLTIP
        ApplyModifyMemberButton->setToolTip(QApplication::translate("MainWindow", "Modify the members information", 0));
#endif // QT_NO_TOOLTIP
        ApplyModifyMemberButton->setText(QApplication::translate("MainWindow", "Apply Modification", 0));
        tabWidget->setTabText(tabWidget->indexOf(memberTab), QApplication::translate("MainWindow", "Members", 0));
#ifndef QT_NO_TOOLTIP
        itemGBox->setToolTip(QApplication::translate("MainWindow", "View an item's info", 0));
#endif // QT_NO_TOOLTIP
        itemGBox->setTitle(QApplication::translate("MainWindow", "Item Information", 0));
        label->setText(QApplication::translate("MainWindow", "Name:", 0));
        ItemPriceButton->setText(QApplication::translate("MainWindow", "Get Info", 0));
        tabWidget->setTabText(tabWidget->indexOf(itemTab), QApplication::translate("MainWindow", "Items", 0));
#ifndef QT_NO_TOOLTIP
        ViewMemberPurchasesGroupBox->setToolTip(QApplication::translate("MainWindow", "View all the purchases of this member", 0));
#endif // QT_NO_TOOLTIP
        ViewMemberPurchasesGroupBox->setTitle(QApplication::translate("MainWindow", "Find Member's Purchases", 0));
        ViewMemberPurchaseNameBox->setPlaceholderText(QApplication::translate("MainWindow", "First Last", 0));
        ViewMemberPurchaseIDBox->setPlaceholderText(QApplication::translate("MainWindow", "#####", 0));
        ViewMemberPuchasesNameRadio->setText(QApplication::translate("MainWindow", "Name:", 0));
        ViewMemberPurchasesIDRadio->setText(QApplication::translate("MainWindow", "Member ID:", 0));
#ifndef QT_NO_TOOLTIP
        ViewMemberPurchaseButton->setToolTip(QApplication::translate("MainWindow", "View all the purchases of this member", 0));
#endif // QT_NO_TOOLTIP
        ViewMemberPurchaseButton->setText(QApplication::translate("MainWindow", "View Purchases", 0));
#ifndef QT_NO_TOOLTIP
        displayItemBox->setToolTip(QApplication::translate("MainWindow", "View the sales report for a specified day", 0));
#endif // QT_NO_TOOLTIP
        displayItemBox->setTitle(QApplication::translate("MainWindow", "Display Sales Report", 0));
        label_4->setText(QString());
        displayItemsButton->setText(QApplication::translate("MainWindow", "Show Reports", 0));
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("MainWindow", "Display whose membership expires in this month", 0));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "Check Expiration Dates", 0));
        DisplayExpDatesBox->setPlaceholderText(QApplication::translate("MainWindow", "mm", 0));
        label_5->setText(QApplication::translate("MainWindow", "Month:", 0));
        DisplayExpDatesButton->setText(QApplication::translate("MainWindow", "Expiration Dates", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Member Info Reports", 0));
#ifndef QT_NO_TOOLTIP
        viewDuesButton->setToolTip(QApplication::translate("MainWindow", "Display amounts due for memberships", 0));
#endif // QT_NO_TOOLTIP
        viewDuesButton->setText(QApplication::translate("MainWindow", "Amounts Due", 0));
#ifndef QT_NO_TOOLTIP
        DisplayChangeTypeButton->setToolTip(QApplication::translate("MainWindow", "Display members who should change membership type", 0));
#endif // QT_NO_TOOLTIP
        DisplayChangeTypeButton->setText(QApplication::translate("MainWindow", "Change Membership", 0));
#ifndef QT_NO_TOOLTIP
        rebateButton->setToolTip(QApplication::translate("MainWindow", "Display rebate amounts for preferred members", 0));
#endif // QT_NO_TOOLTIP
        rebateButton->setText(QApplication::translate("MainWindow", "Rebates", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("MainWindow", "Display info for all items", 0));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QApplication::translate("MainWindow", "Total Item Sales", 0));
        tabWidget->setTabText(tabWidget->indexOf(reportTab), QApplication::translate("MainWindow", "Reports", 0));
        label_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        saveAllButton->setToolTip(QApplication::translate("MainWindow", "Save all changes", 0));
#endif // QT_NO_TOOLTIP
        saveAllButton->setText(QApplication::translate("MainWindow", "Save", 0));
#ifndef QT_NO_TOOLTIP
        DisplayOptionsGroupBox->setToolTip(QApplication::translate("MainWindow", "Select which member type you would like to view in reports", 0));
#endif // QT_NO_TOOLTIP
        DisplayOptionsGroupBox->setTitle(QApplication::translate("MainWindow", "Display Options", 0));
        displayAllRadio->setText(QApplication::translate("MainWindow", "All", 0));
        displayBasicRadio->setText(QApplication::translate("MainWindow", "Basic", 0));
        displayPreferredRadio->setText(QApplication::translate("MainWindow", "Preferred", 0));
        TableTitle->setText(QApplication::translate("MainWindow", "Table Title", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_3->setToolTip(QApplication::translate("MainWindow", "Report Information", 0));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Information", 0));
        PreferredShoppersLabel->setText(QApplication::translate("MainWindow", "Preferred Shoppers", 0));
        BasicShoppersLabel->setText(QApplication::translate("MainWindow", "Basic Shoppers", 0));
        TotalRevenueLabel->setText(QApplication::translate("MainWindow", "Total Revenue", 0));
        PreferredShoppersAmount->setText(QString());
        BasicShoppersAmount->setText(QString());
        TotalRevenueAmount->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "Display members", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("MainWindow", "Display Members", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
