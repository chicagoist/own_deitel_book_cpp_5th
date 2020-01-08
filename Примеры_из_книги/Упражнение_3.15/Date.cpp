#include <iostream>
#include "Date.h"

using namespace std;


    Date::Date(int month, int day, int year) {

        setMonth(month);
        setDay(day);
        setYear(year);

    }

    void Date::setDay(int day)
    {
        dateDay = day;
    }

    void Date::setMonth(int month)
    {
        if( month < 1 || month > 12 )
        {
            dateMonth = 1;
            cout << "The error Month. Try again. I initilaise Month wit number 1\n";

        }

        if( month >= 1 && month <= 12 )
        {
            dateMonth = month;
        }
    }

    void Date::setYear(int year)
    {
        dateYear = year;
    }



    int Date::getDay()
    {
        return dateDay;
    }

    int Date::getMonth()
    {
        return dateMonth;
    }

    int Date::getYear()
    {
        return dateYear;
    }

    void Date::displayDate()
    {
        cout << "The Date is: " << getMonth() << "/" << getDay() << "/" << getYear() << endl;
    }


