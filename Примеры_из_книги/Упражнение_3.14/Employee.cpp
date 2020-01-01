#include "Employee.h"

// Упражнение 3.14. Была проблема с потоком данных и пришлось искать ответ в интернете
// http://bit.ly/2MMDbyY
#include <iostream>
#include <string>



using namespace std;


   Employee::Employee() {

        setFirstName( "firstname" ); // переменной  присваивается строка firstname
        setSecondName( "secondname" ); // переменной присваивается строка secondname
        setMonthlySalaryEmployee( 0 ); // переменной присваивается значение 0
    }

    // функция установки имени
    void Employee::setFirstName(string firstname )
    {
        firstNameEmployee = firstname;
    }

    // функция установки фамилии
    void Employee::setSecondName(string secondname)
    {
        secondNameEmployee = secondname;
    }

    // функция установки зарплаты, с подтверждением данных
    void Employee::setMonthlySalaryEmployee(int salary)
    {
        if( salary <= 0 ){
            monthlySalaryEmployee = 0;
        }

        if( salary > 0 ){
            monthlySalaryEmployee = salary;
        }
    }

    // функция получение имени
    string Employee::getFirstName(){

        return firstNameEmployee;
    }

    // функция получения фамилии
    string Employee::getSecondName(){

        return secondNameEmployee;
    }

    // функция получения значения зарплаты
    int Employee::getMonthlySalary(){

        return monthlySalaryEmployee;
    }

    // функция выведения полной информации о работнике
    void Employee::displayEmployee(){

        cout << "Information about the employee: \n" << "First name: " << getFirstName()
             << endl
             << "Second name: " << getSecondName()
             << endl
             << "Monthly salary: " << getMonthlySalary() << endl;
    }

