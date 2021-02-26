#include <iostream>
#include <cmath>

int main() {

	int x;

	std::cout << "Vichislit' virazhenie |x|+x^5";
	std::cout << "\nVvedite x:";
	std::cin >> x;

	std::cout << "Otvet:" << abs(x) + x * x * x * x * x << std::endl;

	return 0;

}