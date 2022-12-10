#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int* func()
{
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	// cout << *p << endl; we cannot do this because this memory has been released.
}

void test02()
{
	// create an array with 10 integers in heap area.
	int * arr = new int[10]; // 10 is the size of th array
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
		cout << arr[i] << endl;
	}

	delete[] arr; // when releasing the array, use [].

}

int main() {
	test02();


	system("pause");
	return 0;

}

