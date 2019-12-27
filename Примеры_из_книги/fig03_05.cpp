/*
 * =====================================================================================
 *
 *       Filename:  fig03_05.cpp
 *
 *    Description:  Определить класс GradeBook,  содержащий элемент данных courseName
 *    и элемент-функции для установки и извличения его значений;
 *    Создать и протестировать объект GradeBook.
 *
 *        Version:  1.0
 *        Created:  17.12.2019 16:56:35
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
using std::cin;
using std::endl;

#include <string> // программа использует стандартный класс string
using std::string;
using std::getline;

// определение класса GradeBook
class GradeBook
{
  public:

    // функция,  устанавливающая название курса
    void setCourseName(string name )
    {
      courseName = name; // сохранить название курса в объекте
    } // конец функции setCourseName


    // функция, получающая название курса
    string getCourseName()
    {
      return courseName; // возвратить courseName объекта
    } // конец функции getCourseName


    // функция, выводящая сообщение-приветствие
    void displayMessage()
    {
      // этот оператор вызывает getCourseName,  чтобы получить
      // название курса, представленного данными GradeBook
      cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    } // конец функции displayMessage


  private:
    string courseName = "TEST !!!"; // название курса для данного GradeBook


}; // конец класса GradeBook

// функция main начинает исполнение программы
int main ()
{
  string nameOfCourse; // строка для хранения названия курса
  GradeBook myGradeBook; // создать объект класса GradeBook с именем myGradeBook

  // вывести исходное значение courseName
  cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;
  cout << "Initial course name is( use function myGrade.displayMessage ): ";
  myGradeBook.displayMessage();
  cout << endl;


  // запросить, ввести и установить название курса
  cout << "\nPlease enter the course name is: " << endl;
  getline( cin, nameOfCourse ); // прочитать название с пробелами
  myGradeBook.setCourseName ( nameOfCourse ); // установить название

  cout << endl; // выводит пустую строку-разделитель
  myGradeBook.displayMessage(); // вывести новое название курса

  return 0;
}

