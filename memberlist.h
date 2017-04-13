#ifndef MEMBERLIST_H
#define MEMBERLIST_H
#include <linkedlist.h>
#include <fstream>
#include <date.h>

struct Member{

    std::string name;
    int id;
    //0 = basic, 1 = preferred, -1 = unknown
    int type;
    Date exp_date;
    int total_spent;
    int rebate;

    Member(std::string n = "default_name", int i = 0, int t = -1, int m = 0, int d = 0, int y = 0, int spent = 0, int rb = 0):
        name(n), id(i), type(t), exp_date(Date(m,d,y)), total_spent(spent), rebate(rb) {}

    std::string getTypeString()
    {
        if (type == 0){
            return "Basic";
        }
        else if (type == 1){
            return "Preferred";
        }
        else
            return "default";
    }
};

class MemberList {

public:
    MemberList();
    ~MemberList();

    void init_from_file(std::string filename);
    void write_members_to_file(std::string filename);

    //Accessors
    Member getMember(int n) const;
    int getID(int n) const;
    int length() const;
    int findMember(std::string name) const;
    int findMember(int id) const;

    //Mutators
    void addMember(std::string name, int id, int type, int exp_month, int exp_day, int exp_year);
    void deleteMember(int n);


private:
    LinkedList<Member> list;

};

#endif // MEMBERLIST_H
