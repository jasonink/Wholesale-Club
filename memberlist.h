#ifndef MEMBERLIST_H
#define MEMBERLIST_H

struct MemberList
{
    std::string name;
    int id;
<<<<<<< HEAD
<<<<<<< HEAD
    //0 = basic, 1 = preferred, -1 = unknown
    int type;
    int exp_month;
    int exp_day;
    int exp_year;
    int total_spent;
    int rebate;

    Member(std::string n = "default_name", int i = 0, int t = -1, int m = 0,
           int d = 0, int y = 0, int spent = 0, int rb = 0):
           name(n), id(i), type(t), exp_month(m), exp_day(d), exp_year(y),
           total_spent(spent), rebate(rb) {}
=======
    std::string type;
    std::string expiration_date;
>>>>>>> parent of 9241575... Merge pull request #2 from inkink/branch1
=======
    std::string type;
    std::string expiration_date;
>>>>>>> parent of 9241575... Merge pull request #2 from inkink/branch1
};

struct MemberNode
{
    MemberList data;
    IntNode *next;
    IntNode *prev;
    IntNode( int data ) : data(data), next(0), prev(0) {}
};

class MemberList
{
private:
    IntNode* head;
    IntNode* tail;
public:
    MemberList();
    ~MemberList();

<<<<<<< HEAD
<<<<<<< HEAD
    void init_from_file(std::string filename);
    Member getMember(int n) const;
    int length() const;

    void addMember(std::string name, int id, int type, int exp_month, int exp_day, int exp_year);
    void deleteMember();

private:
    LinkedList<Member> list;

=======
=======
>>>>>>> parent of 9241575... Merge pull request #2 from inkink/branch1
    void display() const;
    void push_front(int value);
    void pop_front();
    void push_back(int value);
    void pop_back();
    bool remove(int value);
<<<<<<< HEAD
>>>>>>> parent of 9241575... Merge pull request #2 from inkink/branch1
=======
>>>>>>> parent of 9241575... Merge pull request #2 from inkink/branch1
};

#endif // MEMBERLIST_H
