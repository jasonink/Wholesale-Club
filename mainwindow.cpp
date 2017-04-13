#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

std::string DIRECTORY = "/Users/Jason/Desktop/items/";
//std::string DIRECTORY = "C:/Users/Bonnie/Desktop/text/";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    member_list(),
    item_lists(),
    display_type(-1)
{
    ui->setupUi(this);

    //Initialize members list
    member_list.init_from_file(DIRECTORY + "shoppers.txt");

    //Initialize the items list
    ItemList day;
    day_count = 0;
    int i = 1;
    while (day.init_from_file(DIRECTORY + "day" + std::to_string(i) + ".txt")){
        item_lists.push_back(day);
        i++;
        day_count ++;
    }

    //Initialize Combo Box
    for (int i = 0; i < day_count; i++){
        ui->displayItemCombo->addItem(QString::fromStdString(item_lists.get_n(i).get_item(0).purchase_date.getString()));
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::appendMemberToTable(int i)
{
    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
    int n = ui->tableWidget->rowCount()-1;

    ui->tableWidget->setItem(n,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
    ui->tableWidget->setItem(n,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));

    std::string type = member_list.getMember(i).getTypeString();
    ui->tableWidget->setItem(n,2,new QTableWidgetItem( QString::fromStdString(type)));

    std::string date = member_list.getMember(i).exp_date.getString();
    ui->tableWidget->setItem(n,3,new QTableWidgetItem( QString::fromStdString(date)));

    ui->tableWidget->setItem(n,4,new QTableWidgetItem( QString::number(member_list.getMember(i).total_spent)));
    ui->tableWidget->setItem(n,5,new QTableWidgetItem( QString::number(member_list.getMember(i).rebate)));
}

void MainWindow::displayMsgBox(std::string message) const
{
    QMessageBox msgbox;
    msgbox.setText(QString::fromStdString(message));
    msgbox.exec();
}

void MainWindow::tableClear()
{
    ui->tableWidget->clear();
    ui->tableWidget->reset();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(0);
    ui->TableTitle->clear();
}

void MainWindow::listMembers()
{
    tableClear();

    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setColumnWidth(0,150);
    ui->tableWidget->setColumnWidth(1,75);
    ui->tableWidget->setColumnWidth(5,75);

    std::string labels = "Name,ID,Type,Expiration Date,Total Spent,Rebate";

    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));
    int i = 0;
    while (i < member_list.length()){
        if(display_type == 0){
            if (member_list.getMember(i).type == 0)
                appendMemberToTable(i);
        }
        else if (display_type == 1){
            if (member_list.getMember(i).type == 1)
                appendMemberToTable(i);
        }
        else{
            appendMemberToTable(i);
        }
        i++;
    }
    //Sets table cells to be uneditable in GUI
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    if (display_type == 0)
        ui->TableTitle->setText("List of Basic Members");
    else if (display_type == 1)
        ui->TableTitle->setText("List of Preferred Members");
    else
        ui->TableTitle->setText("List of All Members");
}

void MainWindow::listItems()
{
    ui->tableWidget->reset();

    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setColumnWidth(0,150);
    ui->tableWidget->setColumnWidth(1,75);
    ui->tableWidget->setColumnWidth(5,75);
    ui->tableWidget->setRowCount(member_list.length());

    std::string labels = "Item Name,Price,Quantity,Member ID";

    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));

    int day = ui->displayItemCombo->currentIndex();

    ItemList day_list = item_lists.get_n(day);
    int length = day_list.length();
    ui->tableWidget->setRowCount(length);
    for (int i = 0; i < day_list.length(); i++){
        Item current_item = day_list.get_item(i);

        ui->tableWidget->setItem(i,0,new QTableWidgetItem( QString::fromStdString(current_item.name)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem( QString::number(current_item.price)));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem( QString::number(current_item.quantity)));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem( QString::number(current_item.member_id)));
    }

        //Sets table cells to be uneditable in GUI
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->TableTitle->setText( "All Sales on " + ui->displayItemCombo->currentText());
}

