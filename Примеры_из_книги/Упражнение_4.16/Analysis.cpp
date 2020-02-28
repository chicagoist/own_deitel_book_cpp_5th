// Рис. 4.17: Analysis.cpp
// Определения элеиент-функция класса Analysis,
// который анализирует результаты экзаиенов.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// включить определение класса Analysis из Analysis.h
#include "Analysis.h"

// обработать экзаменационные результаты 10 студентов
void Analysis::processExamResults()
{
    // инициализация переменных при объявлении
    int passes = 0; // число сдавших
    int failures = 0; // число проваливавшихся
    int studentCounter = 1; // счётчик студентов
    int result; // один результат экзамена ( 1 = сдал, 2 = не сдал )

    // обработать 10 студентов, используя цикл по счетчику
    while ( studentCounter <= 10 )
    {
        // запросить у пользователя и ввести значение
        cout << "Enter result (1 = pass, 2 = fail): ";
        cin >> result; // ввести результат

        // МОЁ ДОПОЛНЕНИЕ ДЛЯ ПРОВЕРКИ ЗНАЧЕНИЙ 1 или 2,
        // ЕСЛИ НИ 1 и не 2 ТОГДА СБРОС ВСЕХ ДАННЫХ И НАЧАТЬ СНАЧАЛА
        if ( result == 1 || result == 2 )
        {
            // if...else, вложеный в while
            if ( result == 1 )           // если result равен 1,
            {
                passes = passes + 1;     // увеличить passes
            }
            else                         // в противном случае result не 1,
            {
                failures = failures + 1; // поэтому увеличить failures
            }
            // увеличить studentCounter, чтобы цикл мог закончиться
            studentCounter = studentCounter + 1;

        } else
        {
            // СООБЩИТЬ ОБ ОШИБКЕ И ПРЕДЛОЖИТЬ НАЧАТЬ СНОВА
            cout << "YOU ENERED NOT CORRECT RESULT.\nSTART AGAIN FROM 0 " << endl;
            passes = 0; // число сдавших
            failures = 0; // число проваливавшихся
            studentCounter = 1; // счётчик студентов
            result; // один результат экзамена ( 1 = сдал, 2 = не сдал )

        }
    } // конец while

    // этап завершения; вывести число сдавших и не сдавших
    cout << "Passed " << passes << "\nFailed " << failures << endl;

    // определить, прошло ли более восьми студентов
    if ( passes > 8 )
    {
        cout << "Raise tuition" << endl;
    }

} // конец функции processExamResults

