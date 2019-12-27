// Рис. 3.17: fig03_17.срр
// Создание объекта GradeBook; демонстрация подтверждения данных.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // включить определение класса GradeBook

// функция main начинает исполнение программы
int main()
{
    // создать два объекта класса GradeBook
    // исходное имя курса для gradeBook1 слишком длинное
    // и добавляем разные имена преподавателей
    GradeBook gradeBook1 ( "CS101 Introduction to Programming C++",
                           "James Bond" );
    GradeBook gradeBook2 ( "CS102 C++ Data Structures",
                           "Sandra Boolock");

    // вывести исходные значения courseName для каждого из объектов GradeBook
    cout << "gradeBook1's initial course name is: "
         << gradeBook1.getCourseName()
         << "\ngradeBook2's initial course name is: "
         << gradeBook2.getCourseName() << endl;

   // модифицировать courseName для gradeBook1 (корректной строкой)
    gradeBook1.setCourseName( "CS101 C++ Programming" );

    // вывести courseName каждого GradeBook
    cout << "\ngradeBook1's course name is: ";
     gradeBook1.displayMessage();
    cout << "\ngradeBook2's course name is: ";
     gradeBook2.displayMessage();
    cout << endl;

    return 0;
} // конец main

