#include <iostream>

//Дана функция y=f(x). Найти значение функции по x: y = 2x - 10, если x > 3
//                                                  y = 10, если x = 3
//                                                  y = (2 * x+1)2 - 1, если x < 3


int main()
{
	setlocale(LC_ALL, "Russian");

	float x, y;

	std::cout << "Введите x = "; std::cin >> x;
	if (x > 3) {
		y = (2 * x) - 10;
	}
	else {
		if (x == 3) {
			y = 10;
		}
		else {
			y = ((2 * x + 1) * (2 * x + 1)) - 1;
		}
	}

	std::cout << "y = " << y;

	return 0;
}