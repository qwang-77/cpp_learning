#include<iostream>
#include<string>
using namespace std;

// difference between function template and class template

template<class NameType, class AgeType = int>
class Person
{
public:
	NameType m_name;
	AgeType m_age;

	Person(NameType name, AgeType age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	void showPerson()
	{
		cout << "Name is : " << this->m_name << endl;
		cout << "Age is : " << this->m_age << endl;
	}
};

// 1. Class template cannot guess the type of the variable automatically
// 2. Class template can have a default parameter


void test01()
{
	// Person p("WW", 1);   Wrong! Class template cannot guess the variable type automatically!
	Person<string, int> p("ww", 1); // correct, we need to specify the type
	p.showPerson();


}


void test02()
{
	Person<string>pp("SS", 9); // int has been defined in the template, it has a default parameter in the class template. 
	pp.showPerson();
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}

