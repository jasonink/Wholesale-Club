#include "MemberList.h"

//Default Constructor
//Sets all members to null
MemberList::MemberList(): head(0), tail(0){}


/************************************************************************
 * destructor
 * --------------------------------------------------------------------
 * deallocates all remaining dynamic memory
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *     head and tail defined
 * POST-CONDITION:
 *     uses emptyList() to:
 *     deallocate all nodes in the list
 *     set head and tail to null
 *     if head and tail were already null, does nothing
************************************************************************/

MemberList::~MemberList()
{
    if (head == 0){
    }
    else{
        IntNode *temp;
        for(temp = head; head != 0; temp = head){
            head = temp->next;
            delete temp;
        }
        head = 0;
        tail = 0;
    }
}


/************************************************************************
 * display
 * --------------------------------------------------------------------
 * displays the data elements of the list from head to tail
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *     head and tail defined
 * POST-CONDITION:
 *
************************************************************************/
void MemberList::display() const
{
    IntNode *temp;
    for(temp = head; temp != 0; temp = temp->next){
        std::cout<< temp->data << " ";
    }
    delete temp;
}


/************************************************************************
 * push_front
 * --------------------------------------------------------------------
 * inserts a data value (within a new node) at the front end of the list
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *     head and tail defined
 *     int value
 * POST-CONDITION:
 *     a new node is created with the data value as num and the next value
 *     as the previous head ptr
 *     head points to this new node
 *     if tails was initially null, set tail to point to this node
 *
************************************************************************/
void MemberList::push_front(int value)
{
    IntNode* temp = new IntNode(value);
    if (head != 0){
        head->prev = temp;
        temp->next = head;
    }
    head = temp;
    if(head->next==0){
        tail = head;
    }
}


/************************************************************************
 * pop_front
 * --------------------------------------------------------------------
 * removes the value at the front end of list by removing the node
 * that contains that value
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *     head and tail defined
 * POST-CONDITION:
 *     initial node at front of list is deallocated
 *     head points to the old second node, which becomes the new head
 *     if list is empty (head and tail null), do nothing
 *
************************************************************************/

void MemberList::pop_front()
{
    if (head == 0){
    }
    else{
        IntNode *temp = head;
        head = temp->next;
        delete temp;
        if (head == 0){
            tail = 0;
        }
    }
}


/************************************************************************
 * push_back
 * --------------------------------------------------------------------
 * Inserts a value at the end of the list
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *      head and tail defined
 *      int value given
 * POST-CONDITION:
 *      new node is created with data value of value, next value NULL
 *      tail next is set to point to newly created node
 *      tail pointer pointed to the new node
 *      if list was empty, just create a node with data value of value
 *
************************************************************************/

void MemberList::push_back(int value)
{
    //If list is empty, just create new node
    if (head == 0){
        head = new IntNode(value);
        tail = head;
    }
    //Else perform normal pushback
    else{
        IntNode * temp = tail;
        tail = new IntNode(value);
        tail->prev = temp;
        temp->next = tail;
    }
}


/************************************************************************
 * pop_back
 * --------------------------------------------------------------------
 * removes the value at the end of list by removing the node
 * that contains that value
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *     head and tail defined
 * POST-CONDITION:
 *     initial node at end of list is deallocated
 *     tail points to the old second node, which becomes the new tail
 *     if list is empty (head and tail null), do nothing
 *
************************************************************************/

void MemberList::pop_back()
{
    if (head == 0){
    }
    else{
        if (head == tail){
            head = 0;
        }
        IntNode *temp = tail;
        tail = tail->prev;
        delete temp;
        if (tail != 0){
            tail->next = 0;
        }
    }
}


/************************************************************************
 * remove
 * --------------------------------------------------------------------
 * removes all nodes that contains the value. returns a boolean for if a
 * node containing the value was removd
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *     head and tail defined
 * POST-CONDITION:
 *     all nodes with data value value are removed, adjacent nodes
 *     prev and next values changed accordingly
 *     if list is empty (head and tail null), do nothing
 *
************************************************************************/

bool MemberList::remove(int value)
{
    bool ans = false;                       //Temp bool to return

    if (head == 0){
    }
    else{
        IntNode* temp, *temp2;
        for (temp = head; temp != 0;){
            if (temp->data == value){
                if (temp == head){
                    temp = temp->next;
                    pop_front();
                }
                else if (temp == tail){
                    temp = 0;
                    pop_back();
                }
                else{
                    temp2 = temp;
                    temp = temp->prev;
                    temp->next = temp2->next;
                    delete temp2;
                }
                ans = true;
            }
            else{
                temp = temp->next;
            }
        }
    }
    return ans;
}

void MemberList::addMember(std::string name, int id, int type, int exp_month, int exp_day, int exp_year)
{
    Member newMember(name,id,type,exp_month,exp_day,exp_year);
    list.push_back(newMember);
}
