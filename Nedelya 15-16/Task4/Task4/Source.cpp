#include <iostream>
#include <cmath>
using namespace std;
/* ��������, ����������� ���������� ������� � ���������� ��� �� ����� � �������
�� ����� �������, ����������� ��������� ��������. ���������� ���� �������.
b. ��������� ������ �� ��������� �����. ����� ��������������� �������
������, ��������� ��������.
*/

const int r = 4;
const int c = 4;

struct Shah {
    float x, y;
};

Shah m[r][c];
Shah pix;

void matrix() {
    cout << "��������� ����� 4�4:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << "x: " << m[i][j].x << "     ";
        cout << endl;
        for (int j = 0; j < c; j++)
            cout << "y: " << m[i][j].y << "     ";
        cout << endl;
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "����� ��������� ����� 4�4" << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            cout << "������ " << i + 1 << "." << j + 1 << endl;
            cout << "�����- ";
            cin >> pix.x;
            cout << "��������- ";
            cin >> pix.y;
            m[i][j] = pix;
            cout << endl;
        }
    cout << endl;
    matrix();
}