#include<iostream>
#include<string>
#include<ctime>
using namespace std;
//prefix increment operator and postfix increment operator

class myint
{
	friend ostream& operator<<(ostream& cout, myint mint);
public:
	myint()
	{
		m_num = 0;
	}
	// reload ++

	// prefix increment operator

	myint& operator++()  // to keep operating the same object.
	{
		// first do increment operator then return
		m_num++;
		return *this;
	}


	// postfix increment operator
	myint operator++(int)  // int is used to distinguish between prefix and postfix increment.
	{
		// first record current value

		myint temp = *this;
		// add 1
		m_num++;
		// return the record value
		return temp;
	}

private:
	int m_num;
};
// reload left-shift operator

ostream& operator<<(ostream& cout, myint mint)
{
	cout << mint.m_num;
	return cout;
}
void test01()
{
	myint mmint;
	cout << ++mmint << endl;
}
int main() {

	test01();
	system("pause");
	return 0;

}





