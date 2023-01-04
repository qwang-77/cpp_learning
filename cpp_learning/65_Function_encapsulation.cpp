#include<iostream>
#include<string>
#include<ctime>
using namespace std;

const double PI = 3.14;

// design a circle class and get the round length
// formular: 2*pi*r

// design a class and followed by the name of the class
class circle
{
	//visiting 
public:

	// properties
	int m_r;

	// action: get the round
	double calculate()
	{
		return 2 * PI * m_r;
	};

};

class student
{
public:
	// properties
	int s_id;
	string s_name;
	// action: show the id and name
	string show_name()
	{
		return s_name;
	}
	int show_id()
	{
		return s_id;
	}
};


int main() {
	// create a circle based on the class

	circle c1;

	c1.m_r = 10;

	cout << "The round of the circle is: " << c1.calculate() << endl;

	student s1;
	s1.s_id = 111;
	s1.s_name = "gg";

	cout << "The name of the student is: " << s1.show_name() << endl;
	cout << "The ID of the student is: " << s1.show_id() << endl;
	system("pause");
	return 0;

}

