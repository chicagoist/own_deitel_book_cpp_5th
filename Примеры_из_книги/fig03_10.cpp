// Рис. 3.10: fig03_10.срр
// Включение клacca GradeBook из GradeBook.h в rлавню программу.
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

