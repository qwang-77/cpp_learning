#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// public inheritance

class base1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son1 : public base1
{
public:
	void func()
	{
		m_a = 10; // the public access in base has been inheritated
		m_b = 10; // the protected access in base has been inheritated
		// m_c = 10; // private access in bas cannot be inheritated
	}
};


class son2 : protected base1
{
public:
	void func()
	{
		m_a = 100; // this changed to protected permit
		m_b = 100;
		//m_c = 100; cannot be accessed 
	}
};
void test01()
{
	son1 s1;
	s1.m_a = 100;
	// s1.m_b is not accessible since it's protected
}
// protected 
void test02()
{
	son2 s2; 
	// s2.m_a = 100; it's not accessible
	// s2.m_b is not accessible since it's protected
}


class son3 : private base1
{
public:
	void func()
	{
		m_a = 100; // this changed to protected permit
		m_b = 100;
		//m_c = 100; cannot be accessed 
	}
};

class grandson3 :public son3
{
	void func()
	{
		// m_a = 10;
		// m_b = 10;
	}
};

void test03()
{
	son3 s3;
	// s3.m_a = 100; it's not accessible
	// s3.m_b is not accessible since it's protected
}

int main() {

	system("pause");
	return 0;

}





