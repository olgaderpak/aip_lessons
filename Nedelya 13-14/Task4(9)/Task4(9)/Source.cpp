//Посчитать количество элементов массива, больших нуля

#include <iostream>
#include <ctime>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

    srand(time(0));

    const int n = 20;
    int arr[n];
    int s = 0;

    for (int i = 0; i < n; i++) {

        arr[i] = rand() % 50 - 20;
        cout << arr[i] << endl;

        if (arr[i] > 0) {

            s = s + 1;
           
        }
    }

    cout << "Количество элементов массива, больших нуля = " << s;

    return 0;
}