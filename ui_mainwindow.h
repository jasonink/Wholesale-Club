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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QPlainTextEdit *AddNameBox;
    QLabel *AddMemberNum;
    QPlainTextEdit *AddMemberNumBox;
    QLabel *Namelabel_3;
    QLabel *Namelabel_4;
    QPlainTextEdit *addMemberExpBox;
    QRadioButton *memberTypeBasicRadio;
    QRadioButton *memberTypePreferredRadio;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QPushButton *deleteMemberButton;
    QPlainTextEdit *RemoveMemberNumBox;
    QLabel *RemoveNamelabel;
    QPlainTextEdit *RemoveNameBox;
    QLabel *RemoveMemberNum;
    QLabel *orLabel;
    QWidget *itemTab;
    QGroupBox *itemGBox;
    QLabel *label;
    QPlainTextEdit *itemNameInput;
    QPushButton *ItemPriceButton;
    QPushButton *itemSoldButton;
    QWidget *reportTab;
    QGroupBox *groupBox;
    QPushButton *rebateButton;
    QPushButton *totalPurchasesButton;
    QPushButton *viewReportButton;
    QPlainTextEdit *plainTextEdit;
    QLabel *dateLabel;
    QLabel *label_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(997, 619);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Title = new QLabel(centralWidget);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(400, 10, 511, 51));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        Title->setFont(font);
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
        addMemberButton->setGeometry(QRect(120, 190, 101, 21));
        AddNamelabel = new QLabel(memberGroupBox);
        AddNamelabel->setObjectName(QStringLiteral("AddNamelabel"));
        AddNamelabel->setGeometry(QRect(20, 20, 41, 21));
        QFont font1;
        font1.setPointSize(10);
        AddNamelabel->setFont(font1);
        AddNameBox = new QPlainTextEdit(memberGroupBox);
        AddNameBox->setObjectName(QStringLiteral("AddNameBox"));
        AddNameBox->setGeometry(QRect(220, 20, 104, 21));
        AddNameBox->setFrameShape(QFrame::Box);
        AddNameBox->setFrameShadow(QFrame::Sunken);
        AddNameBox->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        AddNameBox->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        AddMemberNum = new QLabel(memberGroupBox);
        AddMemberNum->setObjectName(QStringLiteral("AddMemberNum"));
        AddMemberNum->setGeometry(QRect(20, 58, 131, 21));
        AddMemberNum->setFont(font1);
        AddMemberNumBox = new QPlainTextEdit(memberGroupBox);
        AddMemberNumBox->setObjectName(QStringLiteral("AddMemberNumBox"));
        AddMemberNumBox->setGeometry(QRect(220, 60, 104, 21));
        AddMemberNumBox->setMaximumSize(QSize(104, 21));
        AddMemberNumBox->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        AddMemberNumBox->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        Namelabel_3 = new QLabel(memberGroupBox);
        Namelabel_3->setObjectName(QStringLiteral("Namelabel_3"));
        Namelabel_3->setGeometry(QRect(20, 150, 111, 21));
        Namelabel_3->setFont(font1);
        Namelabel_4 = new QLabel(memberGroupBox);
        Namelabel_4->setObjectName(QStringLiteral("Namelabel_4"));
        Namelabel_4->setGeometry(QRect(20, 98, 171, 21));
        Namelabel_4->setFont(font1);
        addMemberExpBox = new QPlainTextEdit(memberGroupBox);
        addMemberExpBox->setObjectName(QStringLiteral("addMemberExpBox"));
        addMemberExpBox->setGeometry(QRect(220, 100, 104, 21));
        addMemberExpBox->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        addMemberExpBox->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        memberTypeBasicRadio = new QRadioButton(memberGroupBox);
        memberTypeBasicRadio->setObjectName(QStringLiteral("memberTypeBasicRadio"));
        memberTypeBasicRadio->setGeometry(QRect(220, 140, 82, 17));
        memberTypePreferredRadio = new QRadioButton(memberGroupBox);
        memberTypePreferredRadio->setObjectName(QStringLiteral("memberTypePreferredRadio"));
        memberTypePreferredRadio->setGeometry(QRect(220, 160, 82, 17));
        pushButton = new QPushButton(memberTab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 460, 161, 21));
        groupBox_2 = new QGroupBox(memberTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 240, 341, 181));
        deleteMemberButton = new QPushButton(groupBox_2);
        deleteMemberButton->setObjectName(QStringLiteral("deleteMemberButton"));
        deleteMemberButton->setGeometry(QRect(120, 150, 100, 20));
        RemoveMemberNumBox = new QPlainTextEdit(groupBox_2);
        RemoveMemberNumBox->setObjectName(QStringLiteral("RemoveMemberNumBox"));
        RemoveMemberNumBox->setGeometry(QRect(220, 100, 104, 21));
        RemoveMemberNumBox->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        RemoveMemberNumBox->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        RemoveNamelabel = new QLabel(groupBox_2);
        RemoveNamelabel->setObjectName(QStringLiteral("RemoveNamelabel"));
        RemoveNamelabel->setGeometry(QRect(20, 32, 41, 21));
        RemoveNamelabel->setFont(font1);
        RemoveNameBox = new QPlainTextEdit(groupBox_2);
        RemoveNameBox->setObjectName(QStringLiteral("RemoveNameBox"));
        RemoveNameBox->setGeometry(QRect(220, 32, 104, 21));
        RemoveNameBox->setFrameShape(QFrame::Box);
        RemoveNameBox->setFrameShadow(QFrame::Sunken);
        RemoveNameBox->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        RemoveNameBox->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        RemoveMemberNum = new QLabel(groupBox_2);
        RemoveMemberNum->setObjectName(QStringLiteral("RemoveMemberNum"));
        RemoveMemberNum->setGeometry(QRect(20, 98, 131, 21));
        RemoveMemberNum->setFont(font1);
        orLabel = new QLabel(groupBox_2);
        orLabel->setObjectName(QStringLiteral("orLabel"));
        orLabel->setGeometry(QRect(20, 65, 16, 21));
        tabWidget->addTab(memberTab, QString());
        groupBox_2->raise();
        memberGroupBox->raise();
        pushButton->raise();
        itemTab = new QWidget();
        itemTab->setObjectName(QStringLiteral("itemTab"));
        itemGBox = new QGroupBox(itemTab);
        itemGBox->setObjectName(QStringLiteral("itemGBox"));
        itemGBox->setGeometry(QRect(10, 10, 341, 91));
        label = new QLabel(itemGBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 46, 13));
        label->setFont(font1);
        itemNameInput = new QPlainTextEdit(itemGBox);
        itemNameInput->setObjectName(QStringLiteral("itemNameInput"));
        itemNameInput->setGeometry(QRect(65, 38, 121, 21));
        itemNameInput->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ItemPriceButton = new QPushButton(itemGBox);
        ItemPriceButton->setObjectName(QStringLiteral("ItemPriceButton"));
        ItemPriceButton->setGeometry(QRect(220, 20, 100, 20));
        itemSoldButton = new QPushButton(itemGBox);
        itemSoldButton->setObjectName(QStringLiteral("itemSoldButton"));
        itemSoldButton->setGeometry(QRect(220, 50, 100, 20));
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
        dateLabel->setFont(font1);
        tabWidget->addTab(reportTab, QString());
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(390, 10, 91, 51));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../20070401istockpbjbeauty.jpg")));
        label_3->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 997, 25));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(listMembers()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(clear, SIGNAL(clicked()), MainWindow, SLOT(tableClear()));
        QObject::connect(addMemberButton, SIGNAL(clicked()), MainWindow, SLOT(addMember()));
        QObject::connect(deleteMemberButton, SIGNAL(clicked()), MainWindow, SLOT(deleteMember()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Title->setText(QApplication::translate("MainWindow", "PBAndJ Wholesale xD", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Exit", 0));
        clear->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_2->setText(QString());
        memberGroupBox->setTitle(QApplication::translate("MainWindow", "Add Members", 0));
        addMemberButton->setText(QApplication::translate("MainWindow", "Add Member", 0));
        AddNamelabel->setText(QApplication::translate("MainWindow", "Name:", 0));
        AddNameBox->setPlainText(QString());
        AddNameBox->setPlaceholderText(QApplication::translate("MainWindow", "First Last", 0));
        AddMemberNum->setText(QApplication::translate("MainWindow", "Membership Number:", 0));
        AddMemberNumBox->setPlaceholderText(QApplication::translate("MainWindow", "#####", 0));
        Namelabel_3->setText(QApplication::translate("MainWindow", "Membership Type:", 0));
        Namelabel_4->setText(QApplication::translate("MainWindow", "Membership Expiration Date:", 0));
        addMemberExpBox->setPlaceholderText(QApplication::translate("MainWindow", "MM/DD/YYYY", 0));
        memberTypeBasicRadio->setText(QApplication::translate("MainWindow", "Basic", 0));
        memberTypePreferredRadio->setText(QApplication::translate("MainWindow", "Preferred", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Display Members", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Delete Members", 0));
        deleteMemberButton->setText(QApplication::translate("MainWindow", "Delete Member", 0));
        RemoveMemberNumBox->setPlaceholderText(QApplication::translate("MainWindow", "#####", 0));
        RemoveNamelabel->setText(QApplication::translate("MainWindow", "Name:", 0));
        RemoveNameBox->setPlainText(QString());
        RemoveNameBox->setPlaceholderText(QApplication::translate("MainWindow", "First Last", 0));
        RemoveMemberNum->setText(QApplication::translate("MainWindow", "Membership Number:", 0));
        orLabel->setText(QApplication::translate("MainWindow", "Or", 0));
        tabWidget->setTabText(tabWidget->indexOf(memberTab), QApplication::translate("MainWindow", "Members", 0));
        itemGBox->setTitle(QApplication::translate("MainWindow", "Item Information", 0));
        label->setText(QApplication::translate("MainWindow", "Name:", 0));
        ItemPriceButton->setText(QApplication::translate("MainWindow", "Get Price", 0));
        itemSoldButton->setText(QApplication::translate("MainWindow", "Quantity Sold", 0));
        tabWidget->setTabText(tabWidget->indexOf(itemTab), QApplication::translate("MainWindow", "Items", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Print", 0));
        rebateButton->setText(QApplication::translate("MainWindow", "Print Rebate", 0));
        totalPurchasesButton->setText(QApplication::translate("MainWindow", "Total Purchases", 0));
        viewReportButton->setText(QApplication::translate("MainWindow", "View Sales Report", 0));
        plainTextEdit->setPlaceholderText(QApplication::translate("MainWindow", "MM/DD/YYYY", 0));
        dateLabel->setText(QApplication::translate("MainWindow", "Date:", 0));
        tabWidget->setTabText(tabWidget->indexOf(reportTab), QApplication::translate("MainWindow", "Reports", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
