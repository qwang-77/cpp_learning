#include<iostream>
#include<string>
#include<ctime>
using namespace std;
// when to use copy contrructor?

// 1. Initialize a target with an existing target.
// 2. Assign value with value assignment.
// 3. Return a local target with value method.

class person
{
	int p_age;
public:
	person()
	{
		cout << "Person default constructor" << endl;
	}
	person(int age)
	{
		p_age = age;
		cout << "Person parameter constructor" << endl;
	}
	person(const person &p)
	{
		p_age = p.p_age;
		cout << "Person copy constructor" << endl;
	}

	~person()
	{
		cout << "Person destructor" << endl;
	}
};

void test01()
{
	person p1(20);
	person p2(p1);
}
// assign value to function parameters with value passing method

void dowork(person p)
{

}

void test02()
{
	person p;
	dowork(p); // when using class target to be the parameters, it's actually using the copy constuctor
}

person dowork2()
{
	person p1;
	cout << (int*)&p1 << endl;

	return p1;
}
void test03()
{
	person p = dowork2();
	cout << (int*)&p << endl;
}

int main() {
	//test01();
	test03();
	system("pause");
	return 0;

}





