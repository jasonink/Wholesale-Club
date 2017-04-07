#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    list()
{
    ui->setupUi(this);
    list.init_from_file("shoppers.txt");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::tableClear()
{
    ui->tableWidget->clear();
    ui->tableWidget->reset();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(0);
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

        //Sets table cells to be uneditable in GUI
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    }
}

void MainWindow::addMember()
{
    std::string name = ui->AddNameBox->toPlainText().toStdString();
    int id = ui->AddMemberNumBox->toPlainText().toInt();
    int type = 0;
    if(ui->memberTypeBasicRadio->isChecked())
        type = 0;
    else if(ui->memberTypePreferredRadio->isChecked())
        type = 1;
    else
        type = -1;

    //READ IT BY SPLIT
    std::string exp_date = ui->addMemberExpBox->toPlainText().toStdString();
    std::string m = exp_date.substr(0, 2);
    std::string d = exp_date.substr(3, 5); //skips reading in the junk char
    std::string y = exp_date.substr(6); //goes until end starting from char 6
    int exp_month = std::stoi(m);
    int exp_day = std::stoi(d);
    int exp_year =std::stoi(y);

    QMessageBox msgBox;
    int idLength = std::to_string(id).length();
    if(idLength != 6)
    {
        msgBox.setText("ID is not 6 digits");
        msgBox.exec();
    }
    else if()
    {

    }
    else
        list.addMember(name,id,type,exp_month,exp_day,exp_year);


    //NEED TO SAVE FILE
    //CHECK FOR ERRORS:
    //ID NUMBER w characters or less than or greater than 6
    //DATE -- follow format
}

void MainWindow::deleteMember()
{

}
