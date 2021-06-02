#include <iostream>
using namespace std;

/*Имеется информация о датчиках: диапазон измеряемых значений (min, max),
погрешность, максимальная скорость. Вывести данные о датчике с наибольшим
диапазоном значений.*/

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

    cout << "Введите для датчика 1 параметры min, max, погрешность, скорость:" << endl;
    for (int i = 0; i < 1; i++) {
        cout << "min - ";
        cin >> param.a.min;
        cout << "max - ";
        cin >> param.a.max;
        cout << "погрешность - ";
        cin >> param.p;
        cout << "скорость - ";
        cin >> param.s;
        arr[1] = param;
    }

    cout << "Введите для датчика 2 параметры min, max, погрешность, скорость:" << endl;
    for (int i = 0; i < 1; i++) {
        cout << "min - ";
        cin >> param.a.min;
        cout << "max - ";
        cin >> param.a.max;
        cout << "погрешность - ";
        cin >> param.p;
        cout << "скорость - ";
        cin >> param.s;
        arr[2] = param;
    }
    d1 = arr[1].a.max - arr[1].a.min;
    d2 = arr[2].a.max - arr[2].a.min;
    cout << endl;

    if (d1 > d2)
        cout << "скорость - " << arr[1].s << "; погрешность - " << arr[1].p << "; min - " << arr[1].a.min << "; max - " << arr[1].a.max;
    else
        cout << "скорость - " << arr[2].s << "; погрешность - " << arr[2].p << "; min - " << arr[2].a.min << "; max - " << arr[2].a.max;
}
