#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// Initialize

class person
{
public:
	int m_A;
	int m_B;
	int m_C;

	// classical initializing
	//person(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	// Initializing list

	person(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
	{

	}

};

void test01()
{
	// person p(10,20,30);
	person p(1,2,3);
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;

}
int main() {
	test01();
	system("pause");
	return 0;

}





