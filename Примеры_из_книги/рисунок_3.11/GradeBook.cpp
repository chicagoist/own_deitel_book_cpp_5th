// Рис. 3.12: GradeBook.cpp
// Определения элемент-фунхций GradeBook. Файл содержит
// реализацию фунхций, прототипы которwх объявлены в GradeBook.h
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
void GradeBook::setCourseName( string name )
{
    courseName = name; // сохранить название курса в объекте
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
