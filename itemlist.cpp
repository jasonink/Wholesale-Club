#include "itemlist.h"

/**********************************************************
 * ItemList::ItemList()
 * _______________________________________________________
 * Precondition:
 *  -N/A
 * Postcondition:
 *  -Initializes Item list
**********************************************************/
ItemList::ItemList(): list(LinkedList<Item>())
{

}

/**********************************************************
 * int ItemList::length() const
 * _______________________________________________________
 * Precondition:
 *  -N/A
 * Postcondition:
 *  -Returns length of list(number of items)
**********************************************************/
int ItemList::length() const
{
    return list.length();
}

/**********************************************************
 * Item ItemList::get_item(int n) const
 * _______________________________________________________
 * Precondition:
 *  -n is defined
 * Postcondition:
 *  -Returns item at nth position in the list
**********************************************************/
Item ItemList::get_item(int n) const
{
    Item test = list.get_n(n);
    return test;
}

/**********************************************************
 * bool ItemList::init_from_file(std::string filename)
 * _______________________________________________________
 * Precondition:
 *  -file name is defined
 *  -file name exists
 * Postcondition:
 *  -Initializes item data(date,id,name,price,quantity)
 *  from file, and returns true if sucess, false if no
 *  file was opened
**********************************************************/
bool ItemList::init_from_file(std::string filename)
{
    std::ifstream ifile;
    ifile.clear();
    ifile.open(filename);

    list.~LinkedList();

    if (ifile.is_open()){

        std::string temp, input_name, trash;
        int input_id, input_qt, input_month, input_day, input_year;
        float input_price;
        while (getline(ifile, temp,'/')){

            //item purchase date
            input_month = std::stoi(temp);
            getline(ifile,temp,'/');
            input_day = std::stoi(temp);
            getline(ifile,temp,'\n');
            input_year = std::stoi(temp);

            //member id
            getline(ifile,temp,'\n');
            input_id = std::stoi(temp);

            //item name
            getline(ifile,temp,'\n');
            input_name = temp;

            ifile >> input_price;
            ifile >> input_qt;


            list.push_back(Item(input_name, input_id, input_price,input_qt, input_month, input_day, input_year));

        }
    }
    else{
        return false;
    }

    ifile.close();
    return true;

}

/**********************************************************
 * Item ItemList::get_item(int n) const
 * _______________________________________________________
 * Precondition:
 *  -list is intialized
 * Postcondition:
 *  -list is sorted by alphabetical order of names
**********************************************************/
void ItemList::sort_items()
{
    list.select_sort();
}
