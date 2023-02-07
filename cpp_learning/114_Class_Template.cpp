#include<iostream>
#include<string>
using namespace std;
// class template

template<class NameType, class AgeType>
class Person
{
public:

	Person(NameType name, AgeType age)
	{
		this->m_name = name;
		this->m_age = age;


	}
	void showPerson()

	{
		cout << "Name is: " << this->m_name << endl;
		cout << "Age is: " << this->m_age << endl;
	}
	NameType m_name;
	AgeType m_age;
};


void test01()
{
	Person<string, int>p1("Tom", 0);
	p1.showPerson();
}


int main() {
	test01();
	system("pause");
	return 0;
}

