#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {

	// pointer is the address of a variable

	//1. how to define a pointer
	//2. how to use a pointer

	int a = 10;
	// define a pointer : type * pointer name

	int* p;
	// let pointer points to a;
	p = &a;

	cout << "the address of a is " << &a << endl;
	cout << "the pointer of a is " << p << endl;

	//2. we can unlock the pointer to let the pointer points to the ram
	a = 1000;
	*p = 19;

	// the *pointer is just the a 
	cout << "the address of a is " << a << endl;
	cout << "the pointer of a is " << *p << endl;

	system("pause");
	return 0;

}
