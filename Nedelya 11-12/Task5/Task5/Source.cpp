#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/* Робот-автомобиль описывается как структура с полями: скорость, длительность
движения и номер. Напишите функцию для расчёта пройденного расстояния. */

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
    cout << "Введите скорость автомобиля: ";
    cin >> avto.speed;
    cout << "Введите длительность движения: ";
    cin >> avto.dlit;
    cout << "Введите номер автомобиля: ";
    cin >> avto.num;
    cout << "Пройденное расстояние " << "номер " << avto.num << " = " << avto.speed * avto.dlit;
}