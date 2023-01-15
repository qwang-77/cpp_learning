#pragma once // avoid the repeated including of the header files
#include<iostream> // include the input and output stream file#pragma once
#include<string>

using namespace std;

// abstract worker class

class worker
{
public:
	int m_id;
	string m_name;
	int m_deptid;

	// show personal information
	virtual void showinfo() = 0;

	// show the department name
	virtual string getdeptname() = 0;
};