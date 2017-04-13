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
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_3;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QPushButton *pushButton;
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
    QLabel *label_3;
    QPushButton *saveAllButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1227, 677);
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
        Title->setGeometry(QRect(400, 10, 511, 51));
        QFont font1;
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
        tableWidget->setGeometry(QRect(380, 70, 601, 461));
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(660, 540, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(880, 10, 91, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../20070401istockpbjbeauty.jpg")));
        label_2->setScaledContents(true);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 361, 521));
        memberTab = new QWidget();
        memberTab->setObjectName(QStringLiteral("memberTab"));
        memberGroupBox = new QGroupBox(memberTab);
        memberGroupBox->setObjectName(QStringLiteral("memberGroupBox"));
        memberGroupBox->setGeometry(QRect(10, 10, 341, 221));
        addMemberButton = new QPushButton(memberGroupBox);
        addMemberButton->setObjectName(QStringLiteral("addMemberButton"));
        addMemberButton->setGeometry(QRect(120, 190, 100, 20));
        AddNamelabel = new QLabel(memberGroupBox);
        AddNamelabel->setObjectName(QStringLiteral("AddNamelabel"));
        AddNamelabel->setGeometry(QRect(20, 20, 41, 21));
        QFont font2;
        font2.setPointSize(13);
        AddNamelabel->setFont(font2);
        AddMemberNum = new QLabel(memberGroupBox);
        AddMemberNum->setObjectName(QStringLiteral("AddMemberNum"));
        AddMemberNum->setGeometry(QRect(20, 58, 131, 21));
        AddMemberNum->setFont(font2);
        Namelabel_3 = new QLabel(memberGroupBox);
        Namelabel_3->setObjectName(QStringLiteral("Namelabel_3"));
        Namelabel_3->setGeometry(QRect(20, 150, 111, 21));
        Namelabel_3->setFont(font2);
        Namelabel_4 = new QLabel(memberGroupBox);
        Namelabel_4->setObjectName(QStringLiteral("Namelabel_4"));
        Namelabel_4->setGeometry(QRect(20, 98, 171, 21));
        Namelabel_4->setFont(font2);
        memberTypeBasicRadio = new QRadioButton(memberGroupBox);
        memberTypeBasicRadio->setObjectName(QStringLiteral("memberTypeBasicRadio"));
        memberTypeBasicRadio->setGeometry(QRect(220, 140, 82, 17));
        memberTypePreferredRadio = new QRadioButton(memberGroupBox);
        memberTypePreferredRadio->setObjectName(QStringLiteral("memberTypePreferredRadio"));
        memberTypePreferredRadio->setGeometry(QRect(220, 160, 82, 17));
        AddNameBox = new QLineEdit(memberGroupBox);
        AddNameBox->setObjectName(QStringLiteral("AddNameBox"));
        AddNameBox->setGeometry(QRect(220, 20, 113, 21));
        AddMemberNumBox = new QLineEdit(memberGroupBox);
        AddMemberNumBox->setObjectName(QStringLiteral("AddMemberNumBox"));
        AddMemberNumBox->setGeometry(QRect(220, 60, 113, 21));
        addMemberExpBox = new QLineEdit(memberGroupBox);
        addMemberExpBox->setObjectName(QStringLiteral("addMemberExpBox"));
        addMemberExpBox->setGeometry(QRect(220, 100, 113, 21));
        groupBox_2 = new QGroupBox(memberTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 240, 341, 131));
        deleteMemberButton = new QPushButton(groupBox_2);
        deleteMemberButton->setObjectName(QStringLiteral("deleteMemberButton"));
        deleteMemberButton->setGeometry(QRect(120, 100, 100, 20));
        RemoveNameBox = new QLineEdit(groupBox_2);
        RemoveNameBox->setObjectName(QStringLiteral("RemoveNameBox"));
        RemoveNameBox->setGeometry(QRect(170, 30, 131, 21));
        RemoveMemberNumBox = new QLineEdit(groupBox_2);
        RemoveMemberNumBox->setObjectName(QStringLiteral("RemoveMemberNumBox"));
        RemoveMemberNumBox->setGeometry(QRect(170, 60, 131, 21));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(50, 30, 100, 21));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(50, 60, 100, 20));
        groupBox_3 = new QGroupBox(memberTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(9, 379, 341, 111));
        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 30, 100, 20));
        radioButton_4 = new QRadioButton(groupBox_3);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(20, 50, 100, 20));
        radioButton_5 = new QRadioButton(groupBox_3);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(20, 70, 100, 20));
        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 30, 181, 71));
        QFont font3;
        font3.setFamily(QStringLiteral("Shree Devanagari 714"));
        font3.setPointSize(17);
        pushButton->setFont(font3);
        tabWidget->addTab(memberTab, QString());
        groupBox_2->raise();
        memberGroupBox->raise();
        groupBox_3->raise();
        itemTab = new QWidget();
        itemTab->setObjectName(QStringLiteral("itemTab"));
        itemGBox = new QGroupBox(itemTab);
        itemGBox->setObjectName(QStringLiteral("itemGBox"));
        itemGBox->setGeometry(QRect(10, 80, 341, 91));
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
        groupBox->setGeometry(QRect(10, 10, 341, 91));
        rebateButton = new QPushButton(groupBox);
        rebateButton->setObjectName(QStringLiteral("rebateButton"));
        rebateButton->setGeometry(QRect(211, 10, 121, 20));
        totalPurchasesButton = new QPushButton(groupBox);
        totalPurchasesButton->setObjectName(QStringLiteral("totalPurchasesButton"));
        totalPurchasesButton->setGeometry(QRect(210, 38, 121, 20));
        viewReportButton = new QPushButton(groupBox);
        viewReportButton->setObjectName(QStringLiteral("viewReportButton"));
        viewReportButton->setGeometry(QRect(210, 63, 121, 20));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(70, 20, 101, 21));
        plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        dateLabel = new QLabel(groupBox);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        dateLabel->setGeometry(QRect(20, 21, 46, 15));
        QFont font4;
        font4.setPointSize(10);
        dateLabel->setFont(font4);
        tabWidget->addTab(reportTab, QString());
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(390, 10, 91, 51));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../20070401istockpbjbeauty.jpg")));
        label_3->setScaledContents(true);
        saveAllButton = new QPushButton(centralWidget);
        saveAllButton->setObjectName(QStringLiteral("saveAllButton"));
        saveAllButton->setGeometry(QRect(830, 540, 81, 31));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1227, 25));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(AddNameBox, AddMemberNumBox);
        QWidget::setTabOrder(AddMemberNumBox, addMemberExpBox);
        QWidget::setTabOrder(addMemberExpBox, memberTypeBasicRadio);
        QWidget::setTabOrder(memberTypeBasicRadio, memberTypePreferredRadio);
        QWidget::setTabOrder(memberTypePreferredRadio, addMemberButton);
        QWidget::setTabOrder(addMemberButton, radioButton);
        QWidget::setTabOrder(radioButton, RemoveNameBox);
        QWidget::setTabOrder(RemoveNameBox, radioButton_2);
        QWidget::setTabOrder(radioButton_2, RemoveMemberNumBox);
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
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(listMembers()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(clear, SIGNAL(clicked()), MainWindow, SLOT(tableClear()));
        QObject::connect(addMemberButton, SIGNAL(clicked()), MainWindow, SLOT(addMember()));
        QObject::connect(deleteMemberButton, SIGNAL(clicked()), MainWindow, SLOT(deleteMember()));
        QObject::connect(displayItemsButton, SIGNAL(clicked()), MainWindow, SLOT(listItems()));
        QObject::connect(saveAllButton, SIGNAL(clicked()), MainWindow, SLOT(saveAll()));
        QObject::connect(ItemPriceButton, SIGNAL(clicked()), MainWindow, SLOT(getItemInfo()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Title->setText(QApplication::translate("MainWindow", "PBAndJ Wholesale xD", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Exit", 0));
        clear->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_2->setText(QString());
        memberGroupBox->setTitle(QApplication::translate("MainWindow", "Add Member", 0));
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
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Delete Member", 0));
        deleteMemberButton->setText(QApplication::translate("MainWindow", "Delete Member", 0));
        RemoveNameBox->setPlaceholderText(QApplication::translate("MainWindow", "First Last", 0));
        RemoveMemberNumBox->setPlaceholderText(QApplication::translate("MainWindow", "#####", 0));
        radioButton->setText(QApplication::translate("MainWindow", "Name:", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "Member ID:", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Display Members", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "All", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "Basic", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "Preferred", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Display Members", 0));
        tabWidget->setTabText(tabWidget->indexOf(memberTab), QApplication::translate("MainWindow", "Members", 0));
        itemGBox->setTitle(QApplication::translate("MainWindow", "Item Information", 0));
        label->setText(QApplication::translate("MainWindow", "Name:", 0));
        ItemPriceButton->setText(QApplication::translate("MainWindow", "Get Price and Quantity Sold", 0));
        displayItemBox->setTitle(QApplication::translate("MainWindow", "Display Items", 0));
        displayItemsButton->setText(QApplication::translate("MainWindow", "Display Items", 0));
        label_4->setText(QString());
        displayItemCombo->clear();
        displayItemCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Day 1", 0)
         << QApplication::translate("MainWindow", "Day 2", 0)
         << QApplication::translate("MainWindow", "Day 3", 0)
         << QApplication::translate("MainWindow", "Day 4", 0)
         << QApplication::translate("MainWindow", "Day 5", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(itemTab), QApplication::translate("MainWindow", "Items", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Print", 0));
        rebateButton->setText(QApplication::translate("MainWindow", "Print Rebate", 0));
        totalPurchasesButton->setText(QApplication::translate("MainWindow", "Total Purchases", 0));
        viewReportButton->setText(QApplication::translate("MainWindow", "View Sales Report", 0));
        plainTextEdit->setPlaceholderText(QApplication::translate("MainWindow", "MM/DD/YYYY", 0));
        dateLabel->setText(QApplication::translate("MainWindow", "Date:", 0));
        tabWidget->setTabText(tabWidget->indexOf(reportTab), QApplication::translate("MainWindow", "Reports", 0));
        label_3->setText(QString());
        saveAllButton->setText(QApplication::translate("MainWindow", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
