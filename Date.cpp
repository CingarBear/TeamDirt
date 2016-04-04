
#include "date.h"

Date::Date()
{
    day = -1;
    month = -1;
    year = 1;
}

Date::~Date(){}

/*********************************************************************
 * Class Method - SetDayMonthAndYear
 * ...................................................................
 * This method changes the day, month, and year members
 ********************************************************************/
void Date::SetDayMonthAndYear(int newDay,
                        int newMonth,
                        int newYear)
{
    day = newDay;
    month = newMonth;
    year = newYear;
}

/*********************************************************************
 * Class Method - SetDay
 * ...................................................................
 * This method changes the day member
 ********************************************************************/
void Date::SetDay(int newDay)
{
    day = newDay;
}

/*********************************************************************
 * Class Method - SetMonth
 * ...................................................................
 * This method changes the month member
 ********************************************************************/
void Date::SetMonth(int newMonth)
{
    month = newMonth;
}

/*********************************************************************
 * Class Method - SetYear
 * ...................................................................
 * This method changes the year member
 ********************************************************************/
void Date::SetYear(int newYear)
{
    year = newYear;
}

/*********************************************************************
 * Class Method - GetDay
 * ...................................................................
 * This method returns the day member
 ********************************************************************/
int Date::GetDay()
{
    return day;
}

/*********************************************************************
 * Class Method - GetMonth
 * ...................................................................
 * This method returns the month member
 ********************************************************************/
int Date::GetMonth()
{
    return month;
}

/*********************************************************************
 * Class Method - GetYear
 * ...................................................................
 * This method returns the year member
 ********************************************************************/
int Date::GetYear()
{
    return year;
}

void Date::operator = (const Date & d)
{
    day 	 = d.day;
    month	 = d.month;
    year 	 = d.year;
}
