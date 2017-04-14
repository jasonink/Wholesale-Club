#ifndef ITEMLIST_H
#define ITEMLIST_H
#include "linkedlist.h"
#include "string"
#include "date.h"
#include "fstream"

struct Item{
    std::string name;
    int member_id;
    float price;
    int quantity;
    Date purchase_date;

    Item(std::string n = "default", int i = 0, float p = 0, int q = 0, int m = 0, int d = 0, int y = 0):
        name(n), member_id(i),price(p),quantity(q),purchase_date(Date(m,d,y)){}
};

//bool operator< (const Item& item_1, const Item &f) {return i >  f.foodID;}


class ItemList
{
public:
    ItemList();
    int length() const;
    Item get_item(int n) const;

    bool init_from_file(std::string filename);

private:
    LinkedList<Item> list;
};

#endif // ITEMLIST_H
