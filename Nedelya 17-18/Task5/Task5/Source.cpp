#include <iostream>
#include <string>
using namespace std;

//��� �����.�������� ��� ����� ���������������� �������.

int main() {

	setlocale(LC_ALL, "Russian");
	string s;
	getline(cin, s);
	
	for (int i = 0; i < s.length(); i++) {
		switch (s[i]) {
		case '0': cout << "����"; break;
		case '1': cout << "����"; break;
		case '2': cout << "���"; break;
		case '3': cout << "���"; break;
		case '4': cout << "������"; break;
		case '5': cout << "����"; break;
		case '6': cout << "�����"; break;
		case '7': cout << "����"; break;
		case '8': cout << "������"; break;
		case '9': cout << "������"; break;
		default: cout << s[i];
		}
	}
	return 0;
}