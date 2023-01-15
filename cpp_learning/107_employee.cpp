#include "107_employee.h"

employee::employee(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deptid = did;
};
// show personal info
void employee::showinfo()
{
	cout << "Staff ID: " << this->m_id
		<< "\t Name: " << this->m_name
		<< "\t Position: " << this->getdeptname()
		<< "\t Duty: Finish the manager's Order" << endl;
};
// get the department name
string employee::getdeptname()
{
	return string("Employee");

};
