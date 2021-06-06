#include <iostream>
#include <string>
using namespace std;

//Составить алгоритм, исключающий из строки А символы строки Б.

int main() {

	string s1 = "ABOBA ABOBA ABOBA";
	string s2 = "AB";
	cout << s1 << endl << s2 << endl;

	for(int i=0;i<s1.length();i++)
		switch (s1[i]) {
		case'A':
		case'B':
			s1.erase(i, 1);
			i--;
		}
	cout << s1 << endl;

	return 0;
}
