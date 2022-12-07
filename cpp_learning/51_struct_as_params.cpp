#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};

void printStudent1(student s)
{
	cout << "Name: " << s.name << "\nAge" << s.age << "\nScore: " << s.score << endl;
}

void printStudent2(student *p)
{
	p->age = 100;
	cout << "\nName: " << p->name << "\nAge" << p->age << "\nScore: " << p->score << endl;
}

int main() {

	student s;
	s.name = "aa";
	s.age = 20;
	s.score = 85;
	
	printStudent1(s);
	printStudent2(&s);
	system("pause");
	return 0;

}

// only pass the value in the function will not affect the global variable. But if pass the address
//,then everything will change.