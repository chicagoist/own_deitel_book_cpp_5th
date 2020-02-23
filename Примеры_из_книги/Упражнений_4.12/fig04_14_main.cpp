// Рис. 4.14: fig04_14.cpp
// Создать GradeBook и вызвать его функцию determineClassAverage.

// включить определение класса GradeBook из GradeBook.h
#include "GradeBook.h"

int main()
{
  // создать объект myGradeBook класса GradeBook
  // и передать конструктору название курса
  GradeBook myGradeBook( "CS101 C++ Programming" );

  myGradeBook.displayMessage(); // вывести приветствие
  myGradeBook.determineClassAverage(); // найти среднее оценок
  return 0;
}
