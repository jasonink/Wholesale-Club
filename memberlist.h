#ifndef MEMBERLIST_H
#define MEMBERLIST_H
#include <linkedlist.h>

struct MemberNode{

    std::string name;
    int id;
    int type;
    std::string expiration_date;

    MemberNode(std::string n, int i, int t, std::string ex): name(n), id(i), type(t), expiration_date(ex) {}
};

class MemberList{


private:
    LinkedList<MemberNode> list;

};

#endif // MEMBERLIST_H
