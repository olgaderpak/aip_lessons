#include <iostream>
#include <string>
using namespace std;

/*По введенному номеру дня недели вывести его название, используя оператор
множественного выбора.Нумерация дней недели начинается с 1 – понедельник, 2 —
вторник и т.д.*/

int main() {

	setlocale(LC_ALL, "Russian");

	string day;
    int days;
	cout << "Введите номер дня недели:" << endl;
    cin >> days;
    switch (days){
    case 1:
        day = "Понедельник";
        cout << day << endl;
        break;
    case 2:
        day = "Вторник";
        cout << day << endl;
        break;
    case 3:
        day = "Среда";
        cout << day << endl;
        break;
    case 4:
        day = "Четверг";
        cout << day << endl;
        break;
    case 5:
        day = "Пятница";
        cout << day << endl;
        break;
    case 6:
        day = "Суббота";
        cout << day << endl;
        break;
    case 7:
        day = "Воскресенье";
        cout << day << endl;
        break;
    default:
        cout << "Error" << endl;
        break;
    }

    return 0;
}