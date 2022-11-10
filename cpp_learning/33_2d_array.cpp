#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	// how to define 2d array
	// 1. type name[nrow][ncol]
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[1][0] = 3;
	arr[1][1] = 4;
	arr[0][2] = 5;
	arr[1][2] = 6;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << endl;
		}

	}



	int arr2[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr2[i][j] << " ";
		}

		cout << endl;
	}

	int arr3[2][3] = { 1,2,3,4,5,6 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr3[i][j] << " ";
		}

		cout << endl;
	}


	int arr4[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr4[i][j] << " ";
		}

		cout << endl;
	}

	system("pause");
	return 0;
}

