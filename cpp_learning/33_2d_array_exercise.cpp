#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	int arr[][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	int tot[3] = { 0,0,0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tot[i] = tot[i] + arr[i][j];
		}
	}
	for (int k = 0; k < 3; k++) {
		cout << tot[k] << endl;
	}

	system("pause");
	return 0;
}

