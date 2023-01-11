#include<iostream>
#include<string>
#include<ctime>
#include<fstream>

using namespace std;
void test01()
{
	//1. inlcude the header file
	//2. create a stream object
	ifstream ifs;

	//3. open the file and check whether succeeded.
	ifs.open("103_test.txt",ios::in);
	
	if (!ifs.is_open())
	{
		cout << "Fail to open the file" << endl;
		return;
	 }

	//4. read the data

	// Method 1
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}


	// Method 2
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}
	
	// Method 3
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	// Method 4

	char c;
	while ((c = ifs.get()) != EOF)  // EOF: end of file
	{
		cout << c;
	}
	
	//// 5. close the file

	ifs.close();
}

int main() {
	test01();
	system("pause");
	return 0;

}





