//��������� ����� ��������� ������� : ������� 9, ������� 20, ������� 3.

#include <iostream>
#include <ctime>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    srand(time(0));

    const int n = 20;
    int arr[n];
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 30-10;
        cout << arr[i] << std::endl;

        if (arr[i] > 9) {
            sum1 += arr[i];

        }
        if (arr[i] < 20) {
            sum2 += arr[i];

        }
        if (arr[i] < 3) {
            sum3 += arr[i];

        }
    }
    cout << "����� ��������� ������� 9 = " << sum1 << endl;
    cout << "����� ��������� ������� 20 = " << sum2 << endl;
    cout << "����� ��������� ������� 3 = " << sum3 << endl;

    return 0;
}
   