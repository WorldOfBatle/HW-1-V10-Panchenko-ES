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

	// Вычисляем ребро куба (кубический корень из v)
	double a = std::pow(v, 1.0 / 3.0);

	// Выводим результат с 3 знаками после запятой
	std::cout << std::fixed << std::setprecision(3) << "Ребро куба (a) = " << a << std::endl;
}

void exercise3()
{
	int number; // Создаём переменную

	std::cout << "Введите двузначное число: ";
	std::cin >> number; // Считываем число

	// Проверка: выводим то, что ввёл пользователь
	std::cout << "Вы ввели: " << number << std::endl;

	// Берём модуль числа, чтобы работать с положительными цифрами
	int absNumber = std::abs(number);

	// Извлекаем цифры
	int digit1 = absNumber / 10; // десятки
	int digit2 = absNumber % 10; // единицы

	// Сумма цифр
	int sum = digit1 + digit2;

	// Выводим сумму + проверка на нечётность, используем тернарный оператор:
	std::cout << "Сумма цифр = " << sum << ((sum % 2 != 0) ? " нечётная.\n" : " чётная.\n");
}

int main()
{
	exercise1();
	exercise2();
	exercise3();

	return 0;
}