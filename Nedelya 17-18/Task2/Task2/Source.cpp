#include <iostream>
#include<string>
using namespace std;

//��������� ��������, ���������� � ������ ����� �������� �� ������.

int main() {

	setlocale(LC_ALL, "Russian");
	string s;
	string p = "pravda";
	getline(cin, s);

    for (string::size_type i = 0; i < s.length(); i++)
        if (s[i] == p[0]) {
            if (s.substr(i, p.length()) == p)
            {
                s.replace(i, p.length(), "lozh ");
                s.erase(i + 4, 1);
                i += 3;
            }

        }
    cout << s << endl;
    return 0;
}