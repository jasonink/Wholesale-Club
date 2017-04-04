#ifndef MEMBERLIST_H
#define MEMBERLIST_H

struct MemberList
{
    std::string name;
    int id;
    std::string type;
    std::string expiration_date;
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

    void display() const;
    void push_front(int value);
    void pop_front();
    void push_back(int value);
    void pop_back();
    bool remove(int value);
};

#endif // MEMBERLIST_H
