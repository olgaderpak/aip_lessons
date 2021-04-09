//Пользователь задаёт число Ч и Х. Посчитать y: y = 1/x + 1/2x + 1/3x + ⋯ + 1/(Ч x)
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	float x, ch, sum;
	int i = 1;
	sum = 0;

	std::cout << "Введите числа Ч и Х: ";
	std::cin >> ch >> x;

	while (i <= ch) {

		sum = sum + 1 / (i * x);
		i = i + 1;
	}

	std::cout << "Ответ: " << sum;

	return 0;
}