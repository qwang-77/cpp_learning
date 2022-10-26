#include<iostream>
using namespace std;

int main() {

	// integers: short£¨2£©, int£¨4£©, long£¨4£©, longlong£¨8£©
	// GrammerL sizeof(type or variable)

	short num1 = 10;
	cout << sizeof(short) << endl;
	cout << sizeof(num1) << endl;

	long num2 = 10;
	cout << sizeof(long) << endl;
	cout << sizeof(num2) << endl;


	int num3 = 10;
	cout << sizeof(int) << endl;
	cout << sizeof(num3) << endl;


	long long num4 = 10;
	cout << sizeof(long long) << endl;
	cout << sizeof(num4) << endl;


	system("pause");
	return 0;
}