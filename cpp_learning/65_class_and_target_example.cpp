#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class student
{
public:
	// properties
	int s_id;

	string s_name;
	// action: show the id and name
	void showstudent()
	{
		cout << "Name: " << s_name << " ID: " << s_id << endl;
	}
	// assignment to name
	void setname(string name)
	{
		s_name = name;
	}

};


int main() {

	student s1;
	s1.setname("dd");
	s1.s_id = 11;

	s1.showstudent();

	system("pause");
	return 0;

}

