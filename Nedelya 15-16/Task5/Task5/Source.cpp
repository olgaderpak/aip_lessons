#include <iostream>
#include <cmath>
using namespace std;

/* ����������� ��������, ���������, ���������, ���������������� ������
(����������� ������������� ������ ������). */

const int r = 2;
const int c = 2;
int a[r][c];
int b[r][c];
int w[r][c];
int d[r][c];
int e[r][c];

void slozh() {
    cout << "A+B: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << "  " << a[i][j] + b[i][j];
        cout << endl;
    }
    cout << endl;
}

void umnozh() {
    cout << "A*B: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            w[i][j] = 0;
            for (int k = 0; k < r; k++)
                w[i][j] += a[i][k] * b[k][j];
            cout << "  " << w[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void vichit() {
    cout << "A-B: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << "  " << a[i][j] - b[i][j];
        cout << endl;
    }
    cout << endl;
}
void trans_A() {
    cout << "trans A: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            d[i][j] = a[j][i];
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << d[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}
void trans_B() {
    cout << "trans B: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            e[i][j] = b[j][i];
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << e[i][j] << " ";
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "������� A: " << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    cout << endl;

    cout << "������� B: " << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    cout << endl;

    slozh();
    vichit();
    umnozh();
    trans_A();
    trans_B();

    return 0;

}