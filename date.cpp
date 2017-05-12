#include "date.h"

/**********************************************************
 * Default Constructor: Date()
 * _______________________________________________________
 * Precondition:
 *  -N/A
 * Postcondition:
 *  -Sets private member variables month, day, year to 0
***********************************************************/
Date::Date(): month(0),day(0),year(0){}

/**********************************************************
 * 3 Parameter Constructor: Date(int m, int d, int y)
 * _______________________________________________________
 * Precondition:
 *  -m, d, y are defined
 * Postcondition:
 *  -Sets private member variables month, day, year to m, d,
 *  y respectively
***********************************************************/
Date::Date(int m, int d, int y): month(m), day(d),year(y){}

/**********************************************************
 * int Date::getMonth() const
 * _______________________________________________________
 * Precondition:
 *  -N/A
 * Postcondition:
 *  -Returns month
**********************************************************/
int Date::getMonth() const
{
    return month;
}

/**********************************************************
 * void Date::setMonth(int value)
 * _______________________________________________________
 * Precondition:
 *  -value is defined in parameter
 * Postcondition:
 *  -Sets month to value
**********************************************************/
void Date::setMonth(int value)
{
    month = value;
}

/**********************************************************
 * int Date::getDay() const
 * _______________________________________________________
 * Precondition:
 *  -N/A
 * Postcondition:
 *  -Returns day
**********************************************************/
int Date::getDay() const
{
    return day;
}

/**********************************************************
 * void Date::setDay(int value)
 * _______________________________________________________
 * Precondition:
 *  -value is defined
 * Postcondition:
 *  -sets day to value
**********************************************************/
void Date::setDay(int value)
{
    day = value;
}

/**********************************************************
 * std::string Date::getString() const
 * _______________________________________________________
 * Precondition:
 *  -N/A
 * Postcondition:
 *  -returns string of the date, in mm/dd/yyyy format
**********************************************************/
std::string Date::getString() const
{
    return std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
}

/**********************************************************
 * void Date::operator=(const Date &date)
 * _______________________________________________________
 * Precondition:
 *  -none
 * Postcondition:
 *  -overloads the assignment operator
**********************************************************/
void Date::operator=(const Date &date)
{
    month = date.getMonth();
    day = date.getDay();
    year = date.getYear();
}

/**********************************************************
 * int Date::getYear() const
 * _______________________________________________________
 * Precondition:
 *  -N/A
 * Postcondition:
 *  -Returns year
**********************************************************/
int Date::getYear() const
{
    return year;
}

/**********************************************************
 * void Date::setYear(int value)
 * _______________________________________________________
 * Precondition:
 *  -value is defined
 * Postcondition:
 *  -sets year to value
**********************************************************/
void Date::setYear(int value)
{
    year = value;
}


