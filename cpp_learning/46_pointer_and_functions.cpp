#include<iostream>
#include<string>
#include<ctime>
using namespace std;

void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap02(int* p1, int* p2) 
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}

int main() {
	
	//1. passing values

	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// when working with pointers, we can change the actual parameters, not only the parameters in the function
	// if you want to change the actual parameters, then use address passing.

	system("pause");
	return 0;

}
