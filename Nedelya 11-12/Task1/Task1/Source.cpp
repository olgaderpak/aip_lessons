#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/* �������� ����������� ����� �� �������� ���������� ����� � ����������� �������
�� ����������� ��������� �������. � ����������, ������ ���� ����������,
����������� ���������� �����, ������ ���� ���� ����������-��������� �
���������� � ������������.*/

struct Point {
    float x, y;
};

float l;

Point popal;

void uslov() {
    if ((l < 1) && (popal.x > 0)) {
        cout << "popal";
    }
    else {
        if ((popal.y < 1) && (popal.y > (popal.x - 1)) && (popal.x > 0)) {
            cout << "��������";
        }
        else {
            cout << "�� ��������";
        }
    }

}

int main() {

    setlocale(LC_ALL, "Russian");

    cout << "������� ���������� (x;y):" << endl;
    cin >> popal.x >> popal.y;
    l = sqrt(popal.x * popal.x + popal.y * popal.y);
    uslov();

    return 0;
}