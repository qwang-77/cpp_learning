#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// static member function

class person
{
	// all the objects are sharing same function
	// static member function can only visit static member variable, and it also has the access permission.
public:
	static int m_A;
	int m_B;
	static void func()
	{
		m_A = 100;
		// m_B = 200; static member function cannot visit the nonstatic member variable. they cannot distinguish which m_B is going to be changed.
		cout << "static function" << endl;
	}

};

int person::m_A = 100;

void test01()
{
	person p;
	// visit through object
	p.func();

	// visit through class
	person::func();
}

int main() {
	test01();
	system("pause");
	return 0;

}





