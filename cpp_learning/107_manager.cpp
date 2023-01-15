#include "107_Manager.h"

manager::manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deptid = did;
}

void manager::showinfo()
{
	cout << "Staff ID: " << this->m_id
		<< "\t Name: " << this->m_name
		<< "\t Position: " << this->getdeptname()
		<< "\t Duty: " << "Finish the BOSS's Order, and send order to employees" << endl;
}

string manager::getdeptname()
{
	return string("Manager");
}