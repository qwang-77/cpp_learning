#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {

	// do while
	// output 0-9 in the screen

	int num = 0;
	do {
		cout << num << endl;
		num++;
	} while (num < 10);


	do {
		cout << num << endl;
		num++;
	} while (num);

	//difference between while and do while: Do while will first do once, then judge


	system("pause");
	return 0;
}

