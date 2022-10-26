#include<iostream>
using namespace std;

int main() {

	// Difference: different storage cost, different range
	// 4 types: short, int, long, long long 
	
	
	//1. short
	short num1 = 10;

	//2. int
	int num2 = 10;

	//3. long
	int num3 = 10;

	//4. long long
	int num4 = 10;

	cout << num1 << num2 << num3 << num4 << endl;


	// If the number is out of range, then it comes back to the lowest value of the integer type
	system("pause");
	return 0;
}