#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/* Сделайте рефакторинг задач на проверку нахождения точки в закрашенной области
из предыдущего домашнего задания. В результате, вместо двух переменных,
описывающих координаты точки, должна быть одна переменная-структура с
атрибутами – координатами.*/

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
            cout << "Попадает";
        }
        else {
            cout << "Не попадает";
        }
    }

}

int main() {

    setlocale(LC_ALL, "Russian");

    cout << "Введите координаты (x;y):" << endl;
    cin >> popal.x >> popal.y;
    l = sqrt(popal.x * popal.x + popal.y * popal.y);
    uslov();

    return 0;
}