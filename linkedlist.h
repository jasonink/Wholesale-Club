#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <vector>
#include <iostream>


//Node class definition
template<typename E>
struct Node{
    E data;
    Node *next;
    Node( E data ) : data(data), next(0) {}
};


template <class E>
class LinkedList
{
    private:
        Node<E> *head;
        Node<E> *tail;

    public:
        //Constructors/Destructor--------------------------------
        LinkedList() : head(0), tail(0) {}
        LinkedList(const LinkedList<E> &source);
        ~LinkedList();

        //Accessors----------------------------------------------
        void display() const;
        bool isEmpty() const;
        int length() const;
        E get_n(int i) const;

        //Mutators-----------------------------------------------
        void push_front(const E& value);
        void push_back(const E& value);
        void select_sort();
        void insert_sorted(const E& value);
        void remove_duplicates();
        void remove(int n);
        E& modify(int n);
        void insertAt(int data, int pos);


        //Operators----------------------------------------------
        LinkedList & operator=(const LinkedList<E> &source);

private:
        //Helper functions-------------------------------------
        void emptyList();
        int countNodes(Node<E>* ptr) const;

};

/**********************************************************
*
LinkedList Class
*_________________________________________________________
* This class is an implementation of a singly linked list
* of Node objects. Each Node contains a data value
* and a pointer to the next object in the list. The LinkedList
* Class creates a list using those pointers. Its members
* are head and tail, which are Node pointers to the first
* and last Nodes in the list, respectively. These two
* pointers allow the entire list to be traversed.
*
* The LinkedList Class includes the default constructor, an
* overloaded copy constructor, and the destructor. Also
* included are various accesor functions to read data from
* an LinkedList object, as well as mutator functions for an
* Node. Private member functions are implemented and
* used by the public functions. The copy assignment operator
* is overloaded for proper functionality.
*_________________________________________________________
***********************************************************/

//Default Constructor
//Sets all members to null
//template <typename E>
//LinkedList<E>::LinkedList(): head(NULL), tail(NULL){}


/************************************************************************
 * Copy constructor
 * --------------------------------------------------------------------
 * Overloads the copy constructor
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *      LinkedList list
 * POST-CONDITION:
 *     constructs an LinkedList that is a copy of argument LinkedList list
************************************************************************/
template <typename E>
LinkedList<E>::LinkedList(const LinkedList<E> &source)
{
    head = 0;
    tail = 0;

    for ( Node<E>* ptr = source.head; ptr != 0; ptr = ptr->next){
        push_back(ptr->data);
    }
}


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
template <typename E>
LinkedList<E>::~LinkedList()
{
    if (head == 0){
    }
    else{
        Node<E>*temp;
        for(temp = head; head != 0; temp = head){
            head = temp->next;
            delete temp;
        }
        head = 0;
        tail = 0;
    }
}

//ACCESSORS

/************************************************************************
 * display
 * --------------------------------------------------------------------
 * displays the data elements of the LinkedList from head to tail
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *     head and tail defined
 * POST-CONDITION:
 *
************************************************************************/
template <typename E>
void LinkedList<E>::display() const
{
    Node<E> *temp;
    for(temp = head; temp != 0; temp = temp->next){
        std::cout<< temp->data << " ";
    }
    delete temp;
}


/************************************************************************
 * length
 * --------------------------------------------------------------------
 * returns the number of nodes in the list
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *      head and tail defined
 * POST-CONDITION:
 *      returns the number of nodes in the list using the countNodes function
 *
************************************************************************/
template <typename E>
int LinkedList<E>::length() const
{
    return countNodes(head);
}



/************************************************************************
 * isEmpty
 * --------------------------------------------------------------------
 * Sees whether the list is empty
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *      head and tail defined
 * POST-CONDITION:
 *      returns a boolean answer to whether the list is empty
 *
************************************************************************/
template <typename E>
bool LinkedList<E>::isEmpty() const
{
    bool empty = true;
    if (head != 0)
        empty = false;
    return empty;
}


/************************************************************************
 * push_front
 * --------------------------------------------------------------------
 * inserts a data value (within a new node) at the front end of the list
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *     head and tail defined
 *      int value
 * POST-CONDITION:
 *     a new node is created with the data value as num and the next value
 *     as the previous head ptr
 *     head points to this new node
 *     if tails was initially null, set tail to point to this node
 *
************************************************************************/
template <typename E>
void LinkedList<E>::push_front(const E& value)
{
    Node<E> * temp = head;
    head = new Node<E>(value);
    head->next = temp;
    if(head->next==0){
        tail = head;
    }
}

