#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// common realization of the page

// JAVA page

//class java
//{
//public:
//	void header()
//	{
//		cout << "Main page, Public class, Log in... Public header" << endl;
//	}
//	void footer()
//	{
//		cout << "Help, customer, Service.... Public footer" << endl;
//	}
//	void left()
//	{
//		cout << "Link, Python, C++.... Public left" << endl;
//	}
//
//	void content()
//	{
//		cout << "Java subject content" << endl;
//	}
//
//};
//
//
//// Python page
//
//class python
//{
//public:
//	void header()
//	{
//		cout << "Main page, Public class, Log in... Public header" << endl;
//	}
//	void footer()
//	{
//		cout << "Help, customer, Service.... Public footer" << endl;
//	}
//	void left()
//	{
//		cout << "Link, Python, C++.... Public left" << endl;
//	}
//
//	void content()
//	{
//		cout << "Python subject content" << endl;
//	}
//
//};
//
//// CPP page
//
//class cpp
//{
//public:
//	void header()
//	{
//		cout << "Main page, Public class, Log in... Public header" << endl;
//	}
//	void footer()
//	{
//		cout << "Help, customer, Service.... Public footer" << endl;
//	}
//	void left()
//	{
//		cout << "Link, Python, C++.... Public left" << endl;
//	}
//
//	void content()
//	{
//		cout << "C++ subject content" << endl;
//	}
//
//};
//
//





/// Inheritance

class basepage
{
public:
		void header()
		{
			cout << "Main page, Public class, Log in... Public header" << endl;
		}
		void footer()
		{
			cout << "Help, customer, Service.... Public footer" << endl;
		}
		void left()
		{
			cout << "Link, Python, C++.... Public left" << endl;
		}
};

// Java

class java : public basepage  // inheritance
{
public:
	void content()
	{
		cout << "Java Page" << endl;
	}
};

class python: public basepage  // inheritance
{
public:
	void content()
	{
		cout << "Python Page" << endl;
	}
};
class cpp : public basepage  // inheritance
{
public:
	void content()
	{
		cout << "CPP Page" << endl;
	}
};

void test01()
{
	cout << "Java Page is as follows" << endl;
	java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "-----------------------" << endl;

	cout << "Python Page is as follows" << endl;
	python py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "-----------------------" << endl;

	cout << "cpp Page is as follows" << endl;
	cpp cp;
	cp.header();
	cp.footer();
	cp.left();
	cp.content();

	cout << "-----------------------" << endl;
}

// benifits: Reduce repeated code
// grammar: class son(derived class) :: type of inheritance + father(base class)

int main() {
	test01();
	system("pause");
	return 0;

}





