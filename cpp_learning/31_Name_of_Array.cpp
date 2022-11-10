#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,40 };

	cout << "The RAM this array cost is " << sizeof(arr) << endl;

	cout << &arr[0] << endl;

	// name of the array is a constant, cannot be redefined.




	system("pause");
	return 0;
}

