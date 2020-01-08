#ifndef DATE_H
#define DATE_H


using namespace std;

class Date
{
public:
    Date(int month, int day, int year);

    void setDay(int day);

    void setMonth(int month);

    void setYear(int year);


    int getDay();

    int getMonth();

    int getYear();

    void displayDate();

private:
    int dateDay;
    int dateMonth;
    int dateYear;
};

#endif // DATE_H
