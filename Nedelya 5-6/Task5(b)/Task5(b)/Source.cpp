#include <iostream>

//Напишите программу, которая принимает от пользователя координаты точки и определяет, попала ли точка в заштрихованную область. Б

int main()
{
	float x, y, l, r;

	r = 1;

	setlocale(LC_ALL, "Russian");

	std::cout << "Координаты точки : "; std::cin >> x >> y;

	l = sqrt(x * x + y * y);

	if ((l < r) && (y < (x / 2))) {
		std::cout << "Попадает в область";
	}
	else {
		std::cout << "Не попадает в область";
	}

	return 0;
}