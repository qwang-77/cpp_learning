#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	// when to use break
	// 1. switch
	/*
	cout << "Select a difficulty" << endl;
	cout << "1.Easy" << endl;
	cout << "2.Medium" << endl;
	cout << "3.Hard" << endl;
	int select = 0;
	cin >> select;
	switch (select) {
	case 1:
		cout << "You selected easy." << endl;
		break;
	case 2:
		cout << "You selected medium." << endl;
		break;
	case 3:
		cout << "You selected hard." << endl;
		break;
	}
	*/



	// 2. loop

	/*
		for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;
		}
		cout << i << endl;
	}
	*/

	// 3. nested

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			if (j > i) {
				break;
			}
			cout << "* ";
		}
		cout << endl;


	}


	system("pause");
	return 0;
}

