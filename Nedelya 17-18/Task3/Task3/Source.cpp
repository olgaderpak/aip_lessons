#include <iostream>
#include <string>
using namespace std;

//��������� ��������, ���������� � ������ ����� �������� �� ������

int main() {

	setlocale(LC_ALL, "Russian");

	string s;
	getline(cin, s);

	for (char i = 0; i < s.length(); i++)
		if (s[i] == '������')
			s[i] = '����';
	cout << s << endl;

	return 0;
}
