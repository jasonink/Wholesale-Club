#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    member_list(),
    item_lists()
{
    ui->setupUi(this);

    //Initialize members list
    member_list.init_from_file("/Users/Jason/Desktop/items/shoppers.txt");
    //Initialize the items list
    ItemList day;
    day.init_from_file("/Users/Jason/Desktop/items/day1.txt");
    item_lists.push_back(day);
    day.init_from_file("/Users/Jason/Desktop/items/day2.txt");
    item_lists.push_back(day);
    day.init_from_file("/Users/Jason/Desktop/items/day3.txt");
    item_lists.push_back(day);
    day.init_from_file("/Users/Jason/Desktop/items/day4.txt");
    item_lists.push_back(day);
    day.init_from_file("/Users/Jason/Desktop/items/day5.txt");
    item_lists.push_back(day);


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

        int month,day,year;
        month = member_list.getMember(i).exp_date.getMonth();
        day = member_list.getMember(i).exp_date.getDay();
        year = member_list.getMember(i).exp_date.getYear();
        std::string date = std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
        ui->tableWidget->setItem(i,3,new QTableWidgetItem( QString::fromStdString(date)));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem( QString::number(member_list.getMember(i).total_spent)));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem( QString::number(member_list.getMember(i).rebate)));

        //Sets table cells to be uneditable in GUI
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    }
}

void MainWindow::addMember()
{
    std::string name = ui->AddNameBox->text().toStdString();
    int id = ui->AddMemberNumBox->text().toInt();
    int type = 0;
    if(ui->memberTypeBasicRadio->isChecked())
        type = 0;
    else if(ui->memberTypePreferredRadio->isChecked())
        type = 1;
    else
        type = -1;

    //READ IT BY SPLIT
    std::string exp_date = ui->addMemberExpBox->text().toStdString();
    std::string m = exp_date.substr(0, 2);
    std::string d = exp_date.substr(3, 2); //skips reading in the junk char
    std::string y = exp_date.substr(6); //goes until end starting from char 6
    int exp_month = std::stoi(m);
    int exp_day = std::stoi(d);
    int exp_year =std::stoi(y);

    QMessageBox msgBox;
    int idLength = std::to_string(id).length();
    if(idLength != 5)
    {
        msgBox.setText("ID is not 5 digits! Please re-enter.");
        msgBox.exec();
    }
    if((m.length() > 2) || (exp_month > 12 || exp_month < 1))
    {
        msgBox.setText("Enter a proper number for month!");
        msgBox.exec();
    }
    if((d.length() > 2) || (exp_day > 31 || exp_day < 1))
    {
        msgBox.setText("Enter a proper number for day!");
        msgBox.exec();
    }
    if(y.length() != 4)
    {
        msgBox.setText("Enter a proper number for year!");
        msgBox.exec();
    }
    else
        member_list.addMember(name,id,type,exp_month,exp_day,exp_year);

    listMembers();

    member_list.overwriteFile("C:/Users/Bonnie/Desktop/Wholesale-Club-master/shoppers.txt");
}

void MainWindow::deleteMember()
{
    int member_index = 0;

    if(!ui->RemoveNameBox->text().isEmpty()){
        member_index = member_list.findMember(ui->RemoveNameBox->text().toStdString());
        if (member_index != -1){
            member_list.deleteMember(member_index);
        }
    }

    else if(!ui->RemoveMemberNumBox->text().isEmpty()){
        member_index = member_list.findMember(ui->RemoveMemberNumBox->text().toInt());
            if (member_index != -1){
                member_list.deleteMember(member_index);
            }
    }

    listMembers();
}

//NEED TO SAVE FILE
