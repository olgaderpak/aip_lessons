//Протабулировать функцию (шаг и диапазон задаёт пользователь): y = -(5+4x)(5+4х)+8x

#include <iostream>
#include <iomanip> 


int main() {

	float dx, xf, x;
	float f;

	setlocale(LC_ALL, "Russian");

	std::cout << "Введите шаг: ";
	std::cin >> dx;
	std::cout << "Введите начало диапазона: ";
	std::cin >> x;
	std::cout << "Введите конец диапазона: ";
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
