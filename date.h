#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include <time.h>
#include <vector>
#include <algorithm>
#include <stdlib.h>

#ifndef DATE_H_
#define DATE_H_


/*********
 * ENUMS *
 *********/
enum Month
{
    Jan,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};


enum Day
{
    Mon,
    Tues,
    Wed,
    Thurs,
    Fri,
    Sat,
    Sun
};


/*********************************************************************
 * Class - Date
 * ...................................................................
 * This is a class that allows the user to create an object that
 * has the attributes of a day, month and a year
 ********************************************************************/
class Date
{
    public:
        Date();
        ~Date();

        void SetDayMonthAndYear(int newDay,
                                int newMonth,
                                int newYear);
        void SetDay(int newDay);
        void SetMonth(int newMonth);
        void SetYear(int newYear);

        int GetDay();
        int GetMonth();
        int GetYear();

        void operator = (const Date & d);

    private:
        int day;
        int month;
        int year;


};


#endif /* DATE_H_ */
