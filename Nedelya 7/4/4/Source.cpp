//������� �� ����� ��� ����������� ����� �� � �� � � ����� �. ��������, ����
//�=10, �=35, �=5, �� ����� ������ ���� �����: 10 15 20 25 30 35. �������� �, �,
//� ����������� ������������� (����������� � ���������� ��� �� �����). 

#include <iostream>
#include <cmath>

int main(){

    setlocale(LC_ALL, "Russian");

    float n, m, sh;

    std::cout << "������� ���: " ;
    std::cin >> sh;
    std::cout << "������� ������: " ;
    std::cin >> n;
    std::cout << "������� �����: ";
    std::cin >> m;
   
    for (float i = n; i <= m; i = i + sh) {
        std::cout << i << " ";
    }

    return 0;
}