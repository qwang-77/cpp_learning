#include<iostream>
#include<string>
#include<ctime>
using namespace std;
// static member with same name - Inheritance

class base
{
public:
	static int m_a;
	static void func()
	{
		cout << "Base static" << endl;
	}
};


int base::m_a = 100;

class son : public base
{
public:
	static int m_a;
	static void func()
	{
		cout << "son static" << endl;
	}
};

int son::m_a = 200;

void test01()
{
	son s;
	cout << "Visit through objectives" << endl;
	cout << "son m_a = " << s.m_a << endl;
	cout << "base m_a = " << s.base::m_a << endl;

	cout << "Visit through class name." << endl;
	cout << "son m_a = " << son::m_a << endl;
	cout << "base m_a = " << son::base::m_a << endl;
}

void test02()
{
	son s;
	s.func();
	s.base::func();

	son::func();
	son::base::func();
	// It will mask all function in base function including any kind of reloading. Need to add a domain.
}

int main() {
	//test01();
	test02();

	system("pause");
	return 0;

}





