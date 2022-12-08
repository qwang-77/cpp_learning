#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct student
{
	string sname;
	int score;

};
struct teacher
{
	string tname;
	student sarray[5];
};

void allocatespace(struct teacher tarray[], int len)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tarray[i].tname = "Teacher_";
		tarray[i].tname += nameseed[i];

		for (int j = 0; j < 5; j++)
		{
			tarray[i].sarray[j].sname = "student_";
			tarray[i].sarray[j].sname += nameseed[j];

			int randome = rand() % 60 + 40; // 0~59
			tarray[i].sarray[j].score = randome;
		}
		
	}
}

void printinfo(struct teacher tarray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "Teacher Name: " << tarray[i].tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tStudent Name: " << tarray[i].sarray[j].sname << 
				"\tScore: " << tarray[i].sarray[j].score << endl;
		}
	}
}

int main() {
	srand((unsigned int)time(NULL));
	// creat an array that includes three teachers.
	struct teacher tarray[3];

	// write a function to give value to the teacher and the student.
	int len = sizeof(tarray) / sizeof(tarray[0]);
	allocatespace(tarray, len);
	printinfo(tarray, len);
	// print all the teachers and the students' information
	system("pause");
	return 0;

}