void MainWindow::addMember()
{
    //Name
    if (ui->AddNameBox->text().isEmpty()){
        displayMsgBox("Please enter a name.");
        return;
    }
    std::string name = ui->AddNameBox->text().toStdString();

    //Member Number
    if (ui->AddMemberNumBox->text().isEmpty()){
        displayMsgBox("Please enter a member number.");
        return;
    }
    int id = ui->AddMemberNumBox->text().toInt();
    int idLength = std::to_string(id).length();
    if(idLength != 5)
    {
        displayMsgBox("ID is not 5 digits! Please re-enter.");
        return;
    }

    //Member Type
    if (!ui->memberTypeBasicRadio->isChecked() && !ui->memberTypePreferredRadio->isChecked()){
        displayMsgBox("Please check a member type.");
        return;
    }
    int type = 0;
    if(ui->memberTypeBasicRadio->isChecked())
        type = 0;
    else if(ui->memberTypePreferredRadio->isChecked())
        type = 1;
    else
        type = -1;

    //Membership Expiration Date
    if (ui->addMemberExpBox->text().isEmpty()){
        displayMsgBox("Please enter an expiration date.");
        return;
    }

    std::stringstream ss;
    ss << ui->addMemberExpBox->text().toStdString();

    int exp_month, exp_day, exp_year;
    ss >> exp_month;
    ss.ignore(1);
    ss >> exp_day;
    ss.ignore(1);
    ss >> exp_year;

    if(exp_month > 12 || exp_month < 1)
    {
        displayMsgBox("Enter a proper number for month!");
        return;
    }
    if(exp_day > 31 || exp_day < 1)
    {
        displayMsgBox("Enter a proper number for day!");
        return;
    }
    if( std::to_string(exp_year).length() != 4)
    {
        displayMsgBox("Enter a proper number for year!");
        return;
    }

    member_list.addMember(name,id,type,exp_month,exp_day,exp_year);
    listMembers();

}


void MainWindow::getItemInfo()
{
    tableClear();

    std::string itemName = ui->itemNameBox->text().toStdString();
    float itemPrice;
    int itemQuantity = 0;

    for(int i = 0; i < item_lists.length(); i++)
    {
        for(int j = 0; j < item_lists.get_n(i).length(); j++)
            if(itemName == item_lists.get_n(i).get_item(j).name)
            {
                itemPrice = item_lists.get_n(i).get_item(j).price;
                itemQuantity += item_lists.get_n(i).get_item(j).quantity;
            }
    }

    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(1);

    std::string labels = "Item Name,Price,Quantity";
    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));

    ui->tableWidget->setItem(0,0,new QTableWidgetItem( QString::fromStdString(itemName)));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem( QString::number(itemPrice)));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem( QString::number(itemQuantity)));

    ui->TableTitle->setText("Item Info for " + ui->itemNameBox->text());

}

void MainWindow::setDisplayType()
{
    if (ui->displayBasicRadio->isChecked()){
        display_type = 0;
    }
    else if (ui->displayPreferredRadio->isChecked()){
        display_type = 1;
    }
    else {
        display_type = -1;
    }
}


void MainWindow::deleteMember()
{
    int member_index = 0;

    if(ui->deleteMemberNameRadio->isChecked()){
        member_index = member_list.findMember(ui->RemoveNameBox->text().toStdString());
        if (member_index != -1){
            member_list.deleteMember(member_index);
        }
        else{
            displayMsgBox("Member not found.");
        }
    }
    else if(ui->deleteMemberIDRadio->isChecked()){
        member_index = member_list.findMember(ui->RemoveMemberNumBox->text().toInt());
            if (member_index != -1){
                member_list.deleteMember(member_index);
            }
            else{
                displayMsgBox("Member not found.");
            }
    }

    listMembers();
}

void MainWindow::viewMember()
{
    tableClear();

    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setColumnWidth(0,150);
    ui->tableWidget->setColumnWidth(1,75);
    ui->tableWidget->setColumnWidth(5,75);

    std::string labels = "Name,ID,Type,Expiration Date,Total Spent,Rebate";

    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));

    int member_index;

    if(ui->deleteMemberNameRadio->isChecked()){
        member_index = member_list.findMember(ui->RemoveNameBox->text().toStdString());
        if (member_index != -1){
            appendMemberToTable(member_index);
            ui->TableTitle->setText("Info for " + ui->tableWidget->item(0,0)->text());
        }
        else{
            displayMsgBox("Member not found.");
        }
    }
    else if(ui->deleteMemberIDRadio->isChecked()){
        member_index = member_list.findMember(ui->RemoveMemberNumBox->text().toInt());
            if (member_index != -1){
                appendMemberToTable(member_index);
                ui->TableTitle->setText("Info for " + ui->tableWidget->item(0,0)->text());
            }
            else{
                displayMsgBox("Member not found.");
            }
    }



}

void MainWindow::saveAll()
{
    member_list.write_members_to_file("/Users/Jason/Desktop/items/shoppers2.txt");
}