/************************************************************************
 * push_back
 * --------------------------------------------------------------------
 * Inserts a value at the end of the list
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *      head and tail defined
 *      data value given
 * POST-CONDITION:
 *      new node is created with data value of value, next value NULL
 *      tail next is set to point to newly created node
 *      tail pointer pointed to the new node
 *      if list was empty, just create a node with data value of value
 *
************************************************************************/
template <typename E>
void LinkedList<E>::push_back(const E& value)
{
    //If list is empty, just create new node
    if (head == 0){
        head = new Node<E>(value);
        tail = head;
        head->next = 0;
    }
    //Else perform normal pushback
    else{
        Node<E>* temp = tail;
        tail = new Node<E>(value);
        tail->next = 0;
        temp->next = tail;
    }
}

/************************************************************************
 * select_sort
 * --------------------------------------------------------------------
 * sorts the list into ascending order using the selection sort
 * algorithm
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *     head and tail defined
 * POST-CONDITION:
 *     values of nodes in LinkedList will be in ascending order
 *     if list is empty or only 1 element in List, do nothing
 *
************************************************************************/
template <typename E>
void LinkedList<E>::select_sort()
{
    //If there are no elements or 1 element, do nothing
    if (head == 0 || head->next == 0){
    }
    //If there are 2 or more elements, run the selection sort algorithm
    else{
        E min;                                //Temp int to store min datavalue

        //Loop through every node in the LinkedList
        for (Node<E>* i = head; i != tail; i = i->next){
            //Set the min to be the current value
            min = i->data;

            //Compare the current value to the values proceeding it
            for(Node<E>* j = i; j != 0 ; j = j->next){
                //If a value is smaller than current min, swap it with current
                if (j->data < min){
                    i->data = j->data;
                    j->data = min;
                    min = i->data;
                }
            }
        }
    }
}

/************************************************************************
 * insert_sorted
 * --------------------------------------------------------------------
 * On a ascending ordered list, inserts a value in the correct position
 * for the list to remain in ascending order
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *     head and tail defined
 *      data value to insert
 * POST-CONDITION:
 *     value will be made a new node which is inserted at the correct
 *      position in the list so it remains in ascending order
 *     if list is empty, just make the list the value
 *
************************************************************************/
template <typename E>
void LinkedList<E>::insert_sorted(const E& value)
{
    Node<E> min = head;                            //temp pointer to Node

    //If list is empty, make a node for the value
    if (head == 0){
        head = new Node<E>(value);
        tail = head;
    }

    //Else if the value will be inserted at "first" position, insert and make head point to it
    else if (value < head->data){
        Node<E> newHead = new Node<E>(value);
        newHead->next = head;
        head = newHead;
    }
    //Else go through list and insert value at correct position
    else{
        //Find correct position to insert
        for(Node<E> i = head; i != 0; i = i->next){
            if (i->data <= value){
                min = i;
            }

            //If it has already found insertion point, simply exit loop
            if (value < i->data){
                break;
            }
        }

        //Create new node inserted "after" the min node
        Node<E>* newNode = new Node<E>(value);
        newNode->next = min->next;
        min->next = newNode;

        //If the value created a node at "end" of list, set tail to point to it
        if (min == tail){
            tail = newNode;
        }
    }

}

/************************************************************************
 * remove_duplicates
 * --------------------------------------------------------------------
 * removes all the duplicate values of numbers in the list (keeps first
 * instance of a number)
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *     head and tail defined
 * POST-CONDITION:
 *     LinkedList has no nodes with duplicate values.
 *     if list is empty or has one value, do nothing
 *
************************************************************************/
template <typename E>
void LinkedList<E>::remove_duplicates()
{
    std::vector<E> nums;                           //Int vector to hold all unique values in the LinkedList
    bool isDuplicate;                           //bool to hold whether the current number is a duplicate
    Node<E>* ptr;                              //Temp pointer to an Node

    //Put head data into nums
    nums.push_back(head->data);

    //For every node, from beginning to end
    //Note that the node that is compared is the next node to the node pointed to
    //Does not need to compare head since the first value cannot be a duplicate
    for (Node<E>* node = head; node->next != 0;){
        //Set initial isDuplicate to false
        isDuplicate = false;

        //Check if the current number is a duplicate
        for (unsigned int i = 0; i < nums.size() && isDuplicate == false; i++){
            if (node->next->data == nums[i]){
                isDuplicate = true;
            }
        }


        //If value is not duplicate, add it to nums list
        if (isDuplicate == false){
            //Add value of non-duplicate to nums list
            nums.push_back(node->next->data);
            //Set current node to its next node
            node = node->next;
        }
        //Else if duplicate, delete the node
        else{
            ptr = node->next->next;
            delete node->next;
            node->next = ptr;
        }

    }
}

