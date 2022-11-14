#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {

	// Pointer to constant: the direction of pointer can be modified, but the value the pointer points to cannot be changed
	/*
	
	int a = 10;
	int b = 10;
	
	const int *p = &a

	correct: p = &b , because the direction of the pointer can be modified
	wrong: *p = 20, because the value of the pointer points to cannot be changed
	

	*/

	int a = 10;
	int b = 10;
	const int* p1 = &a;
	p1 = &b;




	// Constant pointer: the direction cannot be changed, the value can be changed
	/*

	int a = 10;
	int b = 10;

	int * const p = &a

	wrong: p = &b , because the direction of the pointer cannot be modified
	correct: *p = 20, because the value of the pointer points to can be changed


	*/

	int* const p2 = &a;
	*p2 = 100;



	// Constant pointer to constant: the direction cannot be changed, the value cannot be changed
	/*

	int a = 10;
	int b = 10;

	const int * const p = &a

	wrong: p = &b , because the direction of the pointer cannot be modified
	wrong: *p = 20, because the value of the pointer points to cannot be changed


	*/
	const int* const p3 = &a;

	// cannot change anything

	system("pause");
	return 0;

}
