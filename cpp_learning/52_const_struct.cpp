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

void printStduents(const student *s)
{
	// After adding const, we cannot change the true value of student s.
	cout << "Name: " << s->name << "\nAge: " << s->age << "\nScore: " << s->score << endl;

}

int main() {
	// Using pointer will reduce the memory cost and will be easier.
	struct student s = { "aaa",11,111 };
	printStduents(&s);
	

	system("pause");
	return 0;

}

