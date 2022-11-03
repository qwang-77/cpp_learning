#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
// Multiplier table
	for (int i = 1; i <= 9; i++) {

		for (int j = 1; j <= i; j++) {

			cout << i << "*" << j << "=" << i * j << "\t";
		}
		cout << endl;
	}



	system("pause");
	return 0;
}

