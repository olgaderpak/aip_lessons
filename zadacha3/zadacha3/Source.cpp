#include <iostream>

int main() {

	int num1, num2, num3;

	std::cout << "Vvedite num1: ";
	std::cin >> num1;

	std::cout << "Vvedite num2: ";
	std::cin >> num2;

	std::cout << "Vvedite num3: ";
	std::cin >> num3;

	std::cout << "Srednee arifmeticheskoe: " << (num1 + num2 + num3) / 3; 
	std::cout << "\nRaznost' udvoennoi summi num1,num3 i ytroennoi summi num2: " << 2*(num1 + num3)- 3*num2 <<

	std::endl;
	return 0;
}