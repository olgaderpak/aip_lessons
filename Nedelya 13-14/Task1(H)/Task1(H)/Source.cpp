//Сгенерировать массив со случайными числами в диапазоне: [0,100]

#include <iostream>
#include <ctime>

using namespace std;

int main(){

	srand(time(0));

    const int n = 20;
    int arr[n];
    
    for ( int i = 0; i <n ; i++)
        arr[i] = rand() % 100;
    for (int i = 0; i < n; i++) 
        cout << arr[i] << endl;

    return 0;
}