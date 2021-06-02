#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;

/* В квадратной матрице найти сумму положительных элементов, лежащих на и выше
главной диагонали и расположенных в чётных столбцах */

const int rows = 4;
const int cols = 4;
int m[rows][cols];
int summa1 = 0;
int summa2 = 0;
int summa3 = 0;


void vverh() {

    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 4; j++)
            if (m[i][j] > 0)
                summa2 += m[i][j];
    cout << "Сумма положительных чисел выше диагонали: " << summa2 << endl;
}

void diag() {

    int diag[rows];
    for (int i = 0; i < rows; i++) {
        diag[i] = m[i][i];
        if (diag[i] > 0)
            summa3 += diag[i];
    }
    cout << "Сумма положительных чисел главной диагонали: " << summa3 << endl;
}

void chet() {

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            if (j % 2 && m[i][j] > 0)
                summa1 += m[i][j];
        }
    cout << "Сумма положительных чисел четных столбцов: " << summa1 << endl;
}

int main() {

    setlocale(LC_ALL, "Russian");

    cout << "Введите матрицу по 4 элемента в строке: " << endl;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            cin >> m[i][j];
        }
    cout << endl;
    vverh();
    diag();
    chet();
    cout << "Сумма всех этих элементов: " << summa1 + summa2 + summa3;

    return 0;
}