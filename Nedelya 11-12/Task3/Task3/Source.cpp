#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

/* Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
данные о самом маленьком роботе */

struct Point {
    float h, x, y;
};

struct Robot {
    Point gab;
    float ves;
    float skorost;
    int number;
};

Robot ship;
Robot plane;

void ves1();
void ves2();
float v1, v2;

int main() {

    setlocale(LC_ALL, "Russian");

    cout << "Введите данные (h,x,y) робота #1: ";
    ship.number = 1;
    cin >> ship.gab.h >> ship.gab.x >> ship.gab.y;

    cout << "Введите данные (h,x,y) робота #2: ";
    plane.number = 2;
    cin >> plane.gab.h >> plane.gab.x >> plane.gab.y;

    if (ves1 < ves2)
        cout << "Робот ship меньше, данные: " << "(" << ship.gab.h << ";" << ship.gab.x << ";" << ship.gab.y << ")";
    else
        cout << "Робот plane меньше, данные: " << "(" << plane.gab.h << ";" << plane.gab.x << ";" << plane.gab.y << ")";

    return 0;
}

void ves1() {
    v1 = ship.gab.h * ship.gab.x * ship.gab.y;
}

void ves2() {
    v2 = plane.gab.h * plane.gab.x * plane.gab.y;
}
