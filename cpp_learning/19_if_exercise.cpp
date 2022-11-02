#include<iostream>
#include<string>
using namespace std;

int main() {

	int a = 0;
	int b = 0;
	int c = 0;

	cout << "Please enter number a" << endl;
	cin >> a;

	cout << "Please enter number b" << endl;
	cin >> b;	

	cout << "Please enter number c" << endl;
	cin >> c;

	if (((a > b) && (b > c)) || ((a > c) && (c > b))) {
		cout << "The biggest number is " << a << endl;
	}
	else if (((b > a) && (a > c)) || ((b > c) && (c > a))) {
		cout << "The biggest number is " << b << endl;
	}
	else {

		cout << "The biggest number is " << c << endl;
	}


	system("pause");
	return 0;
}

