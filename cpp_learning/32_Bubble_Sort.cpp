#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	// 1. Compare the two numbers next to each other, if the first one is larger, then exchange them
	// 2. Do the step 1 do each pair of things.
	// 3. Repeat the procedures, every time compare n-1 times, until no need to compare.

	int arr[] = { 4,3,2,6,8,1,9,5,7 };
	cout << "Before ordering " << endl;
	for( int i = 0; i < 9; i++){
	cout << arr[i];
}
	for (int i = 0; i < 9 - 1; i++) {
		for (int j = 0; j < 9-i-1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}

	cout << endl;
	cout << "After ordering " << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i];
	}



	system("pause");
	return 0;
}

