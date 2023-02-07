#include<iostream>
#include<string>
using namespace std;

// If the function and template can both realize the thing, we had better use the function first.
// We can use void template to force to call the function template
// Template can be reloaded
// If template can match better, we use template first

void myPrint(int a, int b)
{
	cout << " We called the common function. " << endl;
}


template<class T>
void myPrint(T a, T b)
{
	cout << " We called the template. " << endl;

	// even if we only declare the function, and no realization, the still the common function are called.
}

template<class T>
void myPrint(T a, T b, T c)
{
	cout << " We called the reloaded template. " << endl;

	// even if we only declare the function, and no realization, the still the common function are called.
}


void test01()
{
	int a = 10;
	int b = 20;
	myPrint(1, 2);

	myPrint<>(a, b);

	myPrint(a, b, 100);

	char c1 = 'a';
	char c2 = 'b';

	myPrint(c1, c2);
}

int main() {
	test01();
	system("pause");
	return 0;
}

// Notes: If we have defined the template, we had better not to define the common function at the same time.