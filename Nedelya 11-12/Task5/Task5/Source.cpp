#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/* �����-���������� ����������� ��� ��������� � ������: ��������, ������������
�������� � �����. �������� ������� ��� ������� ����������� ����������. */

struct Robot {
    float speed;
    float dlit;
    float num;
};
Robot avto;
void rast();


int main() {
    setlocale(LC_ALL, "Russian");
    rast();
    return 0;
}

void rast() {
    cout << "������� �������� ����������: ";
    cin >> avto.speed;
    cout << "������� ������������ ��������: ";
    cin >> avto.dlit;
    cout << "������� ����� ����������: ";
    cin >> avto.num;
    cout << "���������� ���������� " << "����� " << avto.num << " = " << avto.speed * avto.dlit;
}