#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// reload of operator +

class person
{
public:

	// member function reload

	//person operator+(person& p)
	//{
	//	person temp;
	//	temp.m_A = p.m_A + m_A;
	//	temp.m_B = p.m_B + m_B;
	//	return(temp);

	//}

	int m_A;
	int m_B;
};


// glolal function reload

person operator+(person& p1, person& p2)
{
	person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return(temp);
}

person operator+(person& p1, int a)
{
	person temp;
	temp.m_A = p1.m_A + a;
	temp.m_B = p1.m_B + a;
	return(temp);
}

void test01()
{
	person p1;
	person p2;
	p1.m_A = 10;
	p1.m_B = 10;

	p2.m_A = 10;
	p2.m_B = 10;

	//person p3 = p1 + p2;


	// reloading of operators can also have other kinds of reloading

	person p3 = p1 + 10;
	cout << "p3 MA = " << p3.m_A << " p3.MB = " << p3.m_B << endl;
}


int main() {
	test01();
	system("pause");
	return 0;

}





