#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    member_list(),
    item_lists()
{
    ui->setupUi(this);

    //Initialize members list
    member_list.init_from_file("/Users/Jason/Documents/School/QT/Wholesale-Club/shoppers.txt");

    //Initialize the items list
    ItemList day;
    day.init_from_file("/Users/Jason/Documents/School/QT/Wholesale-Club/day1.txt");
    item_lists.push_back(day);
    day.init_from_file("/Users/Jason/Documents/School/QT/Wholesale-Club/day2.txt");
    item_lists.push_back(day);
    day.init_from_file("/Users/Jason/Documents/School/QT/Wholesale-Club/day3.txt");
    item_lists.push_back(day);
    day.init_from_file("/Users/Jason/Documents/School/QT/Wholesale-Club/day4.txt");
    item_lists.push_back(day);
    day.init_from_file("/Users/Jason/Documents/School/QT/Wholesale-Club/day5.txt");
    item_lists.push_back(day);

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
    ui->tableWidget->setRowCount(member_list.length());

    std::string labels = "Name,ID,Type,Expiration Date,Total Spent,Rebate";

    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));

    for (int i = 0; i < member_list.length(); i++){
        ui->tableWidget->setItem(i,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
        std::string type;
        int type_int = member_list.getMember(i).type;
        if (type_int == 0)
            type = "Basic";
        else if (type_int == 1)
            type = "Preferred";
        else
            type = "Unknown";
        ui->tableWidget->setItem(i,2,new QTableWidgetItem( QString::fromStdString(type)));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).exp_date.getString())));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem( QString::number(member_list.getMember(i).total_spent)));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem( QString::number(member_list.getMember(i).rebate)));

    }
}
