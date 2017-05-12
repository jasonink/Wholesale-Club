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
    display_type(-1),
    modify_status(0),
    delete_member_id(0)
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
    member_list.sort_members();
    sort_items();

    //Initialize Combo Box
    for (int i = 0; i < day_count; i++){
        ui->displayItemCombo->addItem(QString::fromStdString(item_lists.get_n(i).get_item(0).purchase_date.getString()));
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

/**********************************************************
 * void MainWindow::appendMemberToTable(int i)
 * _______________________________________________________
 * Precondition:
 *  - member_list is defined
 * Postcondition:
 *  - appends the ith member to the table
**********************************************************/
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

/**********************************************************
 * void MainWindow::displayMsgBox(std::string message) const
 * _______________________________________________________
 * Precondition:
 *  - none
 * Postcondition:
 *  - displays a message box with message
**********************************************************/
void MainWindow::displayMsgBox(std::string message) const
{
    QMessageBox msgbox;
    msgbox.setText(QString::fromStdString(message));
    msgbox.exec();
}

/**********************************************************
 * void MainWindow::update_total_spent()
 * _______________________________________________________
 * Precondition:
 *  - member_list is defined
 *  - item_lists is defined
 * Postcondition:
 *  - updates the total_spent for the members from the
 *    item list
**********************************************************/
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

/**********************************************************
 * void MainWindow::applyModification()
 * _______________________________________________________
 * Precondition:
 *  - member_list is defined
 * Postcondition:
 *  - saves the changes that the user makes to the member
 *  - after the modify button is pressed
**********************************************************/
void MainWindow::applyModification()
{

    QString error_message = "";

    if (ui->tableWidget->item(0,0)->text().isEmpty()){
        error_message += "Please enter a name.\n";
    }
    if (ui->tableWidget->item(0,1)->text().isEmpty()){
        error_message += "Please enter a member ID.\n";
    }
    if (ui->tableWidget->item(0,2)->text().isEmpty()){
        error_message += "Please enter a membership type.\n";
    }
    if (ui->tableWidget->item(0,3)->text().isEmpty()){
        error_message += "Please enter an expiration date.\n";
    }
    if (!error_message.isEmpty()){
        displayMsgBox(error_message.toStdString());
        return;
    }

    std::string name = ui->tableWidget->item(0,0)->text().toStdString();
    if (member_list.findMember(member_list.getID(name)) != -1){
        displayMsgBox("Someone else already has this name.");
        return;
    }

    //Member Number

    int id = ui->tableWidget->item(0,1)->text().toInt();
    int idLength = std::to_string(id).length();
    if(idLength != 5)
    {
        displayMsgBox("ID is not 5 digits! Please re-enter.");
        return;
    }
    else if (member_list.findMember(id) != -1){
        displayMsgBox("Someone else already has this ID.");
        return;
    }

    //Member Type

    int type = 0;
    std::string input_type = ui->tableWidget->item(0,2)->text().toStdString();
    if(input_type == "Basic")
        type = 0;
    else if(input_type == "Preferred")
        type = 1;
    else{
        displayMsgBox("Please enter a valid member type\n (Basic/Preferred)");
        return;
    }

    //Membership Expiration Date

    std::stringstream ss;
    ss << ui->tableWidget->item(0,3)->text().toStdString();

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
    float spent = member_list.getMember(delete_member_id).total_spent;
    float rebate = member_list.getMember(delete_member_id).rebate;
    member_list.deleteMember(delete_member_id);
    member_list.addMember(name,id,type,exp_month,exp_day,exp_year,spent,rebate);
    displayMsgBox(name + " has been modified!");
    modify_status = 0;
    ui->ModifyMemberButton->setEnabled(true);
    ui->ApplyModifyMemberButton->setEnabled(false);
    member_list.sort_members();
}

/**********************************************************
 * void MainWindow::update_rebate()
 * _______________________________________________________
 * Precondition:
 *  - member_list is defined
 *  - total_spent of members has been updated
 * Postcondition:
 *  - updates the rebate for the members
**********************************************************/
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

/**********************************************************
 * void MainWindow::sort_items()
 * _______________________________________________________
 * Precondition:
 *  - item_lists is defined
 * Postcondition:
 *  - sorts the item list alphabetically by name
**********************************************************/
void MainWindow::sort_items()
{
    for (int i=0; i<item_lists.length();i++)
        item_lists.modify(i).sort_items();
}


/**********************************************************
 * void MainWindow::tableClear()
 * _______________________________________________________
 * Precondition:
 *  - nothing
 * Postcondition:
 *  - clears the table
**********************************************************/
void MainWindow::tableClear()
{
    ui->tableWidget->clear();
    ui->tableWidget->reset();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(0);
    ui->TableTitle->clear();

    ui->TotalRevenueLabel->clear();
    ui->BasicShoppersLabel->clear();
    ui->PreferredShoppersLabel->clear();
    ui->TotalRevenueAmount->clear();
    ui->BasicShoppersAmount->clear();
    ui->PreferredShoppersAmount->clear();

    if (modify_status == 1){
        ui->ModifyMemberButton->setEnabled(true);
        ui->ApplyModifyMemberButton->setEnabled(false);
        modify_status = 0;
    }
}

/**********************************************************
 * void MainWindow::listMembers()
 * _______________________________________________________
 * Precondition:
 *  - member_list is defined
 * Postcondition:
 *  - lists out all the members and their information to
 *    the table
**********************************************************/
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

/**********************************************************
 * void MainWindow::listItems()
 * _______________________________________________________
 * Precondition:
 *  - item_lists is defined
 *  - member_list
 * Postcondition:
 *  - lists out all the items for a day and their information to
 *    the table
**********************************************************/
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
    float total_purchase_price = 0;
    int basic_count = 0;
    int preferred_count = 0;

    ItemList day_list = item_lists.get_n(day);
    int length = day_list.length();
    ui->tableWidget->setRowCount(length);
    for (int i = 0; i < day_list.length(); i++){
        Item current_item = day_list.get_item(i);
        total_purchase_price += current_item.price*current_item.quantity;
        if (member_list.getMember(member_list.findMember(current_item.member_id)).type == 0)
            basic_count ++;
        else
            preferred_count++;

        ui->tableWidget->setItem(i,0,new QTableWidgetItem( QString::fromStdString(current_item.name)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem( QString::number(current_item.price)));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem( QString::number(current_item.quantity)));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem( QString::number(current_item.member_id)));
    }

        //Sets table cells to be uneditable in GUI
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->TableTitle->setText( "Sales Report " + ui->displayItemCombo->currentText());
    ui->TotalRevenueLabel->setText(QString::fromStdString("Total Revenue"));
    ui->BasicShoppersLabel->setText(QString::fromStdString("Basic Shoppers"));
    ui->PreferredShoppersLabel->setText(QString::fromStdString("Preferred Shoppers"));
    ui->TotalRevenueAmount->setText(QString::number(total_purchase_price/1.0875,'f',2));
    ui->BasicShoppersAmount->setText(QString::number(basic_count));
    ui->PreferredShoppersAmount->setText(QString::number(preferred_count));
}

