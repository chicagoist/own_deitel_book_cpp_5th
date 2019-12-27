// Рис.3.7: fig03_07.cpp
// Создание несхольких объектов класса GradeBook и использование
// конструктора GradeBook для спецификации названия курса
// при создании каждого из объектов GradeBook .
#include <iostream>
using std::endl;
using std::cout;

#include <string> // программа испоользует стандартный класс string
using std::string;

// определение класса GradeBook
class GradeBook
{
public:
    // конструктор инициализирует courseName переданной строкой
    GradeBook( string name )
    {
        setCourseName( name ); // инициализировать высовом set-функции
    } // конец конструктора GradeBook


    // функция для установки названия курса
    void setCourseName( string name )
    {
        courseName = name; // сохранить название курса в объекте
    } // конец функции setCourseName


    // функция для получения названия курса
    string getCourseName()
    {
        return courseName; // возвращатить courseName объекта
    } // конец функции getCourseName


    // вывести сообщение-приветствие пользователю GradeBook
    void displayMessage()
    {
        // вызвать getCourseName для получения courseName
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    } // конец функции displayMessage


private:
    string courseName; // название курса для данного GradeBook

}; // конец класса GradeBook



// функция main начинает исполнение программы
int main()
{
    // создать два объекта класса GradeBook
    GradeBook gradeBook1 ( "CS101 Introduction to C++ Programming" );
    GradeBook gradeBook2 ( "CS102 Data Structures in C++");

    // вывести исходные значения courseName для каждого из объектов GradeBook
    cout << "gradeBook1 created for: " << gradeBook1.getCourseName() << "\ngradeBook2 created for: " << gradeBook2.getCourseName() << endl;


    return 0;
}

