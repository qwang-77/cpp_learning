#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	// each element in the array has the same type
	// it's saved by continuous RAM

	// How to define an array:
	/*
	1. type name[length]
	2. type name[length] = {a,b,c}
	3. type name[] = {a,b,c}
	*/
	// The index begin from 0 instead of 1
	// 1.
	/*	
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	cout << arr[0] << endl;
	*/

	/*
	int arr2[5] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++) {

		cout << arr2[i] << endl;
	}
	*/


	int arr3[] = {10,20,30,40,50,60,70,80,90};

	for (int i = 0; i < 9; i++) {

		cout << arr3[i] << endl;

	}





	system("pause");
	return 0;
}