/**********************************************************
 * void MainWindow::addMember()
 * _______________________________________________________
 * Precondition:
 *  - member_list is defined
 * Postcondition:
 *  - adds a member to the list
**********************************************************/
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
    if (member_list.findMember(member_list.getID(name)) != -1){
        displayMsgBox("This member already exists!");
        return;
    }

    //Member Number

    int id = ui->AddMemberNumBox->text().toInt();
    int idLength = std::to_string(id).length();
    if(idLength != 5)
    {
        displayMsgBox("ID is not 5 digits! Please re-enter.");
        return;
    }
    else if (member_list.findMember(id) != -1){
        displayMsgBox("This member already exists!");
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

/**********************************************************
 * void MainWindow::getItemInfo()
 * _______________________________________________________
 * Precondition:
 *  - item_lists is defined
 * Postcondition:
 *  - displays the name of the item, the price, and the
 *    quantity sold
**********************************************************/
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

/**********************************************************
 * void MainWindow::setDisplayType()
 * _______________________________________________________
 * Precondition:
 *  - none
 * Postcondition:
 *  - sets the display_type variable to its specified value
**********************************************************/
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

/**********************************************************
 * void MainWindow::displayDues()
 * _______________________________________________________
 * Precondition:
 *  - member_list defined
 *  - item_lists defined
 * Postcondition:
 *  - displays the membership dues to the table for each
 *   member
**********************************************************/
void MainWindow::displayDues()
{
    tableClear();

    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setColumnWidth(0,150);

    std::string labels = "Name,Member ID,Dues";
    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));

    int row_count = 0;
    int i = 0;
    while (i < member_list.length()){
        if(display_type != 1){
            if (member_list.getMember(i).type == 0){
                ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
                ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
                ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
                ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::number(60,'f',2)));
                row_count++;

            }
        }
        else {
            if (member_list.getMember(i).type == 1){
                ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
                ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
                ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
                ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::number(75,'f',2)));
                row_count++;
            }
        }

        i++;
    }
    i = 0;
    if (display_type != 0 && display_type != 1){
        while (i < member_list.length()){
            if (member_list.getMember(i).type == 1){
                ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
                ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
                ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
                ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::number(75,'f',2)));
                row_count++;
            }
            i++;
        }
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

