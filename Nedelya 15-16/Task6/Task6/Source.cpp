#include <iostream>
#include <ctime>
using namespace std;

/*В квадратной матрице для каждой строки найти минимальный элемент и
переставить его с элементом, стоящим в этой строке на главной диагонали.*/

const int n = 4;
int m[n][n], d;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    cout << "Первая матрица" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            m[i][j] = rand() % 10 + 1;
        }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    int min = m[1][1];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (min > m[i][j])
                min = m[i][j];
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (min == m[i][j]) {
                d = m[i][j];
                m[i][j] = m[i][i];
                m[i][i] = d;
            }
        }
    cout << "Новая матрица (замена)" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}