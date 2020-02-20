// Рис. 4.9: GradeBook.cpp
// Определение элементов-функций класса GradeBook, реализующего
// программу вычисления среднего с повторением по счетчику.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h" // включить определение класса GradeBook

// конструктор инициализирует courseName переданной строкой
GradeBook::GradeBook( string name )
{
    setCourseName( name ); // проверить и сохранить courseName
} // конец конструктора GradeBook

// функция для установки названия курса;
// гарантирует, что название курса содержит не более 25 символов
void GradeBook::setCourseName( string name )
{
    if ( name.length() <= 25 ) // если в названии не более 25 симв.
        courseName = name; // сохранить название курса в объекте
    else // если название длиннее 25 символов
    { // записать в courseName первые 25 символов параметра name
        courseName = name.substr( 0, 25 ); // взять первые 25 символов
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
             << "Limiting courseName to first 25 characters. \n" << endl;
            } // конец if...else
    } // конец функции setCourseName

// функция для получения названия курса
string GradeBook::getCourseName()
{
    return courseName;
} // конец функции getCourseName;

// вывести сообщение-приветствие пользователю GradeBook
void GradeBook::dysplayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName()
         << "!\n" << endl;
} // конец функции dysplayMessage

// определить среднее по группе, исходя из 10 введенных оценок
void GradeBook::determineClassAverage()
{
    int total; // сумма оценок, введённых пользователем
    int gradeCounter; // номер следующей вводимой оценки
    int grade; // значение введЁнной пользователем оценки
    int average; // средняя оценка

    // этап инициализации
    total = 0; // инициализировать сумму
    gradeCounter = 1; // инициализировать счетчик цикла

    // этап обработки
    while ( gradeCounter <= 10 )
    {
        cout << "Enter grade: "; // запросить ввод
        cin >> grade; // ввести следующую оценку
        total = total + grade; // прибавить оценку к total
        gradeCounter = gradeCounter + 1; // увеличить счётчик на 1
    } // конец while

    // этап завершения
    average = total / 10; // целое деление даёт целый результат

    // вывести сумму и среднее значение оценок
    cout << "\nTotal of all 10 grades is " << total << endl;
    cout << "Class average is " << average << endl;
} // конец функции determineClassAverage
























