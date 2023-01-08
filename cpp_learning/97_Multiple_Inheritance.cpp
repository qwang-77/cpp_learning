#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class base1
{
public:
	int m_a;
	base1()
	{
		m_a = 111;
	}
};

class base2
{
public:
	int m_a;
	base2()
	{
		m_a = 222;
	}
};

class son : public base1, public base2
{
public:
	int m_c;
	int m_d;
	son()
	{
		m_c = 10;
		m_d = 20;
	}

};

void test01()
{
	son s;
	// when base class has the same name member variable, we need to add a domain

	cout << "Base 1 m_a: " << s.base1::m_a << endl;
	cout << "Base 2 m_a: " << s.base2::m_a << endl;
}
int main() {

	test01();
	system("pause");
	return 0;

}





