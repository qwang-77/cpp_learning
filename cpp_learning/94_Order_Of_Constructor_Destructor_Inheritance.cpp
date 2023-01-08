#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// the order of derived class and base class

class base
{
public:
	base()
	{
		cout << "Constructor of Base" << endl;
	}
	~base()
	{
		cout << "Destructor of Base" << endl;
	}
};

class son : public base
{
public:
	son()
	{
		cout << "constructor of son" << endl;
	}
	~son()
	{
		cout << "Destructor of son" << endl;
	}
};
 // order of constructor and destructor:

//constructor: First base then derived class
//destructor: The inversed order of the constructor

void test01()
{
	son s1;
}

int main() {
	test01();
	system("pause");
	return 0;

}





