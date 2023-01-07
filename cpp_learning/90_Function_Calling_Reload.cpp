#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// The function calling operator can also be reloaded. ()   aka: functors

class myprint
{
public:
	// function calling operator

	void operator()(string test)
	{
		cout << test << endl;
	}
};


class myadd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};


void test01()
{
	myprint myp;
	myp("hello");
}

void test02()
{
	myadd add;
	int res = add(1, 2);
	cout << "RES = " << res << endl;


	//anonymous function object

	cout << myadd()(1, 2) << endl;
}

void myprint02(string test)
{
	cout << test << endl;
}
int main() {

	//test01();
	test02();
	myprint02("Hello");
	system("pause");
	return 0;

}





