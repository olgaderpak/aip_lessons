//��������������� ������� (��� � �������� ����� ������������): y = -(5+4x)(5+4�)+8x

#include <iostream>
#include <iomanip> 


int main() {

	float dx, xf, x;
	float f;

	setlocale(LC_ALL, "Russian");

	std::cout << "������� ���: ";
	std::cin >> dx;
	std::cout << "������� ������ ���������: ";
	std::cin >> x;
	std::cout << "������� ����� ���������: ";
	std::cin >> xf;
	std::cout << "\tx\t\ty" << std::endl;

	std::cout.precision(5);

	while (x < xf) {

		f = -(5+4*x)*(5+4*x)+8*x;
		std::cout << "\t"
			<< x
			<< "\t\t"
			<< f
			<< std::endl;
		x += dx;
	}
	return 0;
}
