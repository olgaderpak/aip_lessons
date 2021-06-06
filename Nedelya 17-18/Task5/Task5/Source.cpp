#include <iostream>
#include <string>
using namespace std;

//Дан текст.Заменить все цифры соответствующими словами.

int main() {

	setlocale(LC_ALL, "Russian");
	string s;
	getline(cin, s);
	
	for (int i = 0; i < s.length(); i++) {
		switch (s[i]) {
		case '0': cout << "ноль"; break;
		case '1': cout << "один"; break;
		case '2': cout << "два"; break;
		case '3': cout << "три"; break;
		case '4': cout << "четыре"; break;
		case '5': cout << "пять"; break;
		case '6': cout << "шесть"; break;
		case '7': cout << "семь"; break;
		case '8': cout << "восемь"; break;
		case '9': cout << "девять"; break;
		default: cout << s[i];
		}
	}
	return 0;
}