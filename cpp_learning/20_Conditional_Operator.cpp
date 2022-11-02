#include<iostream>
#include<string>
using namespace std;

int main() {

	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	
	// the return is a variable, can be given a value
	(a < b ? a : b) = 100;


	cout << c << endl;
	cout << a << endl;

	system("pause");
	return 0;
}

