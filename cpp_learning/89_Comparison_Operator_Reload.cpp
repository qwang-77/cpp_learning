#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// comparison operator reloading

class person
{
public:
	string m_name;
	int m_age;

	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}

	// reload ==

	bool operator==(person &p)
	{
		if (m_name == p.m_name && m_age == p.m_age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

void test01()
{
	person p1("Tom", 18);
	person p2("Tom", 18);
	if (p1 == p2)
	{
		cout << "P1 = P2" << endl;
	}
	else
	{
		cout << "P1 is not equal to P2" << endl;
	}
}
int main() {
	test01();

	system("pause");
	return 0;

}





