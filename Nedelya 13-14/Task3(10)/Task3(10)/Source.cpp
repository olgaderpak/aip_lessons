//Заменить все отрицательные элементы массива нулями.

#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    const int n = 35;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 50-20;
 
        if (arr[i] < 0) {

            arr[i] = 0;
        }
        cout << arr[i] << endl;

    }
    return 0;
}