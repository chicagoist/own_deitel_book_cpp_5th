// Рис. 3.11: GradeBook.h
// Определение класса GradeBook. Файл представляет собой открытый
// интерфейс GradeBook, не раскрывая реализации элемент-функций
// класса, которые определяются в GradeBook.cpp
// Упражнение 3.11 с добавлением имени учителя и объявление его вместе с курсом
#include <string> // класс GradeBook использует стандартные строки
using std::string;

// определение класса GradeBook
class GradeBook
{
public:
    // конструктор инициализирует courseName и имя преподавателя
    //переданной строкой
    GradeBook( string name,  string nameOfProff);

    // функция для установки названия курса
    void setCourseName( string );

    // функция для получения названия курса
    string getCourseName();

    // функция для установки имени преподавателя
    void setProffName( string );

    // функция для получения имени преподавателя
    string getProffName();

    void displayMessage(); // вывести сообщение-приветствие пользователю GradeBook

private:
    string courseName; // название курса для данного GradeBook
    string courseProff; // имя преподавателя курса
}; // конец класса GradeBook

#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#endif // GRADEBOOK_H

