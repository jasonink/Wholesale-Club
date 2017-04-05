#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addmemberwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    list()
{
    ui->setupUi(this);
    list.init_from_file("/Users/Jason/Documents/School/QT/Wholesale-Club/shoppers.txt");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::listMembers()
{
    ui->tableWidget->reset();

    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setRowCount(list.length());

    for (int i = 0; i < list.length(); i++){
        ui->tableWidget->setItem(i,0,new QTableWidgetItem( QString::fromStdString(list.getMember(i).name)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem( list.getMember(i).id));
        std::string type;
        int type_int = list.getMember(i).type;
        if (type_int == 0)
            type = "Basic";
        else if (type_int == 1)
            type = "Preferred";
        else
            type = "Unknown";
        ui->tableWidget->setItem(i,2,new QTableWidgetItem( QString::fromStdString(type)));


    }
}
