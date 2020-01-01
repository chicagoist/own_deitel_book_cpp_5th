// Упражнение 3.14. Была проблема с потоком данных и пришлось искать ответ в интернете
// http://bit.ly/2MMDbyY
#include <iostream>
#include <string>
#include "Employee.h"



using namespace std;

/*
class Employee
{
public:
    // конструктор с инициализацией элементов данных
    Employee() {

        setFirstName( "firstname" ); // переменной  присваивается строка firstname
        setSecondName( "secondname" ); // переменной присваивается строка secondname
        setMonthlySalaryEmployee( 0 ); // переменной присваивается значение 0
    }

    // функция установки имени
    void setFirstName(string firstname )
    {
        firstNameEmployee = firstname;
    }

    // функция установки фамилии
    void setSecondName(string secondname)
    {
        secondNameEmployee = secondname;
    }

    // функция установки зарплаты, с подтверждением данных
    void setMonthlySalaryEmployee(int salary)
    {
        if( salary <= 0 ){
            monthlySalaryEmployee = 0;
        }

        if( salary > 0 ){
            monthlySalaryEmployee = salary;
        }
    }

    // функция получение имени
    string getFirstName(){

        return firstNameEmployee;
    }

    // функция получения фамилии
    string getSecondName(){

        return secondNameEmployee;
    }

    // функция получения значения зарплаты
    int getMonthlySalary(){

        return monthlySalaryEmployee;
    }

    // функция выведения полной информации о работнике
    void displayEmployee(){

        cout << "Information about the employee: \n" << "First name: " << getFirstName()
             << endl
             << "Second name: " << getSecondName()
             << endl
             << "Monthly salary: " << getMonthlySalary() << endl;
    }

private:
    string firstNameEmployee;
    string secondNameEmployee;
    int monthlySalaryEmployee;

};

*/

int main()
{
    Employee firsrEmployee; // создаём объект первого работника
    Employee secondEmployee; // создаём объект второго работника

    // Выводим нулевую информацию из обоих этих объектов
    cout << "First object: ";
    firsrEmployee.displayEmployee();
    cout << endl;
    cout << "Second object: ";
    secondEmployee.displayEmployee();
    cout << endl;
    cout << "***********************************************************************";
    cout << endl;

    // Введение нового имени в первый объект
    cout << endl; cout << "\n";
    cout << "Enter first name for the first employee: ";
    string first_firstname;
    getline(cin, first_firstname);
    firsrEmployee.setFirstName( first_firstname );

    // Введение новой фамилии в первый объект
    cout << endl; cout << "\n";
    cout << "Enter second name for the first employee: ";
    string first_secondname;
    getline(cin, first_secondname);
    firsrEmployee.setSecondName( first_secondname);


    // Введение новой месячной зараплаты в первый объект
    cout << endl; cout << "\n";
    cout << "Enter monthly salary for the first employee: ";
    int first_salary;
    cin >> first_salary;
    firsrEmployee.setMonthlySalaryEmployee(first_salary );
    cout << endl; cout << "\n";


    // Введение нового имени во второй объект
    cin.ignore(1000,'\n');
    cout << "Enter first name for the second employee: ";
    string second_firstname;
    getline(cin,second_firstname);
    secondEmployee.setFirstName(second_firstname);


    // Введение новой фамилии во второй объект
    cout << endl; cout << "\n";
    cout << "Enter second name for the second employee: ";
    string second_secondname;
    getline(cin, second_secondname );
    secondEmployee.setSecondName( second_secondname );

    // Введение новой месячной зараплаты во второй объект
    cout << endl; cout << "\n";
    cout << "Enter monthly salary for the second employee: ";
    int second_salary;

    cin >> second_salary;
    secondEmployee.setMonthlySalaryEmployee( second_salary );
    cout << endl; cin.ignore(1000,'\n');



    // Выведенеи обновлённых данных из обоих объектов
    cout << "First object: ";
    firsrEmployee.displayEmployee();
    cout << endl;

    cout << "Second object: ";
    secondEmployee.displayEmployee();
    cout << endl;

    // Годовая зарплата
    cout << "Early salary for first object is: " << 12 * firsrEmployee.getMonthlySalary()
         << endl;
    cout << endl;
    cout << "Early salary for second object is: " << 12 * secondEmployee.getMonthlySalary()
         << endl;
    cout << endl;

    // Поднимаем зарплату каждому на 10%
    cout << "Add for salary for each of employee \n";
    cout << "Enter a % for add to salary: ";
    int percentsalary;
    cin >> percentsalary;
    cout << endl;

    // Годовая зарплата с добавлением процента
    cout << "New early salary for first object is: " <<
            12 *( firsrEmployee.getMonthlySalary() +  (( percentsalary * firsrEmployee.getMonthlySalary()) / 100));

    cout << endl;
    cout << "New early salary for second object is: " <<
            12 *( secondEmployee.getMonthlySalary() +  (( percentsalary * secondEmployee.getMonthlySalary()) / 100));

    cout << endl;




    return 0;
}

