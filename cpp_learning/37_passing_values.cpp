#include<iostream>
#include<string>
#include<ctime>
using namespace std;
// If we don't need to return any values, we can void function.

void swap(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << num1 << " " << num2 << endl;
}

int main() {
	int a = 10;
	int b = 20;
	swap(a, b);
	// Although a and b has been swapped in the function, but the actual parameter a and b are not changed.
	system("pause");
	return 0;

}

