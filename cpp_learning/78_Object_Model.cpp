#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// member variable and member function are saved separately
class person
{
	int m_A; // non static member variable belongs to the object of the class.
	static int m_B; // static member variable does not belong to the object of the class

	void func(); // non static member function does not belong to the object of class
	static void funn(); // does not belong to the object of class
};
int person::m_B = 10;
void test01()
{
	person p;

	// Empty object are taking memory:
	cout << "Size of p is " << sizeof(p) << endl;

	// cpp compiler will cost 1 bit memory to specify where the empty object is.
	// each empty object should have a unique address.
}


void test02()
{
	person p;
	cout << "Size of p is " << sizeof(p) << endl;
}
int main() {
	test02();
	system("pause");
	return 0;

}





