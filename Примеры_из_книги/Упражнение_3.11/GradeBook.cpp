// Упражнение 3.11: GradeBook.cpp
// Определения элемент-фунхций GradeBook. Файл содержит
// реализацию фунхций, функция setProffName инициализирует имя препода.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // включить определение класса GradeBook

// конструктор инициализирует courseName переданной строкой
GradeBook::GradeBook(string name, string nameOfProff)
{
    setCourseName( name ); // инициализировать высовом set-функции
    setProffName( nameOfProff ); // инициализировать вызовом set-функции
} // конец конструктора GradeBook

// функция для установки названия курса
// гарантирует, что название курса содержит не более 25 символов
void GradeBook::setCourseName( string name )
{
    if ( name.length() <= 25 ) // если не более 25 символов
         courseName = name; // сохранить название курса в объекте

    if ( name.length() > 25 ) // если в названи более 25 символов
    {
        cout << "Name \"" << name << "\" exceeds maximum lenght. \n"
             << "Limiting courseName to first 25 characters.\n" << endl;

        // записать в courseName первые 25 символов пареметра name
        courseName = name.substr( 0, 25 ); // начать с 0б длина 25


    } // конец if
} // конец функции setCourseName

// функция для получения названия курса
string GradeBook::getCourseName()
{
    return courseName; // возвращатить courseName объекта
} // конец функции getCourseName

// функция для установки имени преподавателя
void GradeBook::setProffName( string nameOfProff )
{
    courseProff = nameOfProff; // сохранить имя преподавателя в объекте
} // конец функции setProffName


// функция для получения имени преподавателя
string GradeBook::getProffName()
{
    return courseProff; // возвратить courseProff объекта
} // конец функции getProffName


// вывести сообщение-приветствие пользователю GradeBook
void GradeBook::displayMessage()
{
    // вызвать getCourseName для получения courseName
    cout << "Welcome to the grade book for\n" << getCourseName()
        << endl << "This course is presented Ьу: " << getProffName()
        << "!" << endl;

} // конец функции displayMessage
