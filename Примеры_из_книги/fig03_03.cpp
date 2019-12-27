/*
 * =====================================================================================
 *
 *       Filename:  fig03_03.cpp
 *
 *    Description:  Определить класс GradeBook с функцией, принимающей пареметр;
 *                  создать объект GradeBook и вызвать его функцию displayMessage;
 *
 *        Version:  2.0
 *        Created:  17.12.2019 13:36:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Chicagoist (mn), chicagoist@tutta.io
 *        Company:  freelance
 *
 * =====================================================================================
 */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string> // программа использует стандартный класс string
using std::string;
using std::getline;

// определение класса GradeBook
class GradeBook
{
  public:
    // функция,  выводящая приветствие пользователю GradeBook
    void displayMessage( string courseName )
        {
          cout << "Welcome to the Grade Book for\n" << courseName << "!" << endl;
        } // конец функции displayMessage
}; // конец класса GradeBook

// функция main начинает исполнение программы
int main ()
{
  string nameOfCourse; // строка для сохранения названия курса
  GradeBook myGradeBook; // создать объект класса GradeBook с именем myGradeBook

  // Запросить и ввести название курса
  cout << "Please enter the course name: " << endl;
  getline(cin, nameOfCourse ); // прочитать название с пробелами
  cout << endl; // вывести пустую строку-разделитель
  
  // вызвать displayMessage объекта myGradeBook и передать
  // ей nameOfCourse в качестве аргумента
  myGradeBook.displayMessage( nameOfCourse );

  return 0; 
}


