#include<iostream>
#include<string>
#include<ctime>
using namespace std;
// rules of calling constructor

// 1. create a class, then the cpp will automatically add three functions to them

// default constructor
// destructor
// copy constructor

class person
{
public:
	int m_age;
	person()
	{
		cout << "Constructor of person" << endl;
	}
	person(int age)
	{
		m_age = age;
		cout << "Constructor of person with parameters" << endl;
	}
	//person(const person& p)
	//{
	//	m_age = p.m_age;
	//	cout << "Copy constructor of person" << endl;
	//}
	// even if we don't write it, the compiler will write it for us.
	~person()
	{
		cout << "Destructor of person" << endl;
	}
};


//void test01()
//{
//	person p;
//	p.m_age = 18;
//	person p2(p);
//	cout << "P2's age is: " << p2.m_age << endl;
//
//}
// if we have written a parameter constructor, the compiler will not provide default constructor, but it will still provide the copy constructor.
// If we have defined a copy constructor, then both the default and parameter constructor will not be defined by compiler.
void test02()
{
	person p1(20);
	person p2(p1);
	cout << "P2's age is: " << p2.m_age << endl;
}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;

}





