#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// void pointer to call member functions

class person
{
public:
	void showclassname()
	{
		cout << "This is person class" << endl;
	};
	int m_age;
	void showpersonage()
	{
		cout << "The age of the person is : " << m_age << endl;
	}
};

void test01()
{
	person* p = NULL;
	p->showclassname();
	p->showpersonage();

}

int main() {

	system("pause");
	return 0;

}





