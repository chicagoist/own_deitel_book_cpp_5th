// Рис. 4.13: GradeBook.cpp
// определение элемент-функций класса GradeBook,  реализующего
// вычисление среднего с повторением по контрольному значению счетчика.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed; // гарантирует вывод десятичной точки

#include <iomanip> // параметризованые манипуляторы потока
using std::setprecision; // устанавливает точность вывода чисел

// включить определение класса GradeBook из GradeBook.h
#include "GradeBook.h"

// конструктор инициализирует courseName переданной строкой
GradeBook::GradeBook( string name )
{
  setCourseName( name ); // проверить и сохранить courseName
} // конец конструктора GradeBook

// функция для установки названия курса;
// гарантирует, что название курса содержит не более 25 символов
void GradeBook::setCourseName( string name )
{
  if ( name.length() <=25 ) // если в названии не более 25 символов
    courseName = name; // сохранить название курса в объекте
  else // если название длиннее 25 символов
  { // запись с courseName первые 25 символов параметра name
    courseName = name.substr( 0, 25 ); // взять первые 25 символов
    cout << "Name \"" << name << "\" exceeds maximum lenght (25).\n"
      << "Limiting courseName to first 25 characters.\n" << endl;
  } // конец if...else
} // конец функции setCourseName

// функция для получения названия курса
string GradeBook::getCourseName()
{
  return courseName;
} // конец функции getCourseName

// вывести сообщение- приветствие пользователю GradeBook
void GradeBook::displayMessage()
{
  cout << "Welcome to the grade book for\n" << getCourseName()
    << "!\n" << endl;
} // конец функции displayMessage

// определить среднее по группе,  исходя из введённых оценок
void GradeBook::determineClassAverage()
{
  int total; // сумма оценок, введённых пользователем
  int gradeCounter; // число введённых оценок
  int grade; // значение оценки
  double average; // число с десятичной точкой для среднего

  // этап инициализации
  total = 0; // инициалировать сумму
  gradeCounter = 0; // инициализировать счётчик цикла

  // этап обработки
  // запросить ввод и прочитать введённую пользователем оценку
  cout << "Enter grade or -1 to quit: ";
  cin >> grade; // ввести оценку или контрольное значение

  // цикл, Пока не будет прочитано контрольное значение
  while ( grade != -1 ) // пока grade не равна -1
  {
    total = total + grade; // прибавить оценку к общей сумме total
    gradeCounter = gradeCounter + 1; // увеличить счётчик

    // запросить ввод и прочитать следующую оценку пользователя
    cout << "Enter grade or -1 to quit: ";
    cin >> grade; // ввести оценку или контрольное значение
  } // конец цикла while

  // этап завершения
  if ( gradeCounter != 0 ) // если введена хотя бы одна оценка
  {
    // вычислить среднее по всем введённым оценкам
    average = static_cast< double >( total ) / gradeCounter;

    // вывести сумму и среднее (с дыумя цифрами точности)
    cout << "\nTotal of all " << gradeCounter 
      << " grades entered is " << total << endl;
    cout << "Class average is "  << setprecision( 2 ) << fixed 
      << average << endl;
  } // конец if
  else // ничего не введено, вывести соответствующее сообщение
    cout << "No grades were entered" << endl;
} // конец функции determineClassAverage
