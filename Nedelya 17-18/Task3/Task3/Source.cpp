#include <iostream>
#include <string>
using namespace std;

//��������� ��������, ����������� �� ������ ������� �������. (� ������ ������
//���� ���� ������ ��� ���������� ����)

int main() {

	string s;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++) {
		int j = i;
		while (s[j] == ' ')
			j++;
		if (j > i)
			s.erase(i, j - i - 1);
	}

	cout << s << endl;
	return 0;
}