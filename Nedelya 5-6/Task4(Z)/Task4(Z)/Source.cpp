#include <iostream>

//Напишите программу, которая принимает от пользователя координаты точки и определяет, попала ли точка в заштрихованную область. З


int main()
{
	setlocale(LC_ALL, "Russian");

	float x, y, l;

	std::cout << "Координаты точки : "; std::cin >> x >> y;

	l = sqrt(x * x + y * y);

	if ((l < 1) && (x > 0)) {
		std::cout << "Попадает";
	}
	else {
		if ((y < 1) && (y > (x - 1)) && (x > 0)) {
			std::cout << "Попадает";
		}
		else {
			std::cout << "Не попадает";
		}
	}
	return 0;
}