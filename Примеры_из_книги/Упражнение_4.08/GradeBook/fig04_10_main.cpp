// Рис. 4.10: fig04_10.cpp
// Создать GradeBook и вызвать его функцию determineClassAverage.
#include "GradeBook.h" // включить определение класса GradeBook

int main()
{
    // создать объект myGradeBook класса GradeBook
    // и передать конструктору название курса
    GradeBook myGradeBook( "CS101 C++ Programming     for Masters" );

    myGradeBook.dysplayMessage(); // вывести приветствие
    myGradeBook.determineClassAverage(); // найти среднее 10 оценок
    return 0;
}

