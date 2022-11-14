#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	// in 32 bit system, it takes 4 bits, but 8 bits in 64 system

	int a = 10;
	int* p = &a;

	cout << "size of int* = " << sizeof(int *) << endl;
	cout << "size of float* = " << sizeof(float *) << endl;
	cout << "size of double* = " << sizeof(double *) << endl;
	cout << "size of char* = " << sizeof(char *) << endl;


	system("pause");
	return 0;

}
