#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;

/*Преобразовать матрицу, умножив элементы каждой строки на значение второго
элемента этой строки. */

const int rows = 3;  // строки
const int cols = 3;  // столбцы
int mat[rows][cols];

void pr() {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            mat[i][j] = mat[i][j] * mat[i][2];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    srand(time(0));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = rand() % 10 + rand() % 100;
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    pr();
}