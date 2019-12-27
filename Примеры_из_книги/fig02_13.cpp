// Рис. 2.13: fig02_13.cpp
// Сравнение целых чисел с помощью операторов if,
// операций отношения и равенства.
#include <iostream> // позволяет программе производить ввод и вывод

using std::cout; // программа использует cout
using std::cin;  // программа использует cin
using std::endl; // программа использует endl

// function main begins program execution
int main()
{
	int number1; // первое из сравниваемых чисел
	int number2; // второе из сравниваемых чисел

	cout << "Enter two integers to compare: "; // запросить ввод
	cin >> number1 >> number2; // прочитать два введенных числа

	if ( number1 == number2)
		cout << number1 << " == " << number2 << endl;

	if ( number1 != number2 )
		cout << number1 << " != " << number2 << endl;

	if ( number1 < number2)
		cout << number1 << " < " << number2 << endl;

	if ( number1 > number2 )
		cout << number1 << " > " << number2 << endl;

	if ( number1 <= number2 )
		cout << number1 << " <= " << number2 << endl;

	if ( number1 >= number2 )
		cout << number1 << " >= " << number2 << endl;

	return 0;

}
