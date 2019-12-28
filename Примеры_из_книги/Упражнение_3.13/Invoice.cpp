// Упражн. 3.13: Incoice.cpp
// Определения элемент-фунхций Invoice. Файл содержит
// реализацию фунхций, функции set- производят подтверждение данных.
// Функция getInvoiceAmount возвращает значение суммы накладной

#include <iostream>
#include "Invoice.h"


using std::cout;
using std::endl;
using std::cin;
using std::string;


// Конструктор класса, инициализирует элементы данных при создании объекта
Invoice::Invoice( string articul, string notice, int amount, int price )
{
    setArticul( articul );
    setNotice( notice );
    setAmount( amount );
    setPrice( price );

}


// функция расчёта накладной по значениям  amountStaff и priceStaff
int Invoice::getInvoiceAmount( int price, int amount )
{

    if( amount >= amountStaff ){
        cout << "Error with the amount. Try again. \n";
        return 0;
    }

    return ( amount * price );
}

// функция инициализации переменной articulStaff
void Invoice::setArticul(string articul)
{
    articulStaff = articul;
}

// функция инициализации переменной noticeStaff
void Invoice::setNotice( string notice )
{
    noticeStaff = notice;
}

// функция инициализации переменной amountStaff
void Invoice::setAmount( int amount )
{
    if( amount < 0){
        amountStaff = 0;
        cout << "Error in amount. Try again. \n";
    }

    if( amount >= 0 ){
        amountStaff = amount;
    }

}

// функция инициализации переменной priceStaff
void Invoice::setPrice( int price )
{
    if( price < 0){
        priceStaff = 0;
        cout << "Error in price. Try again. \n";
    }

    if( price >= 0 ){
        priceStaff = price;
    }

}

// функция получение переменной articulStaff
string Invoice::getArticul()
{
    return articulStaff;
}


// функция получение переменной noticeStaff
string Invoice::getNotice()
{
    return noticeStaff;
}

 // функция получение переменной amountStaff
int Invoice::getAmount(){
    return amountStaff;
}

// функция получение переменной priceStaff
int Invoice::getPrice()
{
    return priceStaff;
}

