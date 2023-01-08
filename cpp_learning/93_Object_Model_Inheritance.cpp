#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// object model in inheritance

class base
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son : public base
{
public:
	int m_d;
};

// use the developing order to check model of objectives
// change the memory to the correct drive:  D:
// change to the file path:   cd: path
// cl /d1 reportSingleClassLayout"Classname" file name


void test01()
{
	cout << "size of son = " << sizeof(son) << endl;
	// all the class member in base class will be inheritated, but the private properties are hidden by compiler. 
	// they are not accessible but the are still inheritated.
}
int main() {
	test01();
	system("pause");
	return 0;

}





