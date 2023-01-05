#include<iostream>
#include<string>
#include<ctime>
using namespace std;
// Different kinds of constructors and calling

// Categories

class person
{	// No parameters constructor (default constructor)
public:
	int age;

	person()
	{
		cout << "Person constructor" << endl;
	}
	// Constructor with parameters
	person(int a)
	{
		age = a;
		cout << "Person constructor with parameter" << endl;
	}
	// Copy constructor
	person(const person &p)
	{
		// copy all the properties of the person p to the new person.
		age = p.age;
		cout << "Person copy constructor." << endl;
	}

	// destructor
	~person()
	{
		cout << "Person destructor." << endl;
	}

};

// calling
void test01()
{
	//1. round brackets
	//person p1;
	//person p2(10);
	//person p3(p2);
	//cout << "The age of p2 is: " << p2.age << endl; 
	//cout << "The age of p3 is: " << p2.age << endl;

	// Notice: When using the default constructor, do not add (). because the compiler will regard it as a declarance.

	// 2. Show
	person p1;
	person p2 = person(10); // parameter constructor
	person p3 = person(p2);
	
	// person(10) anonymous target, will be recycled instantly after the end of operation.
	// do not initialize an anonymous target with copy constructor.

	// person(p3); WRONG.

	// 3. Latent transformation.
	person p4 = 10; // equal to : person p4 = person(10);
	person p5 = p4;
}

int main() {

	test01();

	system("pause");
	return 0;

}





