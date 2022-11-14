#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	// empty pointer: initialize pointer variables, cannot be visited

	int* p = NULL;

	// *p = 100;  The memory here cannot be visited

	// wild pointer:

	int* p2 = (int*)0x1100;
	// cout << *p2 << endl;

	// don't visit the memory that the void and wild pointer point



	system("pause");
	return 0;

}
