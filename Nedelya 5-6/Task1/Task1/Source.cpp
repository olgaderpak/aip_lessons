#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	float r = 1;
	float x, y;
	std::cout << "������� x � y "; std::cin >> x >> y;
	float rc = sqrt(x * x + y * y);
	if (rc < r)
		std::cout << "��, ��������";
	else
		std:: cout << "�� ��������";

	return 0;
}