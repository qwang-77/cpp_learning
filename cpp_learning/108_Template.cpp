#include<iostream>
using namespace std;


// Template of the function
// Example: Exchange the value of two integers

void swapint(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "Successfully switched." << endl;
}

// Example: Exchange the value of two integers

void swapdouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
	cout << "Successfully switched." << endl;
}

void test01()
{
	int a = 10;
	int b = 20;
	/*swapint(a, b);*/
	cout << "The value of a is: " << a << endl;
	cout << "The value of b is: " << b << endl;
	
	double c = 1.1;
	double d = 2.2;
	/*swapdouble(c, d);*/
	cout << "The value of c is: " << c << endl;
	cout << "The value of d is: " << d << endl;

}

// Therefore, we need a template to do this.
template<typename T> // declare a template, T is a common variable type for all type of variables
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
};


void test02()
{
	// Two ways to use the template:

	// 1. Automatic variable type derivation
	int a = 10;
	int b = 20;

	//myswap(a, b);

	// 2. show the type

	myswap<int>(a, b);

	cout << "The value of a is: " << a << endl;
	cout << "The value of b is: " << b << endl;

	double c = 1.1;
	double d = 2.2;
	/*swapdouble(c, d);*/
	myswap<double>(c, d);
	cout << "The value of c is: " << c << endl;
	cout << "The value of d is: " << d << endl;

};




int main() {

	// test01();
	test02();
	system("pause");
	return 0;
}

