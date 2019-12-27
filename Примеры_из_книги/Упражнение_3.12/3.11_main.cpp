#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main()
{
    Account accountJohn( 500 );
    cout << "Balance of John's account is: ";
    accountJohn.getBalance();
    cout << endl;
    cout << "Add new debit summ to John's account: ";
    int y;
    cin >> y;
    accountJohn.setCredit( y );
    cout << endl;
    cout << "Balance of John's account after add new summ is: ";
    accountJohn.getBalance();
    cout << endl;
    cout << "Get some money from John's account: ";
    int x;
    cin >> x;
    accountJohn.getDebit( x );
    cout << endl;
    cout << "Balance of John's account after last withdraw is: ";
    accountJohn.getBalance();
    cout << endl;


/*
    Account accountMax( 0 );
    cout << "Balance of Max's account is: ";
    accountMax.getBalance();
    cout << endl;
    cout << "Add new debit summ to Max's account: ";
    int a;
    cin >> a;
    accountMax.setCredit( a );
    cout << endl;
    cout << "Balance of Max's account after add new summ is: ";
    accountMax.getBalance();
    cout << endl;
    cout << "Get some money from Max's account: ";
    int b;
    cin >> b;
    accountMax.getDebit( b );
    cout << endl;
    cout << "Balance of Max's account after last withdraw is: ";
    accountMax.getBalance();
    cout << endl;


    Account accountMinus( -30 );
*/
    return 0;
}

