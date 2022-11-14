#include<iostream>
#include<string>
#include<ctime>
using namespace std;
// First claim the funciton, then use main function to oparate.
// But we can also put the function back but claim first.
// we can claim many times, but we can only define once.
int max(int a, int b);



int main() {

	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;


	system("pause");
	return 0;

}

int max(int a, int b) {

	return a > b ? a : b;

}