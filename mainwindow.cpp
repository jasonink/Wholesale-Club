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

    update_total_spent();
    update_rebate();

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

    ui->tableWidget->setItem(n,4,new QTableWidgetItem( QString::number(member_list.getMember(i).total_spent, 'f', 2)));
    ui->tableWidget->setItem(n,5,new QTableWidgetItem( QString::number(member_list.getMember(i).rebate, 'f', 2)));
}

void MainWindow::displayMsgBox(std::string message) const
{
    QMessageBox msgbox;
    msgbox.setText(QString::fromStdString(message));
    msgbox.exec();
}

void MainWindow::update_total_spent()
{
    for(int i = 0; i < item_lists.length(); i++){
        for(int j = 0; j < item_lists.get_n(i).length(); j++){
            for (int k = 0; k < member_list.length(); k++){
                if (item_lists.get_n(i).get_item(j).member_id == member_list.getID(k)){
                    member_list.addSpent(k, item_lists.get_n(i).get_item(k).price);
                }
            }
        }
    }
}

void MainWindow::update_rebate()
{
    float rebate_amount;
    for (int i = 0; i < member_list.length(); i++){
        if (member_list.getMember(i).type == 1){
            rebate_amount = member_list.getMember(i).total_spent*.05/1.0875;
            member_list.setRebate(i,rebate_amount);
        }
    }
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
    QString error_message = "";
    //Name
    if (ui->AddNameBox->text().isEmpty()){
        error_message += "Please enter a name.\n";
    }
    if (ui->AddMemberNumBox->text().isEmpty()){
        error_message += "Please enter a member number.\n";
    }
    if (ui->addMemberExpBox->text().isEmpty()){
        error_message += "Please enter an expiration date.\n";
    }
    if (!ui->memberTypeBasicRadio->isChecked() && !ui->memberTypePreferredRadio->isChecked()){
        error_message += "Please check a member type.\n";
    }
    if (!error_message.isEmpty()){
        displayMsgBox(error_message.toStdString());
        return;
    }

    std::string name = ui->AddNameBox->text().toStdString();

    //Member Number

    int id = ui->AddMemberNumBox->text().toInt();
    int idLength = std::to_string(id).length();
    if(idLength != 5)
    {
        displayMsgBox("ID is not 5 digits! Please re-enter.");
        return;
    }

    //Member Type

    int type = 0;
    if(ui->memberTypeBasicRadio->isChecked())
        type = 0;
    else if(ui->memberTypePreferredRadio->isChecked())
        type = 1;
    else
        type = -1;

    //Membership Expiration Date

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
        error_message += "Enter a valid month.\n";
    }
    if(exp_day > 31 || exp_day < 1)
    {
        error_message += "Enter a valid day.\n";
    }
    if( std::to_string(exp_year).length() != 4)
    {
        error_message += "Enter a valid year.\n";
    }
    if (!error_message.isEmpty()){
        error_message += "(mm/dd/yyyy)\n";
        displayMsgBox(error_message.toStdString());
        return;
    }

    member_list.addMember(name,id,type,exp_month,exp_day,exp_year);
    listMembers();

}


void MainWindow::getItemInfo()
{

    std::string itemName = ui->itemNameBox->text().toStdString();
    float itemPrice;
    int itemQuantity = 0;
    bool found = false;

    for(int i = 0; i < item_lists.length(); i++)
    {
        for(int j = 0; j < item_lists.get_n(i).length(); j++)
            if(itemName == item_lists.get_n(i).get_item(j).name)
            {
                found = true;
                itemPrice = item_lists.get_n(i).get_item(j).price;
                itemQuantity += item_lists.get_n(i).get_item(j).quantity;
            }
    }
    if(!found){
        displayMsgBox("Item not found.");
        return;
    }

    tableClear();

    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(1);

    std::string labels = "Item Name,Price,Quantity";
    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));

    ui->tableWidget->setItem(0,0,new QTableWidgetItem( QString::fromStdString(itemName)));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem( QString::number(itemPrice)));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem( QString::number(itemQuantity)));

    ui->TableTitle->setText("Item Info for " + ui->itemNameBox->text());
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

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

void MainWindow::displayDues()
{
    tableClear();

    ui->tableWidget->setColumnCount(3);

    std::string labels = "Name,Member ID,Dues";
    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));

    int row_count = 0;
    int i = 0;
    while (i < member_list.length()){
        if(display_type == 0){
            if (member_list.getMember(i).type == 0){
                ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
                ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
                ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
                ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::number(60,'f',2)));
                row_count++;

            }
        }
        else if (display_type == 1){
            if (member_list.getMember(i).type == 1){
                ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
                ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
                ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
                ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::number(75,'f',2)));
                row_count++;
            }
        }
        else{
            ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
            ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
            ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
            if (member_list.getMember(i).type == 0)
                ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::number(60,'f',2)));
            else
                ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::number(75,'f',2)));
            row_count++;
        }
        i++;
    }
    //Sets table cells to be uneditable in GUI
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    if (display_type == 0)
        ui->TableTitle->setText("List of Basic Member's Dues");
    else if (display_type == 1)
        ui->TableTitle->setText("List of Preferred Member's Dues");
    else
        ui->TableTitle->setText("List of All Member's Dues");
}

