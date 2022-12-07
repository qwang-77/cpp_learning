#include<iostream>
#include<string>
#include<ctime>
using namespace std;
// struct: struct name {list of the members}
// create a struct
struct Student
{
	string name;
	int age = 0;
	int score = 0;
}s3;

int main() {

	// create a student

	struct Student s1;

	// get the data by "."
	s1.name = "Roy";
	s1.age = 18;
	s1.score = 100;

	cout << "name " << s1.name << "\nage " << s1.age << "\nscore " << s1.score << endl;

	struct Student s2 = { "Marry",19,20 };

	cout << "name " << s2.name << "\nage " << s2.age << "\nscore " << s2.score << endl;

	s3.age = 10;
	s3.name = "Tim";
	s3.score = 100;

	cout << "name " << s3.name << "\nage " << s3.age << "\nscore " << s3.score << endl;


	system("pause");
	return 0;

}
