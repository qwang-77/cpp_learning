#pragma once // avoid the repeated including of the header files
#include<iostream> // include the input and output stream file#pragma once
#include<string>
#include "107_worker.h"
class employee : public worker
{
public:

	// constructor
	employee(int id, string name, int did);


	// show personal information
	virtual void showinfo();

	// show the department name
	virtual string getdeptname();
};