//Протабулировать функцию (шаг и диапазон задаёт пользователь): y = sqrt(5 + 3/x) + 11*x + ctg(2*x+15)

#include <iostream>
#include <iomanip> 
#include<cmath>


int main() {

	float dx, xy, x,y;

	setlocale(LC_ALL, "Russian");

	std::cout << "Введите шаг: ";
	std::cin >> dx;
	std::cout << "Введите начало диапазона: ";
	std::cin >> x;
	std::cout << "Введите конец диапазона: ";
	std::cin >> xy;
	std::cout << "\tx\t\ty" << std::endl;

	std::cout.precision(5);

	while (x < xy) {

		y = sqrt(5 + 3/x) + 11*x + 1/tan(2*x+15);
		std::cout << "\t"
			<< x
			<< "\t\t"
			<< y
			<< std::endl;
		x += dx;
	}
	return 0;
}