void MainWindow::displayExpirationDates()
{

    tableClear();

    ui->tableWidget->setColumnCount(4);
    std::string labels = "Name,Member ID,Expiration Date,Dues";
    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));
        ui->tableWidget->setColumnWidth(0,150);

    int month = ui->DisplayExpDatesBox->text().toInt();
    int row_count = 0;
    int i = 0;
    while (i < member_list.length()){
        if(display_type == 0){
            if (member_list.getMember(i).type == 0){
                if (member_list.getMember(i).exp_date.getMonth() == month){
                    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
                    ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
                    ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
                    ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).exp_date.getString())));
                    ui->tableWidget->setItem(row_count,3,new QTableWidgetItem( QString::number(60,'f',2)));
                    row_count++;
                }
            }
        }
        else if (display_type == 1){
            if (member_list.getMember(i).type == 1){
                if (member_list.getMember(i).exp_date.getMonth() == month){
                    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
                    ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
                    ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
                    ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).exp_date.getString())));
                    ui->tableWidget->setItem(row_count,3,new QTableWidgetItem( QString::number(75,'f',2)));
                    row_count++;
                }
            }
        }
        else{
            if (member_list.getMember(i).exp_date.getMonth() == month){
                ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
                ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
                ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
                ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).exp_date.getString())));
                if (member_list.getMember(i).type == 0)
                    ui->tableWidget->setItem(row_count,3,new QTableWidgetItem( QString::number(60,'f',2)));
                else
                    ui->tableWidget->setItem(row_count,3,new QTableWidgetItem( QString::number(75,'f',2)));
                row_count++;
            }
        }
        i++;
    }
    //Sets table cells to be uneditable in GUI
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    if (display_type == 0)
        ui->TableTitle->setText("List of Basic Member's Exp Dates");
    else if (display_type == 1)
        ui->TableTitle->setText("List of Preferred Member's Exp Dates");
    else
        ui->TableTitle->setText("List of All Member's Exp Dates");
}


void MainWindow::displayChangeType()
{

    tableClear();

    ui->tableWidget->setColumnCount(4);
    std::string labels = "Name,Member ID,Type,Total Spent";
    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));
        ui->tableWidget->setColumnWidth(0,150);

    int row_count = 0;
    int i = 0;
    while (i < member_list.length()){
        if(display_type == 0){
            if (member_list.getMember(i).type == 0){
                if (member_list.getMember(i).total_spent/1.0875 >= 300){
                    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
                    ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
                    ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
                    ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).getTypeString())));
                    ui->tableWidget->setItem(row_count,3,new QTableWidgetItem( QString::number(member_list.getMember(i).total_spent,'f',2)));
                    row_count++;
                }
            }
        }
        else if (display_type == 1){
            if (member_list.getMember(i).type == 1){
                if (member_list.getMember(i).total_spent/1.0875 < 300){
                    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
                    ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
                    ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
                    ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).getTypeString())));
                    ui->tableWidget->setItem(row_count,3,new QTableWidgetItem( QString::number(member_list.getMember(i).total_spent,'f',2)));
                    row_count++;
                }
            }
        }
        else{
            if (member_list.getMember(i).type == 0){
                if (member_list.getMember(i).total_spent/1.0875 >= 300){
                    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
                    ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
                    ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
                    ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).getTypeString())));
                    ui->tableWidget->setItem(row_count,3,new QTableWidgetItem( QString::number(member_list.getMember(i).total_spent,'f',2)));
                    row_count++;
                }
            }
            else{
                if (member_list.getMember(i).total_spent/1.0875 < 300){
                    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
                    ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
                    ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
                    ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).getTypeString())));
                    ui->tableWidget->setItem(row_count,3,new QTableWidgetItem( QString::number(member_list.getMember(i).total_spent,'f',2)));
                    row_count++;
                }
            }
        }
        i++;
    }
    //Sets table cells to be uneditable in GUI
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    if (display_type == 0)
        ui->TableTitle->setText("Basic Members who should change type");
    else if (display_type == 1)
        ui->TableTitle->setText("Preferred Members who should change type");
    else
        ui->TableTitle->setText("All members who should change type");
}

void MainWindow::displayMemberPurchases()
{
    tableClear();

    int id = 0;
    std::string member_name;

    if (ui->ViewMemberPurchasesIDRadio->isChecked()){
        id = ui->ViewMemberPurchaseIDBox->text().toInt();
        if (member_list.findMember(id) != -1){
            ui->TableTitle->setText("Purchases by " + QString::fromStdString(member_list.getMember(member_list.findMember(id)).name));
            for(int i = 0; i < item_lists.length(); i++){
                for(int j = 0; j < item_lists.get_n(i).length(); j++)
                    if(id == item_lists.get_n(i).get_item(j).member_id){

                    }
            }
        }
        else{
            displayMsgBox("Member not found.");
        }
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
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void MainWindow::modifyMember()
{

}

void MainWindow::saveAll()
{
    member_list.write_members_to_file("/Users/Jason/Desktop/items/shoppers2.txt");
}

