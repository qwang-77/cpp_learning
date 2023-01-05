#include<iostream>
using namespace std;
#include<string>
#include<ctime>

// constructor and destructor


//1. Initialize by constructor

class person
{
public:
	// 1. constructor
	// No return value and no need to write void
	// Function name is same as the class name
	// Constructor can own its parameter, so it's legal to reload.
	// When creating the target, the constructor will be automatically used, and only once

	person()
	{
		cout << "Constructor." << endl;
	}

	// 2.destructor
	// No return value and not need to write void.
	// Function name is same as the class name, but add a "~" on the left.
	// No parameters are allowed.
	// before being cleared, the target will use the destructor and only once.
	~person()
	{
		cout << "Destructor." << endl;
	}
};

// constructor and destructor are necessary, if we don't provide, then compiler will create a void function.
void test01()
	{
		person p;  // it's a variable in stack area, so will be released after test01 have run.
	}


int main() {

	//test01();
	person p; // it's global area, has not been released.
	system("pause");
	return 0;

}





