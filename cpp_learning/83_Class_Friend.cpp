#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// class friend

class Building
{
	friend class goodgay;
public:
	string m_sittingroom;
	Building();
private:
	string m_bedroom;

};

// write the member function outside the class
Building::Building()
{
	m_sittingroom = "Sittingroom";
	m_bedroom = "Bedroom";
}



class goodgay
{
public:
	goodgay();
	void visit(); // visit the information in the building.


	Building* building;

};

goodgay::goodgay()
{
	building = new Building;

};

void goodgay::visit()
{
	cout << "The class goodgay is visiting: " << building->m_bedroom << endl;
}

void test01()
{
	goodgay gg;
	gg.visit();
}
int main() {
	test01();
	system("pause");
	return 0;

}





