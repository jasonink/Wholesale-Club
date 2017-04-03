/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Title;
    QPlainTextEdit *DisplayBox;
    QGroupBox *memberGroupBox;
    QPushButton *deleteMemberButton;
    QPushButton *addMemberButton;
    QLabel *Namelabel;
    QPlainTextEdit *NameBox;
    QLabel *MemberNum;
    QPlainTextEdit *MemberNumBox;
    QLabel *Namelabel_3;
    QLabel *Namelabel_4;
    QPlainTextEdit *MemberExpBox;
    QRadioButton *memberTypeBasicRadio;
    QRadioButton *memberTypePreferredRadio;
    QGroupBox *itemGBox;
    QLabel *label;
    QPlainTextEdit *itemNameInput;
    QPushButton *ItemPriceButton;
    QPushButton *itemSoldButton;
    QGroupBox *groupBox;
    QPushButton *rebateButton;
    QPushButton *totalPurchasesButton;
    QPushButton *viewReportButton;
    QPlainTextEdit *plainTextEdit;
    QLabel *dateLabel;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(833, 601);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Title = new QLabel(centralWidget);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(220, 10, 361, 51));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        Title->setFont(font);
        Title->setFocusPolicy(Qt::NoFocus);
        Title->setAlignment(Qt::AlignCenter);
        DisplayBox = new QPlainTextEdit(centralWidget);
        DisplayBox->setObjectName(QStringLiteral("DisplayBox"));
        DisplayBox->setGeometry(QRect(340, 70, 471, 461));
        DisplayBox->setFrameShape(QFrame::Box);
        DisplayBox->setFrameShadow(QFrame::Plain);
        DisplayBox->setReadOnly(true);
        memberGroupBox = new QGroupBox(centralWidget);
        memberGroupBox->setObjectName(QStringLiteral("memberGroupBox"));
        memberGroupBox->setGeometry(QRect(20, 80, 301, 251));
        deleteMemberButton = new QPushButton(memberGroupBox);
        deleteMemberButton->setObjectName(QStringLiteral("deleteMemberButton"));
        deleteMemberButton->setGeometry(QRect(160, 210, 100, 20));
        addMemberButton = new QPushButton(memberGroupBox);
        addMemberButton->setObjectName(QStringLiteral("addMemberButton"));
        addMemberButton->setGeometry(QRect(30, 210, 101, 21));
        Namelabel = new QLabel(memberGroupBox);
        Namelabel->setObjectName(QStringLiteral("Namelabel"));
        Namelabel->setGeometry(QRect(20, 20, 41, 21));
        QFont font1;
        font1.setPointSize(10);
        Namelabel->setFont(font1);
        NameBox = new QPlainTextEdit(memberGroupBox);
        NameBox->setObjectName(QStringLiteral("NameBox"));
        NameBox->setGeometry(QRect(190, 20, 104, 21));
        NameBox->setFrameShape(QFrame::Box);
        NameBox->setFrameShadow(QFrame::Sunken);
        NameBox->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        NameBox->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        MemberNum = new QLabel(memberGroupBox);
        MemberNum->setObjectName(QStringLiteral("MemberNum"));
        MemberNum->setGeometry(QRect(20, 68, 131, 21));
        MemberNum->setFont(font1);
        MemberNumBox = new QPlainTextEdit(memberGroupBox);
        MemberNumBox->setObjectName(QStringLiteral("MemberNumBox"));
        MemberNumBox->setGeometry(QRect(190, 70, 104, 21));
        MemberNumBox->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        MemberNumBox->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        Namelabel_3 = new QLabel(memberGroupBox);
        Namelabel_3->setObjectName(QStringLiteral("Namelabel_3"));
        Namelabel_3->setGeometry(QRect(20, 160, 111, 21));
        Namelabel_3->setFont(font1);
        Namelabel_4 = new QLabel(memberGroupBox);
        Namelabel_4->setObjectName(QStringLiteral("Namelabel_4"));
        Namelabel_4->setGeometry(QRect(20, 118, 171, 21));
        Namelabel_4->setFont(font1);
        MemberExpBox = new QPlainTextEdit(memberGroupBox);
        MemberExpBox->setObjectName(QStringLiteral("MemberExpBox"));
        MemberExpBox->setGeometry(QRect(190, 120, 104, 21));
        MemberExpBox->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        MemberExpBox->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        memberTypeBasicRadio = new QRadioButton(memberGroupBox);
        memberTypeBasicRadio->setObjectName(QStringLiteral("memberTypeBasicRadio"));
        memberTypeBasicRadio->setGeometry(QRect(150, 150, 82, 17));
        memberTypePreferredRadio = new QRadioButton(memberGroupBox);
        memberTypePreferredRadio->setObjectName(QStringLiteral("memberTypePreferredRadio"));
        memberTypePreferredRadio->setGeometry(QRect(150, 170, 82, 17));
        itemGBox = new QGroupBox(centralWidget);
        itemGBox->setObjectName(QStringLiteral("itemGBox"));
        itemGBox->setGeometry(QRect(20, 340, 301, 91));
        label = new QLabel(itemGBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 46, 13));
        label->setFont(font1);
        itemNameInput = new QPlainTextEdit(itemGBox);
        itemNameInput->setObjectName(QStringLiteral("itemNameInput"));
        itemNameInput->setGeometry(QRect(65, 38, 104, 21));
        itemNameInput->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ItemPriceButton = new QPushButton(itemGBox);
        ItemPriceButton->setObjectName(QStringLiteral("ItemPriceButton"));
        ItemPriceButton->setGeometry(QRect(190, 20, 100, 20));
        itemSoldButton = new QPushButton(itemGBox);
        itemSoldButton->setObjectName(QStringLiteral("itemSoldButton"));
        itemSoldButton->setGeometry(QRect(190, 50, 100, 20));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 440, 301, 91));
        rebateButton = new QPushButton(groupBox);
        rebateButton->setObjectName(QStringLiteral("rebateButton"));
        rebateButton->setGeometry(QRect(190, 13, 100, 20));
        totalPurchasesButton = new QPushButton(groupBox);
        totalPurchasesButton->setObjectName(QStringLiteral("totalPurchasesButton"));
        totalPurchasesButton->setGeometry(QRect(190, 38, 100, 20));
        viewReportButton = new QPushButton(groupBox);
        viewReportButton->setObjectName(QStringLiteral("viewReportButton"));
        viewReportButton->setGeometry(QRect(190, 63, 100, 20));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(70, 20, 91, 21));
        plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        dateLabel = new QLabel(groupBox);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        dateLabel->setGeometry(QRect(20, 21, 46, 15));
        dateLabel->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        itemGBox->raise();
        memberGroupBox->raise();
        Title->raise();
        DisplayBox->raise();
        groupBox->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        MainWindow->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 833, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Title->setText(QApplication::translate("MainWindow", "PBAndJ WholeSale xD", 0));
        memberGroupBox->setTitle(QApplication::translate("MainWindow", "Membership Information", 0));
        deleteMemberButton->setText(QApplication::translate("MainWindow", "Delete Member", 0));
        addMemberButton->setText(QApplication::translate("MainWindow", "Add Member", 0));
        Namelabel->setText(QApplication::translate("MainWindow", "Name:", 0));
        NameBox->setPlainText(QString());
        NameBox->setPlaceholderText(QApplication::translate("MainWindow", "First Last", 0));
        MemberNum->setText(QApplication::translate("MainWindow", "Membership Number:", 0));
        Namelabel_3->setText(QApplication::translate("MainWindow", "Membership Type:", 0));
        Namelabel_4->setText(QApplication::translate("MainWindow", "Membership Expiration Date:", 0));
        MemberExpBox->setPlaceholderText(QApplication::translate("MainWindow", "MM/YYYY", 0));
        memberTypeBasicRadio->setText(QApplication::translate("MainWindow", "Basic", 0));
        memberTypePreferredRadio->setText(QApplication::translate("MainWindow", "Preferred", 0));
        itemGBox->setTitle(QApplication::translate("MainWindow", "Item Information", 0));
        label->setText(QApplication::translate("MainWindow", "Name:", 0));
        ItemPriceButton->setText(QApplication::translate("MainWindow", "Get Price", 0));
        itemSoldButton->setText(QApplication::translate("MainWindow", "Quantity Sold", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Print", 0));
        rebateButton->setText(QApplication::translate("MainWindow", "Print Rebate", 0));
        totalPurchasesButton->setText(QApplication::translate("MainWindow", "Total Purchases", 0));
        viewReportButton->setText(QApplication::translate("MainWindow", "View Sales Report", 0));
        plainTextEdit->setPlaceholderText(QApplication::translate("MainWindow", "MM/DD/YYYY", 0));
        dateLabel->setText(QApplication::translate("MainWindow", "Date:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
