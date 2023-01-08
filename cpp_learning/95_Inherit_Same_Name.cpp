#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class base
{
public:
	base()
	{
		m_a = 100;
	}
	int m_a;
	void func()
	{
		cout << "Base-func using" << endl;
	}
	void func(int a)
	{
		cout << "Son-func using int a" << endl;
	}
};

class son: public base
{
public:
	int m_a;
	son()
	{
		m_a = 200;
	}
	void func()
	{
		cout << "Son-func using" << endl;
	}

};

void test01()
{
	son s;
	cout << "son m_A = " << s.m_a << endl;
	cout << "base m_A = " << s.base::m_a << endl;
}

void test02() // same member function
{
	son s;
	s.func();
	s.base::func();
	s.base::func(19);
}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;

}





