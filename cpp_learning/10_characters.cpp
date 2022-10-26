#include<iostream>
using namespace std;

int main() {
	char ch = 'a';
	cout << ch << endl;
	cout << sizeof(char) << endl;

	// Do not use "b", only use 'b'.
	// Only one letter can be used between ''.

	// How to see the ASCII code?
	//a - 97
	//A - 65
	cout << (int)ch << endl;


	system("pause");
	return 0;
}

