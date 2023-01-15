#pragma once // avoid the repeated including of the header files
#include<iostream> // include the input and output stream file#pragma once
#include<string>
#include "107_worker.h"

class manager:public worker
{
public:
	manager(int id, string name, int did);

	virtual void showinfo();

	virtual string getdeptname();
};
