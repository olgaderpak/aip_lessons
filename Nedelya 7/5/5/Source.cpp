//Вычислить факториал введенного числа (с помощью циклов).

#include <iostream>

float fact(int n);

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;

	std::cout << "Введите число для вычисления факториала: ";
	std::cin >> n;
	std::cout << "Факториал для числа " << n << " = " << fact(n) << std::endl << std:: endl;


	return 0;
}

float fact(int n)
{
	if (n < 0) 
		return 0; 
	if (n == 0) 
		return 1; 
	else 
		return n * fact(n - 1); 
}