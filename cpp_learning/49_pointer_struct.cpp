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

int main() {
	
	struct student s = { "aa",11,111 };

	struct student* p = &s;

	cout << "name: " << p->name << "\nage: " << p->age << "\nscore: " << p->score << endl;


	system("pause");
	return 0;

}
