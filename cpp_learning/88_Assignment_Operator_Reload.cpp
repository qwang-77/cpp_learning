#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// reload of assignment operator

class person
{
public:
	int* m_age;
	person(int age)
	{
		m_age = new int(age);

	}
	~person()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}

	// reload assignment operator

	person& operator= (person &p)
	{
		//m_age = p.m_age;
		// we should evaluate whether it has saved some data in heap area, if so, we need to release them then copy

		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}

		m_age = new int(*p.m_age); // deep copy
		return *this;

	}

};

void test01()
{
	person p1(10);
	person p2(20);

	p2 = p1;

	cout << "P1's age is: " << *p1.m_age << endl;
	cout << "P2's age is: " << *p2.m_age << endl;
}

int main() {
	//test01();
	person p1(18);
	person p2(20);
	person p3(30);

	p3 = p2 = p1;

	cout << *p1.m_age << *p2.m_age << *p3.m_age << endl;

	system("pause");
	return 0;

}





