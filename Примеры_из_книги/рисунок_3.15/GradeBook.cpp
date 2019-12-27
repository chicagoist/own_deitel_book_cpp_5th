// Рис. 3.16: GradeBook.cpp
// Определения элемент-фунхций GradeBook. Файл содержит
// реализацию фунхций, функция setCourseName производит подтверждение данных.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // включить определение класса GradeBook

// конструктор инициализирует courseName переданной строкой
GradeBook::GradeBook( string name )
{
    setCourseName( name ); // инициализировать высовом set-функции
} // конец конструктора GradeBook

// функция для установки названия курса
// гарантирует, что название курса содержит не более 25 символов
void GradeBook::setCourseName( string name )
{
    if ( name.length() <= 25 ) // если не более 25 символов
         courseName = name; // сохранить название курса в объекте

    if ( name.length() > 25 ) // если в названи более 25 символов
    {
        // записать в courseName первые 25 символов пареметра name
        courseName = name.substr( 0, 25 ); // начать с 0б длина 25

        cout << "Name \"" << name << "\" exceeds maximum lenght. \n"
             << "Limiting courseName to first 25 characters.\n" << endl;
    } // конец if
} // конец функции setCourseName

// функция для получения названия курса
string GradeBook::getCourseName()
{
    return courseName; // возвращатить courseName объекта
} // конец функции getCourseName

// вывести сообщение-приветствие пользователю GradeBook
void GradeBook::displayMessage()
{
    // вызвать getCourseName для получения courseName
    cout << "Welcome to the grade book for\n" << getCourseName()
         << "!" << endl;
} // конец функции displayMessage
