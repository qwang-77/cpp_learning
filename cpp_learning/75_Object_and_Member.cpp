#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// class object as member

class phone
{
public:
	string m_pname;

	phone(string pname)
	{
		m_pname = pname;
		cout << "Phone constructor" << endl;
	}
	~phone()
	{
		cout << "Destructor of phone" << endl;
	}
};


class person
{

public:
	string m_name;
	phone m_phone;

	// phone m_phone = pname;
	person(string name, string pname) : m_name(name), m_phone(pname)
	{
		cout << "Person constructor" << endl;
	};
	~person()
	{
		cout << "Destructor of Person" << endl;
	}
};

void test01()
{
	person p("ZS", "Iphone");

	cout << p.m_name << " has the phone " << p.m_phone.m_pname << endl;
}

// when the object of other classes is a member of current class, then create others first
int main() {
	test01();
	system("pause");
	return 0;

}





