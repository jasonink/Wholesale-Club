#include "itemlist.h"

ItemList::ItemList()
{

}

//Returns true if success, false if no file was opened
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
