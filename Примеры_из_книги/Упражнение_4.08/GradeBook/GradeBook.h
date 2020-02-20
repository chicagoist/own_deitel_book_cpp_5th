#ifndef GRADEBOOK_H
#define GRADEBOOK_H
// Рис. 4.8: GradeBook.h
// Определение класса GradeBook, усредняющего оценки в группе. Элемент-функции определены в GradeBook.cpp
#include <string> // программа использует стандартный класс string
using std::string;
// определение класса GradeBook
class GradeBook
{
public:
    GradeBook( string ); // конструктор инициализирует название курса
    void setCourseName( string ); // функция для установки названия
    string getCourseName(); // функция для извлечения названия курса
    void dysplayMessage(); // вывести приветственное сообщение
    void determineClassAverage(); // усредняет введённые оценки
private:
    string courseName; // название курса для данного GradeBook
}; // конец класса GradeBook

#endif // GRADEBOOK_H
