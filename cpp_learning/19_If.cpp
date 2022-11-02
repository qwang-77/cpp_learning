#include<iostream>
#include<string>
using namespace std;

int main() {
	// 1. Input a number
	// 2. Print the number
	// 3. Compare it with 600

	int score = 0;
	cout << "enter a number" << endl;
	cin >> score;

	cout << "You entered " << score << endl;
	// 1. No ";" after if() !!!!!!!!!
	if (score > 600) {
		cout << "You entered a number bigger than 600" << endl;

	}
	else if(score > 500) {
		cout << "You entered a number between 500 and 600" << endl;
	}
	else {
		cout << "You entered a number smaller than 500" << endl;
	}



	system("pause");
	return 0;
}

