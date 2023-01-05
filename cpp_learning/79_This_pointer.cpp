#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class person
{
public:
	person(int age)
	{
		// this pointer points to the the object who owns the member function.
		this->age = age;
	}
	int age;
	// 2. return the object itself with *this
	person& personaddage(person &p)
	{
		this->age += p.age;
		return *this;
	}

};
void test01()
{
	person p1(19);
	cout << "The age of p1 is " << p1.age << endl;
}
// 1. solve the conflict of the names


void test02()
{
	person p1(10);
	person p2(10);

	// chain method of coding
	p2.personaddage(p1).personaddage(p1);

	cout << "The age of p2 is: " << p2.age << endl;
}


int main() {
	test02();
	system("pause");
	return 0;

}





