#include <iostream>
#include <cmath>
using namespace std;

/* Дана матрица. Элементы первой строки — количество осадков в соответствующий
день, второй строки — сила ветра в этот день. Найти, был ли в эти дни ураган?
(ураган — когда самый сильный ветер был в самый дождливый день).
*/

const int r = 2;
const int c = 4;
int matr[r][c];
int ar[r];

int main() {

    setlocale(LC_ALL, "Russian");

    cout << "Введите матрицу по 4 элемента в 2 строки: " << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            cin >> matr[i][j];
        }
    cout << endl;
    int max = matr[0][0];
    for (int i = 0; i < c; i++)
        if (max < matr[0][i])
            max = matr[0][i];

    int max2 = matr[1][0];
    for (int i = 0; i < c; i++)
        if (max2 < matr[1][i])
            max2 = matr[1][i];

    for (int i = 0; i < c; i++)
        if (max == matr[0][i] & matr[1][i] == max2)
            cout << "Ураган будет в " << i + 1 << " день " << endl;
}