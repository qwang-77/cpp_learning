#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// global variable 
int g_a = 10;
int g_b = 10;


// const global variable

const int c_g_a = 10;

int main() {

	// Global variable, Static Variable, string constant, global constant are in global zone

	// create a local variable

	int a = 10;
	int b = 10;

	cout << "The address of local variable a is: " << (int)&a << endl;
	cout << "The address of local variable b is: " << (int)&b << endl;
	cout << "The address of global variable a is: " << (int)&g_a << endl;
	cout << "The address of global variable b is: " << (int)&g_b << endl;

	// static variable
	static int s_a = 10;
	static int s_b = 10;
	cout << "The address of static variable a is: " << (int)&s_a << endl;
	cout << "The address of static variable b is: " << (int)&s_b << endl;


	// constant

	//1. string constant
	
	cout << "The address of string constant is: " << (int)&"Hello world" << endl;

	//2. const + variable

	//2.1 const global variable 
	cout << "The address of constant global variable is: " << (int)&c_g_a << endl;
	//2.2 const local variable

	const int c_l_a = 10; // This is not in the global zone. Close to the local variable.

	cout << "The address of constant local variable is: " << (int)&c_l_a << endl;
	// local constant and local variable are not in the global zone.
	system("pause");
	return 0;

}

