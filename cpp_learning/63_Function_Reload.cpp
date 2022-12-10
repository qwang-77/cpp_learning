#include<iostream>
#include<string>
#include<ctime>
using namespace std;
// function reload. 
// make same name of the functions available, increse the repeating use.
// Condition:

// 1. same application area.
// 2. same function name.
// 3. the type of parameters, or number of parameters or order of parameters are different.
void func()
{
	cout << "This is func." << endl;
}

void func(int a)
{
	cout << "This is func........" << endl;
}

void func(double a)
{
	cout << "This is func double........" << endl;
}

void func(double a, int b)
{
	cout << "This is func double int." << endl;
}

void func(int a, double b)
{
	cout << "This is func int double." << endl;
}



int main() {
	func(1);
	system("pause");
	return 0;

}

// the return value of the function cannot be condition of the function reloading.