#include <iostream>

int main()
{
	double x; // Объявляем переменную x

	std::cout << "Введите значение x: ";
	std::cin >> x; // Считываем x

	// Проверка: выводим то, что ввёл пользователь
	std::cout << "Вы ввели x = " << x << std::endl;

	return 0;
}