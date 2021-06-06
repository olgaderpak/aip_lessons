#include <iostream>
#include <string>
using namespace std;

//—оставить алгоритм, замен€ющий в тексте слова УправдаФ на УложьФ

int main() {

	setlocale(LC_ALL, "Russian");

	string s;
	getline(cin, s);

	for (char i = 0; i < s.length(); i++)
		if (s[i] == 'правда')
			s[i] = 'ложь';
	cout << s << endl;

	return 0;
}
