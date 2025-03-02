#include <iostream>
#include <cmath>      // для fabs, pow
#include <iomanip>    // для форматирования вывода

void exercise1()
{
	double x; // Объявляем переменную x

	std::cout << "Введите значение x: ";
	std::cin >> x; // Считываем x

	// Проверка: выводим то, что ввёл пользователь
	std::cout << "Вы ввели x = " << x << std::endl;

	// Части выражения
	double part1 = 1;                        // 1
	double part2 = x / 3.0;                  // x/3
	double part3 = std::fabs(x);             // |x|
	double part4 = (std::pow(x, 3) + 4) / 2.0; // (x^3 + 4)/2

	// Итоговое значение
	double result = part1 + part2 + part3 + part4;

	// Вывод результата с форматированием
	std::cout << std::fixed << std::setprecision(3) << "Результат = " << result << std::endl;
}

void exercise2()
{
	double v; // Объявляем переменную v

	std::cout << "Введите объем куба (v): ";
	std::cin >> v; // Считываем v

	// Проверка: выводим то, что ввёл пользователь
	std::cout << "Вы ввели v = " << v << std::endl;
}

int main()
{
	exercise1();
	exercise2();

	return 0;
}