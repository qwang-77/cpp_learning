#include<iostream>
#include<string>
#include<ctime>
#include<fstream>

using namespace std;

//script file: Write a file

void test01()
{
	// 1. include the header file fstream

	// 2. create a stream object

	ofstream ofs; // output, write a file

	// 3. mode to open

	ofs.open("103_test.txt", ios::out); // output a file, write a file

	// 4. write something

	ofs << "Name: ZS" << endl;
	ofs << "Gender: Male" << endl;
	ofs << "Age: 18" << endl;

	// 5. close the file

	ofs.close();

}

int main() {
	test01();
	system("pause");
	return 0;

}





