//������� �� ����� � ����� �� �����, ������ ���������� ����� � ������ ������ ����� ������ ������. ���������� ����� � ������ ������������.

#include <iostream>
int main()
{
    setlocale(LC_ALL, "Russian");
    float n;
    std::cout << "���������� �����:";
    std::cin >> n;
    for (int i = 1; i < n + 1; i++) {
        for (int j = 0; j < i; j++)
            std::cout << 0;
        std::cout << std::endl;
    }
    std::cout << std::endl;

    return 0;
}