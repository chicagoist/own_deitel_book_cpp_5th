// Упражнение 3.14. Была проблема с потоком данных и пришлось искать ответ в интернете
// http://bit.ly/2MMDbyY

#ifndef EMPLOYEE_H
#define EMPLOYEE_H



#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
    // конструктор с инициализацией элементов данных
    Employee();

    // функция установки имени
    void setFirstName(string firstname );

    // функция установки фамилии
    void setSecondName(string secondname);


    // функция установки зарплаты, с подтверждением данных
    void setMonthlySalaryEmployee(int salary);

    // функция получение имени
    string getFirstName();


    // функция получения фамилии
    string getSecondName();


    // функция получения значения зарплаты
    int getMonthlySalary();



    // функция выведения полной информации о работнике
    void displayEmployee();


private:
    string firstNameEmployee;
    string secondNameEmployee;
    int monthlySalaryEmployee;

};
#endif // EMPLOYEE_H
