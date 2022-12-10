#include<iostream>
#include<string>
#include<ctime>
using namespace std;
// we can set default value for placeholder.
void func(int a, int=0)
{
	cout << "This is func." << endl;
}

int main() {

	func(10,1);

	system("pause");
	return 0;

}

