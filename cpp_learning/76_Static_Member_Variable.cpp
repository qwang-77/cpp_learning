#include<iostream>
#include<string>
#include<ctime>
using namespace std;
// static member variable

class person
{
public: // there is also access permission for static class variables.
	static int m_A;
	// all the object will share the same data
	// has been assigned memory when compiling.
	// declare inside the class and initialize outside the class.

private:
	static int m_B;
};

void test01()
{
	person p;
	cout << p.m_A << endl;

	person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;
}

void test02()
{
	//static member variable does not belong to certain object since all the objects share the same data
	// Therefore, we can visit them in two ways:
	// 1. visit by objects

	person p;
	cout << p.m_A << endl;

	// 2. visit by class name

	cout << person::m_A << endl;
	// cout << person::m_B << endl;  Not accessible outside the class.
}


int person::m_A = 100;
int person::m_B = 20;

int main() {
	test02();
	system("pause");
	return 0;

}





