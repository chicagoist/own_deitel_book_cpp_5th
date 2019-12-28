// Упражнение 3.13, класс Invoice создаёт накладную, используя четыре атрибута класса
#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>


using std::cout;
using std::endl;
using std::cin;
using std::string;

class Invoice
{
public:
    // Конструктор класса, инициализирует элементы данных при создании объекта
    Invoice( string articul, string notice, int amount, int price );

    void setArticul( string amount ); // функция инициализации переменной articulStaff
    void setNotice( string notice ); // функция инициализации переменной noticeStaff
    void setAmount( int amount ); // функция инициализации переменной amountStaff
    void setPrice( int price ); // функция инициализации переменной priceStaff

    string getArticul(); // функция получение переменной articulStaff
    string getNotice(); // функция получение переменной noticeStaff
    int getAmount(); // функция получение переменной amountStaff
    int getPrice(); // функция получение переменной priceStaff

    int getInvoiceAmount( int price, int amount ); // функция расчёта накладной по значениям  amountStaff и priceStaff

// функция получение переменной priceStaff
private:
    string articulStaff; // артикул товара
    string noticeStaff; // описание товара
    int amountStaff; // количество товара
    int priceStaff; // цена за единицу товара

};

#endif // INVOICE_H
