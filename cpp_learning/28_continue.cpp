#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	// continue: in a loop, end this time of loop but continue loop for next time
	// example: print all odd numbers

	for (int i = 0; i <= 100; i++) {
		
		if (i % 2 == 0) {
			continue;
		}
		cout << i << endl;
	}




	system("pause");
	return 0;
}

