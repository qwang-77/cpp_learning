#include<iostream>
#include<string>
#include<ctime>
#include<fstream>

using namespace std;

// write a file in binary format

class person
{
public:
	char name[64];
	int m_age;
};


void test01()
{
	// 1. include header file
	// 2. create stream object
	ofstream ofs("105_person.txt", ios::out | ios::binary);
	// 3. open the file
	// ofs.open("person.txt", ios::out | ios::binary);
	person p = { "ZS", 18 };
	ofs.write((const char*)&p, sizeof(person));
	// 4. write the file
	ofs.close();
	// 5. close the file
}
int main() {
	test01();
	system("pause");
	return 0;

}





