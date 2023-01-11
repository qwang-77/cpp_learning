#include<iostream>
#include<string>
#include<ctime>
#include<fstream>

using namespace std;

class person
{
public:
	char m_name[64];
	int m_age;
};

void test01()
{
	// 1. inlcude header file
	// 2. create stream object
	ifstream ifs;

	// 3. open the file
	ifs.open("105_person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "Fail to open the file" << endl;
	}
	// 4. read the file
	person p;
	ifs.read((char*)&p, sizeof(person));
	cout << "Name: " << p.m_name << "Age: " << p.m_age << endl;
	// 5. close the file
	ifs.close();
};

int main() {
	test01();
	system("pause");
	return 0;

}





