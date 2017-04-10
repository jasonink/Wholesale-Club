/********************************************************************************
** Form generated from reading UI file 'addmemberwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMBERWINDOW_H
#define UI_ADDMEMBERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_AddMemberWindow
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddMemberWindow)
    {
        if (AddMemberWindow->objectName().isEmpty())
            AddMemberWindow->setObjectName(QStringLiteral("AddMemberWindow"));
        AddMemberWindow->resize(400, 300);
        buttonBox = new QDialogButtonBox(AddMemberWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(AddMemberWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddMemberWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddMemberWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddMemberWindow);
    } // setupUi

    void retranslateUi(QDialog *AddMemberWindow)
    {
        AddMemberWindow->setWindowTitle(QApplication::translate("AddMemberWindow", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class AddMemberWindow: public Ui_AddMemberWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBERWINDOW_H
