#include <iostream>
using namespace std;

/*������� ���������� � ��������: �������� ���������� �������� (min, max),
�����������, ������������ ��������. ������� ������ � ������� � ����������
���������� ��������.*/

struct chip {
    float p, s;
    struct d {
        int min, max;
    };
    d a;
};
int d1, d2;
chip param;
chip arr[3];

int main() {

    setlocale(LC_ALL, "Russian");

    cout << "������� ��� ������� 1 ��������� min, max, �����������, ��������:" << endl;
    for (int i = 0; i < 1; i++) {
        cout << "min - ";
        cin >> param.a.min;
        cout << "max - ";
        cin >> param.a.max;
        cout << "����������� - ";
        cin >> param.p;
        cout << "�������� - ";
        cin >> param.s;
        arr[1] = param;
    }

    cout << "������� ��� ������� 2 ��������� min, max, �����������, ��������:" << endl;
    for (int i = 0; i < 1; i++) {
        cout << "min - ";
        cin >> param.a.min;
        cout << "max - ";
        cin >> param.a.max;
        cout << "����������� - ";
        cin >> param.p;
        cout << "�������� - ";
        cin >> param.s;
        arr[2] = param;
    }
    d1 = arr[1].a.max - arr[1].a.min;
    d2 = arr[2].a.max - arr[2].a.min;
    cout << endl;

    if (d1 > d2)
        cout << "�������� - " << arr[1].s << "; ����������� - " << arr[1].p << "; min - " << arr[1].a.min << "; max - " << arr[1].a.max;
    else
        cout << "�������� - " << arr[2].s << "; ����������� - " << arr[2].p << "; min - " << arr[2].a.min << "; max - " << arr[2].a.max;
}
