#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// Don't return a quote of local variable
int& test01()
{
	int a = 10;
	return a;
}

int& test02()
{
	static int a = 10; // static variable, in global zrea, will be released after the program
	return a;
}
// the function can be used to be left value
int main() {

	int& ref = test01();
	cout << ref << endl;
	cout << ref << endl;
	int& ref2 = test02();
	cout << ref2 << endl;
	cout << ref2 << endl;
	test02() = 1000;
	cout << ref2 << endl;
	cout << ref2 << endl;
	system("pause");
	return 0;

}

