//������� ����� ������ �� ���� ������ �������� ���� �������� ��� ���������� ��������: �������

#include <iostream>
#include <ctime>

using namespace std;


int main(){

    setlocale(LC_ALL, "Russian");

    srand(time(0));

    const int n = 10;
    float arr1[n];
    float arr2[n];
    int i;

    cout << "������ ������: " << endl;
    for (i = 0; i < n; i++) {
        arr1[i] = rand() % 30;
        cout << arr1[i] << endl;
    }
        
    cout << "������ ������: " << endl;
    for (i = 0; i < n; i++) {
        arr2[i] = rand() % 30;
        cout << arr2[i] << endl;
    }
    
    cout << "��������������� ������: " << endl;
    for (i = 0; i < n; i++)
        cout << arr1[i] / arr2[i] << endl;

    return 0;
}
