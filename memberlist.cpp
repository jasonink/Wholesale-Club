#include "memberlist.h"

MemberList::MemberList(): list(){}

MemberList::~MemberList()
{
    list.~LinkedList();
}

void MemberList::init_from_file(std::string filename)
{
    std::ifstream ifile;

    ifile.open(filename);

    if (ifile.is_open()){

        std::string temp, input_name;
        int input_id, input_type, input_month, input_day, input_year;

        while (getline(ifile, temp)){
            //member name
            input_name = temp;

            //member id
            getline(ifile,temp);
            input_id = std::stoi(temp);

            //membership type
            getline(ifile,temp);
            if (temp == "Basic"){
                input_type = 0;
            }
            else if (temp == "Preferred"){
                input_type = 1;
            }
            else{
                input_type = -1;
            }

            //member expiration date
            getline(ifile,temp,'/');
            input_month = std::stoi(temp);
            getline(ifile,temp,'/');
            input_day = std::stoi(temp);
            getline(ifile,temp,'\n');
            input_year = std::stoi(temp);

            list.push_back(Member(input_name, input_id, input_type, input_month, input_day, input_year));

        }
    }
    ifile.clear();
    ifile.close();
}

void MemberList::write_members_to_file(std::string filename)
{
    std::ofstream ofile;
    ofile.open(filename, std::ios::out);
    for (int i = 0; i < list.length(); i++){
        ofile << list.get_n(i).name << "\n";
        ofile << list.get_n(i).id << "\n";
        ofile << list.get_n(i).getTypeString() << "\n";
        ofile << list.get_n(i).exp_date.getString();
        if (i != list.length()-1)
            ofile << "\n";
    }
    ofile.close();
}

Member MemberList::getMember(int n) const
{
    Member test = list.get_n(n);
    return test;
}

int MemberList::length() const
{
    return list.length();
}

void MemberList::addMember(std::string name, int id, int type, int exp_month, int exp_day, int exp_year)
{
    Member newMember(name,id,type,exp_month,exp_day,exp_year);
    list.push_back(newMember);
}

//Return -1 if member not found
int MemberList::findMember(std::string name) const
{

    for (int i = 0; i < length(); i ++){
        if (getMember(i).name == name){
            return i;
        }
    }

    return -1;
}

//Return -1 if member not found
int MemberList::findMember(int id) const
{
    for (int i = 0; i < length(); i ++){
        if (getMember(i).id == id){
            return i;
        }
    }

    return -1;
}

void MemberList::deleteMember(int n)
{
    list.remove(n);
}

void MemberList::addSpent(int member_index, float price)
{
    list.modify(member_index).total_spent += price*(1+TAX_RATE/100);
}

void MemberList::setRebate(int member_index, float rebate)
{
    list.modify(member_index).rebate = rebate;
}

int MemberList::getID(int n) const
{
    Member test = list.get_n(n);
    return test.id;
}

std::string MemberList::getName(int id) const
{

}


