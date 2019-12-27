// Рис. 2.5: fig02_05.cpp
// Программа сложения, показывающая сумму двух целых чисел.
#include <iostream> // позволяет программе производить ввод/вывод

// функция main начинает исполнение программы
int main()
{
	// объявление переменных
	int number1; // первое из складываемых
	int number2; // второе из складываемых чисел
	int sum; // сумма number1 и number2

	std::cout << "Enter first integer: "; // запросить данные
	std::cin >> number1; // прочитать первое число в number1

	std::cout << "Enter second integer: "; // запросить данные
	std::cin >> number2; // прочитать второе число в number2

	sum = number1 + number2; // сложить числа; записать сумму в sum

	std::cout << "Sum is " << sum << std::endl; // вывести сумму

	return 0;
}
