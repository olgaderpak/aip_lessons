#include <iostream>

//�������� ���������, ������� ��������� �� ������������ ���������� ����� � ����������, ������ �� ����� � �������������� �������. �


int main()
{
	setlocale(LC_ALL, "Russian");

	float x, y, l;

	std::cout << "���������� ����� : "; std::cin >> x >> y;

	l = sqrt(x * x + y * y);

	if ((l < 1) && (x > 0)) {
		std::cout << "��������";
	}
	else {
		if ((y < 1) && (y > (x - 1)) && (x > 0)) {
			std::cout << "��������";
		}
		else {
			std::cout << "�� ��������";
		}
	}
	return 0;
}