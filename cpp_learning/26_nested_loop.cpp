#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	// Using nested loop to print a star plot

	// Outer loop
	for (int i = 0; i < 10; i++) {

		// Inner loop
		for (int j = 0; j < 10; j++) {

			cout << "* ";
		}
		cout << endl;
	}



	system("pause");
	return 0;
}

