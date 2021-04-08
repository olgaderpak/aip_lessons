#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	float r = 1;
	float x, y;
	std::cout << "Введите x и y "; std::cin >> x >> y;
	float rc = sqrt(x * x + y * y);
	if (rc < r)
		std::cout << "Да, попадает";
	else
		std:: cout << "Не попадает";

	return 0;
}