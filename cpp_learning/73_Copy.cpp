#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class person
{
public:

	int m_age;
	int* m_height; 
	person()
	{
		cout << "Default constructor" << endl;
	}
	person(int age, int height)
	{
		m_height = new int(height);
		m_age = age;
		cout << "Parameter constructor" << endl;
	}

	person(const person& p)
	{
		m_age = p.m_age;
		m_height = new int(*p.m_height);
		cout << "Copy constructor" << endl;
	}

	~person()
	{
		// destructor: Will clear the data that we used in heap area.
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "Destructor" << endl;
	}
};
 
void test01()
{
	person p1(18,160);
	cout << "The age of p1 is: " << p1.m_age <<" The height is: " << *p1.m_height << endl;

	person p2(p1);
	cout << "The age of p2 is: " << p2.m_age <<" The height is: " << *p2.m_height << endl;
}
// deep copy and shallow copy
int main() {
	test01();
	system("pause");
	return 0;

}





