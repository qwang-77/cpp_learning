#include<iostream>
using namespace std;

// Attention
// 1. Automatically guess of the variable can only be used when they guess the SAME type of variables

// 2. Template must fix the type of T, then we can use it.

template<class T> // typename can be substituted by class

void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	myswap(a, b); 
	// myswap(a, c);  // wrong, the template cannot derive the same T type.
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

template<class T>
void func()
{
	cout << "Call of func." << endl;
}

void test02()
{
	// func();  wrong, the compiler cannot derive the type of variables
	func<int>();
}

int main() {

	test01();
	test02();
	system("pause");
	return 0;
}