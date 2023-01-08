#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// pure virtual function

class base
{
public:
	// pure virtual function
	// as long as there is a pure function, this class is called a abstract class
	// this cannot realize an objective.
	// the derived class of abstract class must rewrite the virtual function in the base class. Or the derived class is also virtual.
	virtual void func() = 0;
};


class son : public base
{
public:
	virtual void func()
	{
		cout << "func" << endl;
	}
};
void test01()
{
	// base b;  // we cannot create an object b since base is an abstract class.
	// son s;  // we must rewrite the abstract function in base class to realize it.
	base* base = new son;
	base->func();
}
int main() {
	test01();
	system("pause");
	return 0;

}





