#include<iostream>
#include<string>
using namespace std;
// Limitaion of the template

// Some special type of variables need to be realized in specific way.

// Compare whether two numbers are equal


template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// However,

class Person
{
public:
	string m_name;
	int m_age;
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
};




void test01()
{
	int a = 10;
	int b = 20;
	bool res = myCompare(a, b);
	if (res)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "A ! = b" << endl;
	}

}

// we need to provide a reload of the function myCompare to realize the comparisons about the person.
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_name == p2.m_name && p1.m_age == p2.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "They are same person. " << endl;

	}
	else
	{
		cout << "They are different person. " << endl;
	}
}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}

