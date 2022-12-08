#include<iostream>
#include<string>
#include<ctime>
using namespace std;

struct hero 
{
	string name;
	int age;
	string gender;

};

void bubblesort(hero heroarray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroarray[j].age > heroarray[j + 1].age)
			{
				struct hero temp = heroarray[j];
				heroarray[j] = heroarray[j + 1];
				heroarray[j + 1] = temp;
			}
		}
	}
}


void printhero(hero heroarray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "Name: " << heroarray[i].name << " Age: " << heroarray[i].age <<
			" Gender: " << heroarray[i].gender << endl;
	}



}

int main() {
	struct hero heroarray[5] =
	{
		{"A", 23, "M"},
		{"B", 22, "M"},
		{"C", 20, "M"},
		{"D", 21, "M"},
		{"E", 19, "F"}

	};

	int len = sizeof(heroarray) / sizeof(heroarray[0]);
	
	bubblesort(heroarray, len);
	printhero(heroarray, len);
	system("pause");
	return 0;

}

