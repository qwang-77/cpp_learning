#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	// add a random seed. preventing a fake random number
	
	srand((unsigned int)time(NULL));
	
	// 1. generate a random number


	int ans = rand() % 100 + 1; // generate a number between 0-99
	//cout << ans << endl;
	// 2. let player have a guess
	int guess = 0;


	while (1) {
		cout << "Have a guess" << endl;


		cin >> guess;

		// 3. If correct, then end 
		if (guess > ans) {
			cout << "Too big !" << endl;
		}
		else if (guess < ans) {
			cout << "Too small !" << endl;
		}
		else {
			cout << "Correct !" << endl;
			break; // can stop looping by using break
		}
	}
	

	// 4. If wrong, tell the player larger or smaller, continue guess



	



	system("pause");
	return 0;
}

