#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int func(int a, int b=10)
{
	return a + b;
}

int main() {

	cout << func(1) << endl;

	// if we input our param, then it will use our param, otherwise use the default.
	system("pause");
	return 0;

}

// Attention:
// 1. if there has been a default param, then after this, each param must have a default value.
// 2. if the claim has a default param, then the realization of the param will not have a default param.
// we cannot give default param to both claim and realization.