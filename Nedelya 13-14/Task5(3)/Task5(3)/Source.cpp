//Вычислить сумму нечётных/чётных элементов массива

#include <iostream>
#include <ctime>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    srand(time(0));

    const int n = 10;
    int arr[n];
    int sum1 = 0;
    int sum2 = 0;
   

    for (int i = 0; i < n; i++) {

        arr[i] = rand() % 30;
        cout << arr[i] << endl;

        if (arr[i] %2 == 0) {

            sum1 += arr[i];

        }
        if (arr[i] % 2 == 1) {

            sum2 += arr[i];

        }
    }
    cout << "Сумма четных элементов = " << sum1 << endl;
    cout << "Сумма нечетных элементов = " << sum2 << endl;
    
    return 0;
}