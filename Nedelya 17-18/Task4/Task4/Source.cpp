#include <iostream>
#include <string>
using namespace std;

/*�� ���������� ������ ��� ������ ������� ��� ��������, ��������� ��������
�������������� ������.��������� ���� ������ ���������� � 1 � �����������, 2 �
������� � �.�.*/

int main() {

	setlocale(LC_ALL, "Russian");

	string day;
    int days;
	cout << "������� ����� ��� ������:" << endl;
    cin >> days;
    switch (days){
    case 1:
        day = "�����������";
        cout << day << endl;
        break;
    case 2:
        day = "�������";
        cout << day << endl;
        break;
    case 3:
        day = "�����";
        cout << day << endl;
        break;
    case 4:
        day = "�������";
        cout << day << endl;
        break;
    case 5:
        day = "�������";
        cout << day << endl;
        break;
    case 6:
        day = "�������";
        cout << day << endl;
        break;
    case 7:
        day = "�����������";
        cout << day << endl;
        break;
    default:
        cout << "Error" << endl;
        break;
    }

    return 0;
}