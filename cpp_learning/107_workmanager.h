#pragma once // avoid the repeated including of the header files
#include<iostream> // include the input and output stream file
#include "107_worker.h"
using namespace std; // use the normal naming space

class workmanager
{
public:
	workmanager(); // constructor
	~workmanager(); // destructor
	int m_empnum; // record how many people
	worker** m_emparray;  //pointer of staff array
	void show_menu(); // show the menu
	void exit_all(); // exit the menu
	void add_emp();
};
