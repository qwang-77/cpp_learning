#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// More about function reloading 
//1. reference as the condition of reloading
//2. default parameter

void func(int& a)
{
	cout << "func int&a" << endl;
}

void func(const int& a)
{
	cout << "func const int&a" << endl;
}

void func2(int a, int b=10)
{
	cout << "func2 intatintb" << endl;
}
void func2(int a)
{
	cout << "func inta" << endl;
}

int main() {
	int a = 10;
	func(a);
	func(10);
	//func2(10); try to avoid the default parameter in reloading
	system("pause");
	return 0;

}

