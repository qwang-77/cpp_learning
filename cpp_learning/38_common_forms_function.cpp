#include<iostream>
#include<string>
#include<ctime>
using namespace std;
// If we don't need to return any values, we can void function.
// 1. no param, no return
// 2. have param, no return
// 3. no param, have return
// 4. have param, have return
void test01(){
	cout << "Test 01" << endl;
}

void test02(int a) {
	cout << " this is test " << a << endl;
}

int test03() {

	cout << "this is test 03" << endl;
	return(1000);

}

int test04(int a) {
	cout << "This is test 04" << endl;
	return(a);
}


int main() {
	 

	test01();
	test02(10);
	int t3 = test03();
	cout << "the output of test03 is " << t3 << endl;
	int t4 = test04(1);
	cout << "the output of test04 is " << t4 << endl;

	system("pause");
	return 0;

}

