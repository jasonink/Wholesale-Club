#include "date.h"

Date::Date(): month(0),day(0),year(0){}

Date::Date(int m, int d, int y): month(m), day(d),year(y){}

int Date::getMonth() const
{
    return month;
}

void Date::setMonth(int value)
{
    month = value;
}

int Date::getDay() const
{
    return day;
}

void Date::setDay(int value)
{
    day = value;
}

std::string Date::getString() const
{
    return std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
}

int Date::getYear() const
{
    return year;
}

void Date::setYear(int value)
{
    year = value;
}


