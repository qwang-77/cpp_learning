#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// building class
class building
{
	friend void goodgay(building& building); // add a friend here to let goodgay function visit the bedroom.

public:
	string m_sittingroom;
private:
	string m_bedroom;
public:
	building()
	{
		m_sittingroom = "sittingroom";
		m_bedroom = "bedroom";
	}
};

// global function

void goodgay(building &building)
{
	cout << "visiting " << building.m_sittingroom << endl;
	cout << "visiting " << building.m_bedroom << endl;
}

void test01()
{
	building b;

	goodgay(b);
}

int main() {
	test01();
	system("pause");
	return 0;

}





