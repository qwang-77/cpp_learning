#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// reload of left shift operator

class person
{
public:
	int m_a;
	int m_b;

};

ostream & operator<< (ostream &cout, person &p)
{
	cout << "m_A = " << p.m_a << " m_B = " << p.m_b << endl;
	return cout;
}

void test01()
{
	person p;
	p.m_a = 10;
	p.m_b = 20;
	cout << p << endl;
}

int main() {
	test01();


	system("pause");
	return 0;

}