template <typename E>
void LinkedList<E>::remove(int n)
{
    Node<E>* temp;
    Node<E>* temp2;
    temp = head;

    if(n == 0)
    {
        head = temp->next;
        delete temp;
        return;
    }
    else if (n == length()-1){
        for (int i = 0 ; i < n-1; i++){
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        return;
    }
    else
    {
        for (int i = 0 ; i < n-1; i++){
        temp = temp->next;
        }
        temp2 = temp->next;

        temp->next = temp2->next;
        delete temp2;
    }
}

template <typename E>
E &LinkedList<E>::modify(int n)
{
    Node<E>* temp = head;
    int count = 0;

    while (count < n){
        temp = temp->next;
        count++;
    }

    return temp->data;
}


template <typename E>
E LinkedList<E>::get_n(int i) const
{
    Node<E>* temp = head;
    int count = 0;

    while (count < i){
        temp = temp->next;
        count++;
    }

    return temp->data;
}


//PRIVATE MEMBER FUNCTIONS

/************************************************************************
 * countNodes
 * --------------------------------------------------------------------
 * recursively determines the number of nodes in the list from ptr to
 * end of list
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *      head and tail defined
 *      Node pointer ptr
 * POST-CONDITION:
 *      returns number of nodes in the list
 *
************************************************************************/
template <typename E>
int LinkedList<E>::countNodes(Node<E>* ptr) const
{
    int count = 1;
    Node<E>* temp = ptr;

    while (temp != tail){
        temp = temp->next;
        count++;
    }
    return count;
}



/************************************************************************
 * emptyList
 * --------------------------------------------------------------------
 * deletes all elements in the list and deallocates all remaining
 * dynamic memory
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *     head and tail defined
 * POST-CONDITION:
 *     deallocates all nodes in the list
 *     set head and tail to null
 *     if head was already null, does nothing
************************************************************************/
template <typename E>
void LinkedList<E>::emptyList()
{
    if (head == 0){
    }
    else{
        Node<E>*temp;
        for(temp = head; head != 0; temp = head){
            head = temp->next;
            delete temp;
        }
        head = 0;
        tail = 0;
    }
}


//OVERLOADED OPERATORS

/************************************************************************
 * operator= overload
 * --------------------------------------------------------------------
 * Overloads the copy assignment constructor
 * ---------------------------------------------------------------
 * PRE-CONDITION:
 *     head and tail defined
 *     LinkedList list
 * POST-CONDITION:
 *     clears all memory of object list
 *     Make object LinkedList a clone of the argument LinkedList
************************************************************************/
template <typename E>
LinkedList<E> & LinkedList<E>::operator=(const LinkedList<E> &source)
{
    emptyList();
    if (source.head == 0){
    }
    else{
        for ( Node<E>* ptr = source.head; ptr != 0; ptr = ptr->next){
            push_back(ptr->data);
        }
    }

    return *this;
}

//insert node at certain pos
template <typename E>
void LinkedList<E>::insertAt(int data, int pos)
{
    Node<E> *temp;
    temp->next = NULL;
    temp->data = data;
    Node<E> *cur;
    int i = 0;
    if(pos == 0)
    {
        if(head == NULL)
            head = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
    }
    else
    {
        Node<E> *temp2;
        temp2 = head;
        while(i !=(pos - 1))
        {
            temp2 = temp2->next;
            i++;
        }
        cur = temp2->next;
        temp2->next = temp;
        temp->next = cur;
        temp2 = NULL;
        delete temp2;
    }
    return head;
}

#endif // LINKEDLIST_H
