#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// exchange function
//1. value passing
void swapvalue(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//2. address passing

void swapadd(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3. quote passing

void swapquote(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main() {

	int a = 10;
	int b = 20;



	swapquote(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;

}

