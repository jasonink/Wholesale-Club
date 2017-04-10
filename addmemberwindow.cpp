#include "addmemberwindow.h"
#include "ui_addmemberwindow.h"

AddMemberWindow::AddMemberWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddMemberWindow)
{
    ui->setupUi(this);
}

AddMemberWindow::~AddMemberWindow()
{
    delete ui;
}
