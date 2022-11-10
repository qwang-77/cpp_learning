#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	cout << "arr takes ram " << sizeof(arr) << endl;
	cout << "The first row takes memory " << sizeof(arr[0]) << endl;
	cout << "The first element takes memory " << sizeof(arr[0][0]) << endl;

	cout << "nrow = " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "ncol = " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;


	cout << "First address is " << (int)arr << endl;
	cout << "First element address of first row is " << (int)arr[0] << endl;
	cout << "First element address of 1st is " << (int)&arr[0][0] << endl;

	cout << "First element address of second row is " << (int)arr[1] << endl;

	system("pause");
	return 0;
}