/**********************************************************
 * void MainWindow::displayExpirationDates()
 * _______________________________________________________
 * Precondition:
 *  - member_list defined
 *  - item_lists defined
 * Postcondition:
 *  - displays the expiration dates of each member to
 *      the table
**********************************************************/
void MainWindow::displayExpirationDates()
{

    tableClear();
    if (ui->DisplayExpDatesBox->text().isEmpty()){
        displayMsgBox("Enter a month.");
        return;
    }

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

/**********************************************************
 * void MainWindow::displayChangeType()
 * _______________________________________________________
 * Precondition:
 *  - member_list defined
 *  - item_lists defined
 * Postcondition:
 *  - displays to the table which members should change their
 *      membership status
**********************************************************/
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

/**********************************************************
 * void MainWindow::displayMemberPurchases()
 * _______________________________________________________
 * Precondition:
 *  - member_list defined
 *  - item_lists defined
 * Postcondition:
 *  - displays all the purchases of a single member to
 *      the table
**********************************************************/
void MainWindow::displayMemberPurchases()
{
    tableClear();

    int id = 0;
    std::string member_name;
    int row_count = 0;


    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setColumnWidth(0,150);
    ui->tableWidget->setColumnWidth(1,75);
    ui->tableWidget->setColumnWidth(5,75);

    std::string labels = "Item Name,Price,Quantity,Purchase Date";

    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));

    if (ui->ViewMemberPurchasesIDRadio->isChecked()){
        id = ui->ViewMemberPurchaseIDBox->text().toInt();
    }
    else if (ui->ViewMemberPuchasesNameRadio->isChecked()){
        id = member_list.getID(ui->ViewMemberPurchaseNameBox->text().toStdString());
    }
    if (member_list.findMember(id) != -1){
        ui->TableTitle->setText("Purchases by " + QString::fromStdString(member_list.getMember(member_list.findMember(id)).name));

        Item current_item;
        ItemList day_list;

        for(int i = 0; i < item_lists.length(); i++){

            day_list = item_lists.get_n(i);

            for(int j = 0; j < item_lists.get_n(i).length(); j++){

                if(id == item_lists.get_n(i).get_item(j).member_id){
                    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
                    current_item = day_list.get_item(j);

                    ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(current_item.name)));
                    ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(current_item.price)));
                    ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::number(current_item.quantity)));
                    ui->tableWidget->setItem(row_count,3,new QTableWidgetItem( QString::fromStdString(current_item.purchase_date.getString())));
                    row_count++;
                }
            }

            ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        }
    }
    else{
        displayMsgBox("Member not found.");
    }
}

/**********************************************************
 * void MainWindow::displayRebates()
 * _______________________________________________________
 * Precondition:
 *  - member_list defined
 *  - item_lists defined
 * Postcondition:
 *  - displays the rebates of all the preferred members
**********************************************************/
void MainWindow::displayRebates()
{
    tableClear();

    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setColumnWidth(0,150);
    ui->tableWidget->setColumnWidth(1,75);
    ui->tableWidget->setColumnWidth(5,75);

    std::string labels = "Name,ID,Rebate";

    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));
    int i = 0;
    int row_count = 0;
    while (i < member_list.length()){
        if (member_list.getMember(i).type == 1){
            ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
            ui->tableWidget->setItem(row_count,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(i).name)));
            ui->tableWidget->setItem(row_count,1,new QTableWidgetItem( QString::number(member_list.getMember(i).id)));
            ui->tableWidget->setItem(row_count,2,new QTableWidgetItem( QString::number(member_list.getMember(i).rebate,'f',2)));
            row_count++;
        }
        i++;
    }
    //Sets table cells to be uneditable in GUI
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->TableTitle->setText("List of Rebates for Preferred Members");

}

