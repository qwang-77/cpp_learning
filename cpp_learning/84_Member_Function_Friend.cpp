#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class building;

class goodgay
{
public:
	building* Building;
	goodgay();
	void visit();// let visit function have access to private member in class building. But we cannot let visit2 have access to it.
	void visit2();
};


class building
{
	friend void goodgay::visit();
public:
	string m_sittingroom;
	building();
private:
	string m_bedroom;
};

building::building()
{
	m_sittingroom = "sittingroom";
	m_bedroom = "bedroom";
}

goodgay::goodgay()
{
	Building = new building;
};

void goodgay::visit()
{
	cout << "Visiting: " << Building->m_sittingroom << endl;
	cout << "Visiting: " << Building->m_bedroom << endl;
};
void goodgay::visit2()
{
	cout << "Visiting: " << Building->m_sittingroom << endl;
	//cout << "Visiting: " << Building->m_bedroom << endl;
};

void test01()
{
	goodgay gg;
	gg.visit();
};

int main() {
	test01();
	system("pause");
	return 0;

}





