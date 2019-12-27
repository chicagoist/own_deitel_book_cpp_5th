// Упражнение 3.12 класс Account

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account
{
public:
    Account( int balance);

    void setCredit( int credit );

    int getDebit( int debit );

    void getBalance();

private:
    int accountBalance = 0;
};

#endif // ACCOUNT_H
