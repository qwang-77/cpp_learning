#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// set private permission
// we can control the writing access
// and we can detect the proficiency of the data

class person
{
public:
	// modify the name
	void setname(string name)
	{
		m_name = name;
	};
	// read the name
	string getname()
	{
		return m_name;
	}
	// get age
	int getage()
	{
		m_age = 0;
		return m_age;
	}
	// set lover
	void setlover(string lover)
	{
		m_lover = lover;
	}

	// set age properly
	void setage(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "wrong age" << endl;
			return;
		}
		m_age = age;
	}
private:
	// name: can be read and written
	string m_name;
	// age: can only be read
	int m_age;
	// lover: can only be written
	string m_lover;
};
int main() {

	person p;
	p.setname("DD");
	p.setage(1000);

	cout << "Name of p is: " << p.getname() << endl;
	cout << "Age of p is: " << p.getage() << endl;
	
	p.setlover("SB");
	system("pause");
	return 0;

}





