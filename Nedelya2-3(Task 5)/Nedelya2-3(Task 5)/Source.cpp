// ������� ��������� �������. ������ �����: �����������_�������� ��������.
 //����� (������, ���, �����) 
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    int week, hourday, day, transfer, hour;
    
    std::cout << "������� ����� �������� , ������� ����� ��������� :\n" << "1.������ - ���� - ���\n" <<  "2.���� - ������ - ���\n" << "3.��� - ������ - ����\n";
    std::cin >> transfer;

    switch (transfer) {
        setlocale(LC_ALL, "Russian");

    case 1:
        std::cout << "������� ���������� ������: " ;
        std::cin >> week;
        day = week * 7;
        std::cout << "���:  ";
        std::cout << day;
        hour = week * 168;
        std::cout << " ����: ";
        std::cout << hour;
        break;

    case 2:
        std::cout << "������� ���������� ����: ";
        std::cin >> day;
        week = day / 7;
        std::cout << "������: ";
        std::cout << week;
        hour = day * 24;
        std::cout << " ����: ";
        std::cout << hour;
        break;
    case 3:
        std::cout << "������� ���������� �����: ";
        std::cin >> hour;
        week = hour / 168;
        std::cout << "������: ";
        std::cout << week;
        day = hour / 24;
        std::cout << " ���: ";
        std::cout << day;
        break;
    default:
        std::cout << " �� ������� ���� ������ ������ ������, ������� �� 1 �� 3! ";
    }
    std::getchar();
    std::getchar();

    return 0;
}
