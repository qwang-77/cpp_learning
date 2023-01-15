#include "107_BOSS.h"

boss::boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deptid = did;
}

void boss::showinfo() 
{
	cout << "Staff ID: " << this->m_id
		<< "\t Name: " << this->m_name
		<< "\t Position: " << this->getdeptname()
		<< "\t Duty: Manage all things in the company." << endl;
}

string boss::getdeptname()
{
	return string("BOSS");
}