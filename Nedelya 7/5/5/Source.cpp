//��������� ��������� ���������� ����� (� ������� ������).

#include <iostream>

float fact(int n);

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;

	std::cout << "������� ����� ��� ���������� ����������: ";
	std::cin >> n;
	std::cout << "��������� ��� ����� " << n << " = " << fact(n) << std::endl << std:: endl;


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