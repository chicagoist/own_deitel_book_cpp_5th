// Рис.4.21: fig04.21.срр
// Преинкремент и постинкремент.
#include <iostream>
using namespace std;

int main()
{
    int c;
    // продемонстрировать постинкримент
    c = 5; // присвоить 5 переменной c
    cout <<  c << endl; // печатает 5
    cout << c++ << endl; // печатает 5
    cout << c << endl; // печатает 6

    cout << endl; // пропустить строку

    // продемончтрировать преинкремент
    c = 5; // присвоить 5 переменной c
    cout << c << endl; // печатает 5
    cout << ++c << endl; // выполняет ПРЕИНКРЕМЕНТ и затем печатает 6
    cout << c << endl; // печатает 6
    return 0;
}

