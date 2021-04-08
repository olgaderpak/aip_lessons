#include <iostream>
#include <cmath>
//Дана функция y=f(x). Найти значение функции по x: y = 2x - 10, если x > 0
//                                                  y = 0, если x = 0
//                                                  y = 2 * |x| - 1, если x < 0


int main()
{
	setlocale(LC_ALL, "Russian");

	float x, y;

	std::cout << "Введите x = "; std::cin >> x;
	if (x > 0) {
		y = (2 * x) - 10;
	}
	else {
		if (x == 0) {
			y = 0;
		}
		else {
			y = 2 * abs(x) - 1;
		}
	}

	std::cout << "y = " << y;

	return 0;
}