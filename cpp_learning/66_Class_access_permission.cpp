#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// public access: accessible both inside and outside the class
// protected access: only accessible inside the class
// private access: only accessible inside the class

class person
{
	// public access
public:
	string m_name;
protected:
	string m_car;
private:
	int m_pswd;
public:
	void func()
	{
		m_name = "ZS";
		m_car = "Toyota";
		m_pswd = 123456;
	}
};


class c1
{
	int m_A; // default permission is private
};

struct c2
{
	int m_A; // default permission is public
};

int main() {
	person p1;
	p1.m_name = "ZS";
	// p1.m_car = "dd" cannot be accessible
	// p1.m_pswd = 123 cannot be accessible

	c1 C1; 
	// C1.m_A = 100; not accessible
	c2 C2;
	C2.m_A = 100; // accessible since the struct permission is actually public.

	system("pause");
	return 0;

}


// Difference between struct and class:
// The default access permission of struct is public, but private for class.



