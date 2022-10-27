#include<iostream>
#include<string>
using namespace std;

int main() {
// + - * / % 
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	// Will only take integers since a1 has been claimed as integer.
	cout << a1 / b1 << endl;

	// two real number cannot do % operation, only integers
	cout << a1 % b1 << endl;


	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;


	// ++ and --

	int a = 10;
	++a;
	cout << "a = " << a << endl;

	int b = 10;
	b++;
	cout << "b = " << b << endl;
	/*
		difference: 
			++a, first do the +1 operation, then do other operations
			a++, first do the other operations, then +1

	*/ 

	int a2 = 10;
	int b2 = ++a2 * 10;

	cout << "a2 = "<< a2 << endl;
	cout << "b2 = "<< b2 << endl;

	int a3 = 10;
	int b3 = a3++ * 10;

	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;

	system("pause");
	return 0;
}

