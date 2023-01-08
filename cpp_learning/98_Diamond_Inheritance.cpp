#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class animal
{
public:
	int m_age;
};
// use virtual inheritance
class sheep : public virtual animal
{

};

class camel : public virtual animal
{

};

class sheepcamel : public sheep, public camel
{

};

void test01()
{
	sheepcamel sc;
	sc.sheep::m_age = 18;
	sc.camel::m_age = 20;

	cout << "sc.sheep::m_age = " << sc.sheep::m_age << endl;
	cout << "sc.camel::m_age = " << sc.camel::m_age << endl;
}
int main() {

	test01();
	system("pause");
	return 0;

}





