#include<iostream>
#include<string>
#include<ctime>
using namespace std;
// with "new" we can put data into heap area.
int* func()
{
	int a = 10;
	int* p = new int(a);
	return p;
}

int main() {

	int* p = func();
	cout << *p << endl;

	system("pause");
	return 0;

}

