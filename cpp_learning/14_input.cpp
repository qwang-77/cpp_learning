#include<iostream>
#include<string>
using namespace std;

int main() {
	//1. integers

	int a;
	cout << "please type a number of a" << endl;
	cin >> a;
	cout << "The number you input was " << a << endl;

	//2. float
	float b;
	cout << "please type a number of b" << endl;
	cin >> b;
	cout << "The number you input was " << b << endl;


	//3. char
	char c;
	cout << "please type a value of c" << endl;
	cin >> c;
	cout << "The value you input was " << c << endl;

	//4. string
	string d;
	cout << "please type a value of d" << endl;
	cin >> d;
	cout << "The value you input was " << d << endl;

	//5. bool
	bool e; // as long it's not 0, it's true
	cout << "please type a value of e" << endl;
	cin >> e;
	cout << "The value you input was " << e << endl;



	system("pause");
	return 0;
}

