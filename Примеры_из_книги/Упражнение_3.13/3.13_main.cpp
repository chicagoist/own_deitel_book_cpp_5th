// Упражн. 3.13: 03_13_main.срр
// Создание объектов Invoice; демонстрация подтверждения данных.
#include <iostream>
#include "Invoice.h"


using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    cout << "Enter a articul of staff: ";
    string articul;
    getline(cin, articul);
    cout << endl;

    cout << "Enter a notice of staff: ";
    string notice;
    getline(cin, notice);
    cout << endl;

    cout << "Enter a amount of staff: ";
    int amount;
    cin >> amount;
    cout << endl;

    cout << "Enter a price of staff: ";
    int price;
    cin >> price;
    cout << endl;

    cout << "Now we creat your myInvoice object.";
    Invoice myInvoice( "articul", "notice", 0, 0);
    myInvoice.setArticul( articul );
    myInvoice.setNotice( notice );
    myInvoice.setAmount( amount );
    myInvoice.setPrice( price );

    cout << endl << endl;

    cout << "Please enter amount of your staff for sell: ";
    int amountToSell;
    cin >> amountToSell;
    cout << endl;

    cout << "The summ of your staff: " << "\"" << myInvoice.getArticul() << ", "
         << myInvoice.getNotice() << "\"" << "\n" << "for the selling is: "
         <<  myInvoice.getInvoiceAmount(price, amountToSell) << endl;

    return 0;
}

