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
    ui->tableWidget->setColumnWidth(0,150);
    ui->tableWidget->setColumnWidth(1,75);
    ui->tableWidget->setColumnWidth(5,75);
    ui->tableWidget->setRowCount(list.length());

    std::string labels = "Name,ID,Type,Expiration Date,Total Spent,Rebate";

    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));

    for (int i = 0; i < list.length(); i++){
        ui->tableWidget->setItem(i,0,new QTableWidgetItem( QString::fromStdString(list.getMember(i).name)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem( QString::number(list.getMember(i).id)));
        std::string type;
        int type_int = list.getMember(i).type;
        if (type_int == 0)
            type = "Basic";
        else if (type_int == 1)
            type = "Preferred";
        else
            type = "Unknown";
        ui->tableWidget->setItem(i,2,new QTableWidgetItem( QString::fromStdString(type)));

        int month,day,year;
        month = list.getMember(i).exp_month;
        day = list.getMember(i).exp_day;
        year = list.getMember(i).exp_year;
        std::string date = std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
        ui->tableWidget->setItem(i,3,new QTableWidgetItem( QString::fromStdString(date)));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem( QString::number(list.getMember(i).total_spent)));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem( QString::number(list.getMember(i).rebate)));

    }
}
