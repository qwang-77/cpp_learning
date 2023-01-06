#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//constant function

class person
{
public:

	// this pointer is a constant pointer, the direction of the pointer cannot be changed.
	// const person *const this; we cannot change both the direction and the value
	void showperson() const // the const here is fixing the value for a fixed direction pointer.
		// add a const after the member function will control the "this" pointer, will make the value that the pointer points to fixed and cannot be changed.
	{
		this->m_b = 100;
		// this->m_a = 100;
		// this = NULL; // we cannot change the direction of the pointer
	}

	void func()
	{

	}
	int m_a;
	mutable int m_b; // special variable, even in the constant function, we can still modify this value. we need to add a "mutable".
};

void test01()
{
	person p;
	p.showperson();
}

void test02()
{
	const person p; // constant object
	// p.m_a = 100; this object cannot be modified
	p.m_b = 100; // m_b is special variable, we can modify that. we can modify this under the constant objective.
	// p.func();  since p is constant object, we cannot use common member function since it will modify the properties of the objective.

}

// constant object can only use constant function.
int main() {

	system("pause");
	return 0;

}





