#ifndef DATE_H
#define DATE_H
#include "string"

class Date
{
public:
    Date();
    Date(int m, int d, int y);

    int getMonth() const;
    void setMonth(int value);

    int getYear() const;
    void setYear(int value);

    int getDay() const;
    void setDay(int value);

    std::string getString() const;

private:
    int month;
    int day;
    int year;
};

#endif // DATE_H
