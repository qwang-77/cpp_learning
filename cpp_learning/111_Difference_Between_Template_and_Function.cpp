#include<iostream>
#include<string>
using namespace std;

// Difference between common function and template

// 1. Common function can transfer the implicit type
// 2. Template, if we let it guess the type itself, it cannot transfer the type automatically.
// 3. Template, if we specify the explicit type, it can transfer the  type.

// Common function

int myadd(int a, int b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'a'; // ASC code: a-97, c-99, so they transfered c to 99 automatically
	cout << myadd(a, b) << endl;
	cout << myadd(a, c) << endl;
}

template<class T>
T myadd02(T a, T b)
{
	return a + b;
}

void test02()
{
	int a = 10;
	int b = 20;
	char c = 'a';
	cout << myadd02(a, b) << endl;
	// cout << myadd02(a, c) << endl; Wrong, cuz it cannot transfer implicitly
	cout << myadd02<int>(a, c) << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}