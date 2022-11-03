#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {

	// good number: three digits, and a^3 + b^3 + c^3 = abc, it's called a good number

	// 1. find all the three digits number: 100-999
	// 2. find good number in these numbers, get the 1st digit, 2nd digit and 3rd digit, and cube and equals itself.
	// hint: 1st digit, get mod for 10 to get a, 2nd digit just divide by 10, third digit divide by 100.

	int num = 100;

	do {
		
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if ( (a*a*a + b *b*b + c *c*c) == num) {
			cout << num << endl;
		}
		num++;
	} while (num < 1000);


	system("pause");
	return 0;
}

