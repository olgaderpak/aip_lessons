#include <iostream>

int main() {

	int a, b, c, d, h;

	std::cout << "Storona a:";
	std::cin >> a;

	std::cout << "Storona b:";
	std::cin >> b;

	std::cout << "Storona c:";
	std::cin >> c;

	std::cout << "Storona d:";
	std::cin >> d;

	std::cout << "Visota h:";
	std::cin >> h;

	std::cout << "Perimetr trapezii: " << a + b + c + d;
	std::cout << "\nPloshad' trapezii: " << (a + b) / 2 * h << std::endl;
	
	return 0;

}