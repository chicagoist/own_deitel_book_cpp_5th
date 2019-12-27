// Рис. 3.11: GradeBook.h
// Определение класса GradeBook. Файл представляет собой открытый
// интерфейс GradeBook, не раскрывая реализации элемент-функций
// класса, которые определяются в GradeBook.cpp
#include <string> // класс GradeBook использует стандартные строки
using std::string;

// определение класса GradeBook
class GradeBook
{
public:
    GradeBook( string );  // конструктор инициализирует courseName переданной строкой
    void setCourseName( string name ); // функция для установки названия курса
    string getCourseName(); // функция для получения названия курса
    void displayMessage(); // вывести сообщение-приветствие пользователю GradeBook
private:
    string courseName; // название курса для данного GradeBook
}; // конец класса GradeBook

#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#endif // GRADEBOOK_H

