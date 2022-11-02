#include<iostream>
#include<string>
using namespace std;

int main() {
	// !: Not, e.g. !a
	// &&: And, 1 when both is correct
	// || : Or, 1 when either is correct
	// In cpp, everything is true except for 0
	int a = 10;
	cout << !a << endl;

	int b = 10;

	cout << (a && b) << endl;

	int c = 0;
	cout << (c && b) << endl;


	cout << (c || b) << endl;


	system("pause");
	return 0;
}

