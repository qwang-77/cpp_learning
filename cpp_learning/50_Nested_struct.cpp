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
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};
int main() {

	teacher t;
	t.id = 100;
	t.name = "aaa";
	t.age = 19;
	t.stu.name = "abb";
	t.stu.age = 1;
	t.stu.score = 100;

	cout << "teacher: " << t.id << "\nteacher name: " << t.name <<
		"\nteacher age: " << t.age << "\nstudent name" << t.stu.name <<
		"\nstudent age: " << t.stu.age << "\nstudent score" << t.stu.score << endl;

	system("pause");
	return 0;

}
