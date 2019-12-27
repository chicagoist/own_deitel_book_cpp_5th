/*
 * =====================================================================================
 *
 *       Filename:  fig03_01.cpp
 *
 *    Description:  Определить класс GradeBook с элемент-функцией displayMessage;
 *                  создать объект GradeBook и вызвать его функцию displayMessage;
 *
 *        Version:  1.0
 *        Created:  17.12.2019 13:36:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Chicagoist (mn), chicagoist@tuta.io
 *        Company:  freelance
 *
 * =====================================================================================
 */
#include <iostream>
using std::cout;
using std::endl;

// определение класса GradeBook
class GradeBook
{
  public:
    // функция,  выводящая приветствие пользователю GradeBook
    void displayMessage()
        {
          cout << "Welcome to the Grade Book!" << endl;
        } // конец функции displayMessage
}; // конец класса GradeBook

// функция main начинает исполнение программы
int main ()
{
  GradeBook myGradeBook; // создать объект класса GradeBook с именем myGradeBook
  myGradeBook.displayMessage(); // вызвать displayMessage объекта

  return 0; 
}


