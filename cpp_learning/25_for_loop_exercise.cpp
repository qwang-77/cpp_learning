#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	// 1. output 1:100
	// 2. find some special number change to "boom"
	// 3. 7k, 10*a+7, or 100*a + 70*b

	for (int i = 1; i <= 100; i++) {

		if (i % 7 == 0) {
			cout << "Boom!" << endl;
		}
		else if (i % 10 == 7) {
			cout << "Boom!" << endl;
		}
		else if ((i / 10) == 7) {
			cout << "Boom!" << endl;
		}
		else {
			cout << i << endl;
		}

	}




	system("pause");
	return 0;
}

