#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// Constant reference: using before the local parameter, to avoid wrong action.

void showvalue(const int& val)
{
	// val = 1000; Cannot modify the value again because it is a constant.
	cout << "Value: " << val << endl;
}
int main() {

	// const int& ref = 10;
	// int& ref  = 10;
	int a = 100;
	showvalue(a);
	system("pause");
	return 0;

}

