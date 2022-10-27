#include<iostream>
#include<string>
using namespace std;

int main() {
	// Assign operation: = += -= *= /= %=

	int a = 10;
	cout << "a = " << a << endl;

	a = 100;
	cout << "a= " << a << endl;

	a = 10;
	a += 2;
	cout << "a= " << a << endl;

	a = 10;
	a -= 2;
	cout << "a= " << a << endl;

	a = 10;
	a *= 2;
	cout << "a= " << a << endl;

	a = 10;
	a /= 2;
	cout << "a= " << a << endl;

	a = 10;
	a %= 2;
	cout << "a= " << a << endl;

	system("pause");
	return 0;
}

