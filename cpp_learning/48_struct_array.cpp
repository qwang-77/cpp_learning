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
	//1. define a struct

	//2. create a struct array
	struct student stuarray[3] = {
		{"aaa",11,111},
		{"bbb",22,222},
		{"ccc",33,333}

	};
	//3. give value to the element
	stuarray[2].name = "laoliu";
	stuarray[2].age = 44;
	
	//4. loop for every element in the array

	for (int i = 0; i < 3; i++)
	{
		cout << "\nname: " << stuarray[i].name
			<< "\nage: " << stuarray[i].age
			<< "\nscore: " << stuarray[i].score;
	}
	


	system("pause");
	return 0;

}
