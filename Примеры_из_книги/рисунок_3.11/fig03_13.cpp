// Рис. 3.13: fig03_13.cpp
// Демонстрация клacca GradeBook после отделения
// его интерфейса от реализации.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // включить определение класса GradeBook

// функция main начинает исполнение программы
int main()
{
    // создать два объекта класса GradeBook
    GradeBook gradeBook1 ( "CS101 Introduction to C++ Programming" );
    GradeBook gradeBook2 ( "CS102 Data Structures in C++");

    // вывести исходные значения courseName для каждого из объектов GradeBook
    cout << "gradeBook1 created for: " << gradeBook1.getCourseName()
         << "\ngradeBook2 created for: " << gradeBook2.getCourseName()
         << endl;
    return 0;
} // конец main
