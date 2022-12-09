#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int* func()
{
	int a = 10;  // the local variable is in the stack area, will be deleted after the function
	return  & a;
}
int main() {

	// do not return the address of a local variable
	int* p = func();
	cout << *p << endl;
	cout << *p << endl; // in *32 system, the compiler will only reserve the value once.
	system("pause");
	return 0;

}

