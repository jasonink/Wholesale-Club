/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QPlainTextEdit>
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
    QPushButton *UpdateButton;
    QWidget *itemTab;
    QGroupBox *itemGBox;
    QLabel *label;
    QPushButton *ItemPriceButton;
    QLineEdit *itemNameBox;
    QGroupBox *displayItemBox;
    QPushButton *displayItemsButton;
    QLabel *label_4;
    QComboBox *displayItemCombo;
    QWidget *reportTab;
    QGroupBox *groupBox;
    QPushButton *rebateButton;
    QPushButton *totalPurchasesButton;
    QPushButton *viewReportButton;
    QPlainTextEdit *plainTextEdit;
    QLabel *dateLabel;
    QPushButton *viewDuesButton;
    QPushButton *DisplayExpDatesButton;
    QLineEdit *DisplayExpDatesBox;
    QLabel *label_5;
    QPushButton *DisplayChangeTypeButton;
    QGroupBox *ViewMemberPurchasesGroupBox;
    QLineEdit *ViewMemberPurchaseNameBox;
    QLineEdit *ViewMemberPurchaseIDBox;
    QRadioButton *ViewMemberPuchasesNameRadio;
    QRadioButton *ViewMemberPurchasesIDRadio;
    QPushButton *ViewMemberPurchaseButton;
    QLabel *label_3;
    QPushButton *saveAllButton;
    QGroupBox *DisplayOptionsGroupBox;
    QRadioButton *displayAllRadio;
    QRadioButton *displayBasicRadio;
    QRadioButton *displayPreferredRadio;
    QPushButton *pushButton;
    QLabel *TableTitle;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1024, 643);
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
        pushButton_2->setGeometry(QRect(950, 530, 61, 21));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(380, 70, 631, 461));
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(780, 530, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(880, 10, 91, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../20070401istockpbjbeauty.jpg")));
        label_2->setScaledContents(true);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 361, 451));
        memberTab = new QWidget();
        memberTab->setObjectName(QStringLiteral("memberTab"));
        memberGroupBox = new QGroupBox(memberTab);
        memberGroupBox->setObjectName(QStringLiteral("memberGroupBox"));
        memberGroupBox->setGeometry(QRect(10, 10, 341, 231));
        addMemberButton = new QPushButton(memberGroupBox);
        addMemberButton->setObjectName(QStringLiteral("addMemberButton"));
        addMemberButton->setGeometry(QRect(120, 200, 100, 20));
        AddNamelabel = new QLabel(memberGroupBox);
        AddNamelabel->setObjectName(QStringLiteral("AddNamelabel"));
        AddNamelabel->setGeometry(QRect(20, 30, 41, 21));
        QFont font2;
        font2.setPointSize(13);
        AddNamelabel->setFont(font2);
        AddMemberNum = new QLabel(memberGroupBox);
        AddMemberNum->setObjectName(QStringLiteral("AddMemberNum"));
        AddMemberNum->setGeometry(QRect(20, 68, 131, 21));
        AddMemberNum->setFont(font2);
        Namelabel_3 = new QLabel(memberGroupBox);
        Namelabel_3->setObjectName(QStringLiteral("Namelabel_3"));
        Namelabel_3->setGeometry(QRect(20, 160, 111, 21));
        Namelabel_3->setFont(font2);
        Namelabel_4 = new QLabel(memberGroupBox);
        Namelabel_4->setObjectName(QStringLiteral("Namelabel_4"));
        Namelabel_4->setGeometry(QRect(20, 108, 171, 21));
        Namelabel_4->setFont(font2);
        memberTypeBasicRadio = new QRadioButton(memberGroupBox);
        memberTypeBasicRadio->setObjectName(QStringLiteral("memberTypeBasicRadio"));
        memberTypeBasicRadio->setGeometry(QRect(220, 150, 82, 17));
        memberTypeBasicRadio->setChecked(true);
        memberTypePreferredRadio = new QRadioButton(memberGroupBox);
        memberTypePreferredRadio->setObjectName(QStringLiteral("memberTypePreferredRadio"));
        memberTypePreferredRadio->setGeometry(QRect(220, 170, 82, 17));
        AddNameBox = new QLineEdit(memberGroupBox);
        AddNameBox->setObjectName(QStringLiteral("AddNameBox"));
        AddNameBox->setGeometry(QRect(220, 30, 113, 21));
        AddMemberNumBox = new QLineEdit(memberGroupBox);
        AddMemberNumBox->setObjectName(QStringLiteral("AddMemberNumBox"));
        AddMemberNumBox->setGeometry(QRect(220, 70, 113, 21));
        addMemberExpBox = new QLineEdit(memberGroupBox);
        addMemberExpBox->setObjectName(QStringLiteral("addMemberExpBox"));
        addMemberExpBox->setGeometry(QRect(220, 110, 113, 21));
        groupBox_2 = new QGroupBox(memberTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 250, 341, 161));
        deleteMemberButton = new QPushButton(groupBox_2);
        deleteMemberButton->setObjectName(QStringLiteral("deleteMemberButton"));
        deleteMemberButton->setGeometry(QRect(230, 100, 100, 20));
        QFont font3;
        font3.setFamily(QStringLiteral("Shree Devanagari 714"));
        deleteMemberButton->setFont(font3);
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
        deleteMemberButton_2->setGeometry(QRect(10, 100, 100, 20));
        deleteMemberButton_2->setFont(font3);
        ModifyMemberButton = new QPushButton(groupBox_2);
        ModifyMemberButton->setObjectName(QStringLiteral("ModifyMemberButton"));
        ModifyMemberButton->setGeometry(QRect(120, 100, 100, 20));
        ModifyMemberButton->setFont(font3);
        UpdateButton = new QPushButton(groupBox_2);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));
        UpdateButton->setGeometry(QRect(130, 129, 80, 25));
        tabWidget->addTab(memberTab, QString());
        groupBox_2->raise();
        memberGroupBox->raise();
        itemTab = new QWidget();
        itemTab->setObjectName(QStringLiteral("itemTab"));
        itemGBox = new QGroupBox(itemTab);
        itemGBox->setObjectName(QStringLiteral("itemGBox"));
        itemGBox->setGeometry(QRect(10, 80, 341, 71));
        label = new QLabel(itemGBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 46, 13));
        label->setFont(font2);
        ItemPriceButton = new QPushButton(itemGBox);
        ItemPriceButton->setObjectName(QStringLiteral("ItemPriceButton"));
        ItemPriceButton->setGeometry(QRect(220, 30, 100, 20));
        itemNameBox = new QLineEdit(itemGBox);
        itemNameBox->setObjectName(QStringLiteral("itemNameBox"));
        itemNameBox->setGeometry(QRect(70, 30, 113, 21));
        displayItemBox = new QGroupBox(itemTab);
        displayItemBox->setObjectName(QStringLiteral("displayItemBox"));
        displayItemBox->setGeometry(QRect(10, 10, 331, 61));
        displayItemsButton = new QPushButton(displayItemBox);
        displayItemsButton->setObjectName(QStringLiteral("displayItemsButton"));
        displayItemsButton->setGeometry(QRect(190, 30, 141, 32));
        label_4 = new QLabel(displayItemBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 30, 60, 16));
        displayItemCombo = new QComboBox(displayItemBox);
        displayItemCombo->setObjectName(QStringLiteral("displayItemCombo"));
        displayItemCombo->setGeometry(QRect(10, 30, 104, 26));
        tabWidget->addTab(itemTab, QString());
        reportTab = new QWidget();
        reportTab->setObjectName(QStringLiteral("reportTab"));
        groupBox = new QGroupBox(reportTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 341, 151));
        rebateButton = new QPushButton(groupBox);
        rebateButton->setObjectName(QStringLiteral("rebateButton"));
        rebateButton->setGeometry(QRect(211, 30, 121, 20));
        totalPurchasesButton = new QPushButton(groupBox);
        totalPurchasesButton->setObjectName(QStringLiteral("totalPurchasesButton"));
        totalPurchasesButton->setGeometry(QRect(210, 58, 121, 20));
        viewReportButton = new QPushButton(groupBox);
        viewReportButton->setObjectName(QStringLiteral("viewReportButton"));
        viewReportButton->setGeometry(QRect(210, 83, 121, 20));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(70, 30, 101, 21));
        plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        dateLabel = new QLabel(groupBox);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        dateLabel->setGeometry(QRect(10, 30, 46, 15));
        dateLabel->setFont(font2);
        viewDuesButton = new QPushButton(groupBox);
        viewDuesButton->setObjectName(QStringLiteral("viewDuesButton"));
        viewDuesButton->setGeometry(QRect(210, 110, 121, 20));
        DisplayExpDatesButton = new QPushButton(reportTab);
        DisplayExpDatesButton->setObjectName(QStringLiteral("DisplayExpDatesButton"));
        DisplayExpDatesButton->setGeometry(QRect(220, 180, 121, 20));
        DisplayExpDatesBox = new QLineEdit(reportTab);
        DisplayExpDatesBox->setObjectName(QStringLiteral("DisplayExpDatesBox"));
        DisplayExpDatesBox->setGeometry(QRect(70, 180, 113, 21));
        label_5 = new QLabel(reportTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 180, 60, 16));
        DisplayChangeTypeButton = new QPushButton(reportTab);
        DisplayChangeTypeButton->setObjectName(QStringLiteral("DisplayChangeTypeButton"));
        DisplayChangeTypeButton->setGeometry(QRect(200, 220, 141, 20));
        ViewMemberPurchasesGroupBox = new QGroupBox(reportTab);
        ViewMemberPurchasesGroupBox->setObjectName(QStringLiteral("ViewMemberPurchasesGroupBox"));
        ViewMemberPurchasesGroupBox->setGeometry(QRect(10, 260, 341, 131));
        ViewMemberPurchaseNameBox = new QLineEdit(ViewMemberPurchasesGroupBox);
        ViewMemberPurchaseNameBox->setObjectName(QStringLiteral("ViewMemberPurchaseNameBox"));
        ViewMemberPurchaseNameBox->setGeometry(QRect(170, 30, 131, 21));
        ViewMemberPurchaseIDBox = new QLineEdit(ViewMemberPurchasesGroupBox);
        ViewMemberPurchaseIDBox->setObjectName(QStringLiteral("ViewMemberPurchaseIDBox"));
        ViewMemberPurchaseIDBox->setGeometry(QRect(170, 60, 131, 21));
        ViewMemberPuchasesNameRadio = new QRadioButton(ViewMemberPurchasesGroupBox);
        ViewMemberPuchasesNameRadio->setObjectName(QStringLiteral("ViewMemberPuchasesNameRadio"));
        ViewMemberPuchasesNameRadio->setGeometry(QRect(50, 30, 100, 21));
        ViewMemberPuchasesNameRadio->setChecked(true);
        ViewMemberPurchasesIDRadio = new QRadioButton(ViewMemberPurchasesGroupBox);
        ViewMemberPurchasesIDRadio->setObjectName(QStringLiteral("ViewMemberPurchasesIDRadio"));
        ViewMemberPurchasesIDRadio->setGeometry(QRect(50, 60, 100, 20));
        ViewMemberPurchaseButton = new QPushButton(ViewMemberPurchasesGroupBox);
        ViewMemberPurchaseButton->setObjectName(QStringLiteral("ViewMemberPurchaseButton"));
        ViewMemberPurchaseButton->setGeometry(QRect(100, 100, 111, 20));
        ViewMemberPurchaseButton->setFont(font3);
        tabWidget->addTab(reportTab, QString());
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(390, 10, 91, 51));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../20070401istockpbjbeauty.jpg")));
        label_3->setScaledContents(true);
        saveAllButton = new QPushButton(centralWidget);
        saveAllButton->setObjectName(QStringLiteral("saveAllButton"));
        saveAllButton->setGeometry(QRect(860, 530, 81, 31));
        DisplayOptionsGroupBox = new QGroupBox(centralWidget);
        DisplayOptionsGroupBox->setObjectName(QStringLiteral("DisplayOptionsGroupBox"));
        DisplayOptionsGroupBox->setGeometry(QRect(20, 460, 121, 101));
        displayAllRadio = new QRadioButton(DisplayOptionsGroupBox);
        displayAllRadio->setObjectName(QStringLiteral("displayAllRadio"));
        displayAllRadio->setGeometry(QRect(20, 30, 100, 20));
        displayAllRadio->setChecked(true);
        displayBasicRadio = new QRadioButton(DisplayOptionsGroupBox);
        displayBasicRadio->setObjectName(QStringLiteral("displayBasicRadio"));
        displayBasicRadio->setGeometry(QRect(20, 50, 100, 20));
        displayPreferredRadio = new QRadioButton(DisplayOptionsGroupBox);
        displayPreferredRadio->setObjectName(QStringLiteral("displayPreferredRadio"));
        displayPreferredRadio->setGeometry(QRect(20, 70, 100, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 480, 181, 91));
        QFont font4;
        font4.setFamily(QStringLiteral("Shree Devanagari 714"));
        font4.setPointSize(17);
        pushButton->setFont(font4);
        TableTitle = new QLabel(centralWidget);
        TableTitle->setObjectName(QStringLiteral("TableTitle"));
        TableTitle->setGeometry(QRect(380, 50, 401, 16));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TableTitle->sizePolicy().hasHeightForWidth());
        TableTitle->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamily(QStringLiteral("Shree Devanagari 714"));
        font5.setPointSize(15);
        TableTitle->setFont(font5);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 25));
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
        QWidget::setTabOrder(deleteMemberButton, pushButton);
        QWidget::setTabOrder(pushButton, displayItemCombo);
        QWidget::setTabOrder(displayItemCombo, displayItemsButton);
        QWidget::setTabOrder(displayItemsButton, ItemPriceButton);
        QWidget::setTabOrder(ItemPriceButton, viewReportButton);
        QWidget::setTabOrder(viewReportButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, tableWidget);
        QWidget::setTabOrder(tableWidget, clear);
        QWidget::setTabOrder(clear, totalPurchasesButton);
        QWidget::setTabOrder(totalPurchasesButton, rebateButton);
        QWidget::setTabOrder(rebateButton, saveAllButton);
        QWidget::setTabOrder(saveAllButton, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, tabWidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(clear, SIGNAL(clicked()), MainWindow, SLOT(tableClear()));
        QObject::connect(addMemberButton, SIGNAL(clicked()), MainWindow, SLOT(addMember()));
        QObject::connect(deleteMemberButton, SIGNAL(clicked()), MainWindow, SLOT(deleteMember()));
        QObject::connect(displayItemsButton, SIGNAL(clicked()), MainWindow, SLOT(listItems()));
        QObject::connect(saveAllButton, SIGNAL(clicked()), MainWindow, SLOT(saveAll()));
        QObject::connect(ItemPriceButton, SIGNAL(clicked()), MainWindow, SLOT(getItemInfo()));
        QObject::connect(deleteMemberButton_2, SIGNAL(clicked()), MainWindow, SLOT(viewMember()));
        QObject::connect(displayPreferredRadio, SIGNAL(clicked()), MainWindow, SLOT(setDisplayType()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(listMembers()));
        QObject::connect(displayAllRadio, SIGNAL(clicked()), MainWindow, SLOT(setDisplayType()));
        QObject::connect(displayBasicRadio, SIGNAL(clicked()), MainWindow, SLOT(setDisplayType()));
        QObject::connect(ModifyMemberButton, SIGNAL(clicked()), MainWindow, SLOT(modifyMember()));
        QObject::connect(viewDuesButton, SIGNAL(clicked()), MainWindow, SLOT(displayDues()));
        QObject::connect(DisplayExpDatesButton, SIGNAL(clicked()), MainWindow, SLOT(displayExpirationDates()));
        QObject::connect(DisplayChangeTypeButton, SIGNAL(clicked()), MainWindow, SLOT(displayChangeType()));
        QObject::connect(ViewMemberPurchaseButton, SIGNAL(clicked()), MainWindow, SLOT(displayMemberPurchases()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Title->setText(QApplication::translate("MainWindow", "PBAndJ Wholesale xD", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Exit", 0));
#ifndef QT_NO_TOOLTIP
        clear->setToolTip(QApplication::translate("MainWindow", "Clear the table", 0));
#endif // QT_NO_TOOLTIP
        clear->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_2->setText(QString());
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
        deleteMemberButton->setText(QApplication::translate("MainWindow", "Delete Member", 0));
        RemoveNameBox->setPlaceholderText(QApplication::translate("MainWindow", "First Last", 0));
        RemoveMemberNumBox->setPlaceholderText(QApplication::translate("MainWindow", "#####", 0));
        deleteMemberNameRadio->setText(QApplication::translate("MainWindow", "Name:", 0));
        deleteMemberIDRadio->setText(QApplication::translate("MainWindow", "Member ID:", 0));
        deleteMemberButton_2->setText(QApplication::translate("MainWindow", "View Info", 0));
        ModifyMemberButton->setText(QApplication::translate("MainWindow", "Modify", 0));
        UpdateButton->setText(QApplication::translate("MainWindow", "Update", 0));
        tabWidget->setTabText(tabWidget->indexOf(memberTab), QApplication::translate("MainWindow", "Members", 0));
#ifndef QT_NO_TOOLTIP
        itemGBox->setToolTip(QApplication::translate("MainWindow", "View an item's info", 0));
#endif // QT_NO_TOOLTIP
        itemGBox->setTitle(QApplication::translate("MainWindow", "Item Information", 0));
        label->setText(QApplication::translate("MainWindow", "Name:", 0));
        ItemPriceButton->setText(QApplication::translate("MainWindow", "Get Info", 0));
#ifndef QT_NO_TOOLTIP
        displayItemBox->setToolTip(QApplication::translate("MainWindow", "View the items for a specified day", 0));
#endif // QT_NO_TOOLTIP
        displayItemBox->setTitle(QApplication::translate("MainWindow", "Display Sales by Day", 0));
        displayItemsButton->setText(QApplication::translate("MainWindow", "Display Items", 0));
        label_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(itemTab), QApplication::translate("MainWindow", "Items", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Print", 0));
        rebateButton->setText(QApplication::translate("MainWindow", "Print Rebate", 0));
        totalPurchasesButton->setText(QApplication::translate("MainWindow", "Total Purchases", 0));
        viewReportButton->setText(QApplication::translate("MainWindow", "View Sales Report", 0));
        plainTextEdit->setPlaceholderText(QApplication::translate("MainWindow", "MM/DD/YYYY", 0));
        dateLabel->setText(QApplication::translate("MainWindow", "Date:", 0));
        viewDuesButton->setText(QApplication::translate("MainWindow", "Dues Paid", 0));
        DisplayExpDatesButton->setText(QApplication::translate("MainWindow", "Expiration Dates", 0));
        DisplayExpDatesBox->setPlaceholderText(QApplication::translate("MainWindow", "mm", 0));
        label_5->setText(QApplication::translate("MainWindow", "Month:", 0));
        DisplayChangeTypeButton->setText(QApplication::translate("MainWindow", "Change Membership", 0));
        ViewMemberPurchasesGroupBox->setTitle(QApplication::translate("MainWindow", "Find Member's Purchases", 0));
        ViewMemberPurchaseNameBox->setPlaceholderText(QApplication::translate("MainWindow", "First Last", 0));
        ViewMemberPurchaseIDBox->setPlaceholderText(QApplication::translate("MainWindow", "#####", 0));
        ViewMemberPuchasesNameRadio->setText(QApplication::translate("MainWindow", "Name:", 0));
        ViewMemberPurchasesIDRadio->setText(QApplication::translate("MainWindow", "Member ID:", 0));
        ViewMemberPurchaseButton->setText(QApplication::translate("MainWindow", "View Purchases", 0));
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
        pushButton->setText(QApplication::translate("MainWindow", "Display Members", 0));
        TableTitle->setText(QApplication::translate("MainWindow", "Table Title", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
