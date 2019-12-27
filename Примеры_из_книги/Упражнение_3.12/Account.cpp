// Упражн. 3.12: Account.cpp
// Определения элемент-фунхций Account. Файл содержит
// реализацию фунхций, функция setCredit производит подтверждение данных.

#include "Account.h"
#include <iostream>

using std::cout;
using std::endl;

Account::Account( int balance )
// конструктолр, инициализирует счёт начальным
// балансом.
{
    setCredit( balance );

}

void Account::setCredit( int balance )
// Добавляет новую сумму к значению  accountBalance
{
    if ( balance >= 0 ){
        accountBalance = accountBalance + balance;
    }

    if ( balance < 0 ){
        cout << endl;
        cout << "The initial balance was invalid !\n";
        cout << "Try again later \n";
        //exit(0);
    }
}


// Функция для снятия суммы debit из элемента данных accountBalance
int Account::getDebit( int debit )
{
    if ( debit < accountBalance ){
        accountBalance = accountBalance - debit;
        return accountBalance;
    }

    if ( debit == accountBalance ){
        accountBalance = 0;
        return debit;
    }

    if ( debit > accountBalance ){
        cout << "Debit amount exceeded account balance. \n";
        cout << "Your balance is: " << accountBalance << endl;
        return accountBalance;
    }
}

void Account::getBalance()
// Распечатка значения атрибута accountBalance
{
    cout << "The current balance is: " << accountBalance << endl;
}
