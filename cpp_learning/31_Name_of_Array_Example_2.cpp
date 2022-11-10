#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	// an array includes 5 numbers, exchange the position of them.

	int arr[5] = { 1,2,3,4,5 };

	cout << "Before inverse " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;

	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;


	while (start < end) {


		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}

	cout << "After inverse " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;




	system("pause");
	return 0;
}

