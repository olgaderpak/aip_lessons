#include <iostream>

//�������� ���������, ������� ��������� �� ������������ ���������� ����� � ����������, ������ �� ����� � �������������� �������. �

int main()
{
	float x, y, l, r;

	r = 1;

	setlocale(LC_ALL, "Russian");

	std::cout << "���������� ����� : "; std::cin >> x >> y;

	l = sqrt(x * x + y * y);

	if ((l < r) && (y < (x / 2))) {
		std::cout << "�������� � �������";
	}
	else {
		std::cout << "�� �������� � �������";
	}

	return 0;
}