#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	// to use pointer to visit each element of the array.

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "the first element in the array is " << arr[0] << endl;

	int* p = arr; // the first address of array

	cout << "the pointer to the first element is " << *p << endl;
	p++; // the pointer moves 4 bits back.
	cout << "the second element of the array with pointer is " << *p << endl;

	int* p2 = arr;
	for (int i = 0; i < 10; i++) {

		cout << *p2 << endl;
		p2++;

	}
	system("pause");
	return 0;

}