/**********************************************************
 * void MainWindow::displayAllItems()
 * _______________________________________________________
 * Precondition:
 *  - member_list defined
 *  - item_lists defined
 * Postcondition:
 *  - displays all items, their prices, and the total
 *      quantity of them sold
**********************************************************/
void MainWindow::displayAllItems()
{
    tableClear();

    int row_count = 0;
    bool found;
    Item current_item;
    int new_quantity;

    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setColumnWidth(0,150);

    std::string labels = "Item,Price,Quantity";
    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));

    for (int i = 0; i < item_lists.length();i++){
        for (int j = 0; j < item_lists.get_n(i).length(); i++){
            found = false;
            for (int k = 0; k < row_count; k++){
                if (ui->tableWidget->item(k,0)->text().toStdString() == item_lists.get_n(i).get_item(j).name){
                    new_quantity = ui->tableWidget->item(0,2)->text().toInt()+item_lists.get_n(i).get_item(j).quantity;
                    ui->tableWidget->item(k,2)->setText(QString::number(new_quantity));
                    found = true;
                    break;
                }
            }
            if (!found){
                ui->tableWidget->setRowCount(row_count + 1);
                current_item = item_lists.get_n(i).get_item(j);
                ui->tableWidget->setItem(row_count,0,new QTableWidgetItem(QString::fromStdString(current_item.name)));
                ui->tableWidget->setItem(row_count,1,new QTableWidgetItem(QString::number(current_item.price)));
                ui->tableWidget->setItem(row_count,2,new QTableWidgetItem(QString::number(current_item.quantity)));
                row_count++;
            }
        }
    }
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->TableTitle->setText("List of all items, price, and quantity sold");
}

/**********************************************************
 * void MainWindow::deleteMember()
 * _______________________________________________________
 * Precondition:
 *  - member_list defined
 * Postcondition:
 *  - deletes a specified member from the member_list
**********************************************************/
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

/**********************************************************
 * void MainWindow::viewMember()
 * _______________________________________________________
 * Precondition:
 *  - member_list defined
 * Postcondition:
 *  - displays a members information to the table
**********************************************************/
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
    int member_index;
    int memberID;

    if(ui->deleteMemberNameRadio->isChecked()){
        if (ui->RemoveNameBox->text().isEmpty()){
            displayMsgBox("Enter a name.");
            return;
        }
        std::string memberName = ui->RemoveNameBox->text().toStdString();
        member_index = member_list.findMember(member_list.getID(memberName));
        if (member_index == -1){
            displayMsgBox("User not found");
            return;
        }
    }
    else{
        if (ui->RemoveMemberNumBox->text().isEmpty()){
            displayMsgBox("Enter a name.");
            return;
        }
        memberID = ui->RemoveMemberNumBox->text().toInt();
        member_index = member_list.findMember(memberID);
        if (member_index == -1){
            displayMsgBox("User not found");
            return;
        }
    }

    tableClear();

    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setRowCount(1);

    std::string labels = "Name,ID,Type,Expiration Date";
    ui->tableWidget->setHorizontalHeaderLabels(QString::fromStdString(labels).split(","));

    ui->tableWidget->setItem(0,0,new QTableWidgetItem( QString::fromStdString(member_list.getMember(member_index).name)));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem( QString::number(member_list.getID(member_index))));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem( QString::fromStdString(member_list.getMember(member_index).getTypeString())));
    ui->tableWidget->setItem(0,3,new QTableWidgetItem( QString::fromStdString(member_list.getMember(member_index).exp_date.getString())));

    ui->tableWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);
    modify_status = 1;
    ui->ModifyMemberButton->setEnabled(false);
    ui->ApplyModifyMemberButton->setEnabled(true);
    delete_member_id = member_index;
    displayMsgBox("Please edit the member in the table, the press apply. Do any other action to cancel.");
}

/**********************************************************
 * void MainWindow::saveAll()
 * _______________________________________________________
 * Precondition:
 *  - member_list defined
 * Postcondition:
 *  - saves the member_list to the file in the correct
 *      format
**********************************************************/
void MainWindow::saveAll()
{
    member_list.write_members_to_file(DIRECTORY + "shoppers.txt");
}

