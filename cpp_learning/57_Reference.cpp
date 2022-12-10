#include<iostream>
#include<string>
#include<ctime>
using namespace std;
// grammar: type &new_name = old_name

int main() {
	int a = 10;
	int& b = a;
	b = 20;
	int c = 30;
	b = c;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	// 1. must be initialized, cannot be like: int &b;  Must be int &b = a
	// 2. As long as it has been initialized, it cannot be modified.
	// we can change the value of a by changing b.
	system("pause");
	return 0;

}

