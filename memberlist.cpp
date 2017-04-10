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

void MemberList::overwriteFile(std::string filename)
{
    std::ifstream ifile;
    std::ofstream ofile;
    std::string str;
    ofile.open(filename, std::ios::out);
    while(getline(ifile, str))
        ofile << str << std::endl;
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

int MemberList::getID(int n) const
{
    Member test = list.get_n(n);
    return test.id;
}
