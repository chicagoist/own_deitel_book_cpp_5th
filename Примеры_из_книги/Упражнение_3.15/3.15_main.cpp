/* Упражнение 3.15, проверить на достоверность данные месяца,
 * если не в диапазоне 1 - 12, то инициализировать значением 1.
 */

#include <iostream>
#include "Date.h"

int main()
{
    int month;
    int day;
    int year;


    cout << "Please enter a Month: ";
    cin >> month;
    cout << endl;

    cout << "Please enter a Day: ";
    cin >> day;
    cout << endl;

    cout << "Please enter a Year: ";
    cin >> year;
    cout << endl;

    Date myDate(month, day, year );

    cout << "So, your date is: ";

    myDate.displayDate();

    return 0;
}

