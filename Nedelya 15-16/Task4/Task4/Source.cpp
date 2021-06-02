#include <iostream>
#include <cmath>
using namespace std;
/* Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
на экран матрицу, описывающую следующие сущности. Предложите свой вариант.
b. Состояние робота на шахматной доске. Робот характеризуется уровнем
заряда, скоростью движения.
*/

const int r = 4;
const int c = 4;

struct Shah {
    float x, y;
};

Shah m[r][c];
Shah pix;

void matrix() {
    cout << "Шахматная доска 4х4:" << endl;
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
    cout << "Пусть шахматная доска 4х4" << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            cout << "Клетка " << i + 1 << "." << j + 1 << endl;
            cout << "Заряд- ";
            cin >> pix.x;
            cout << "Скорость- ";
            cin >> pix.y;
            m[i][j] = pix;
            cout << endl;
        }
    cout << endl;
    matrix();
}