#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	// an array includes 5 numbers, find the largest one.

	int arr[5] = { 300, 350, 200, 400, 250 };

	int max = 0;

	for (int i = 0; i <= 4; i++) {

		if (arr[i] >= max) {
			max = arr[i];
		}

	}

	cout << max << endl;

	system("pause");
	return 0;
}

