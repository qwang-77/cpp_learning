#include<iostream>
#include<string>
using namespace std;

int main() {
	//1. C style

	char str[] = "hello world";
	cout << str << endl;

	/*
	PS:
	1. Need a [] after the name of the characters
	2. Need to use "" instead of ''

	*/



	//2. C++ style

	string str2 = "hello world";
	// But we need to include a file called string
	cout << str2 << endl;

	system("pause");
	return 0;
}

