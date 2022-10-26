#include <iostream>
using namespace std;
#define day 7
int main() {

	// #define name value  -- This is to define a macro constant
	// const type name = value -- This is to define a usual way to define constant
	
	// Do not change the value of constant variables.

	cout << "There are " << day << " days in a week" << endl;

	const int month = 12;

	cout << "There are " << month << " months in a year" << endl;

	system("pause");
	return 0;

}