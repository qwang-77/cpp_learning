#pragma once // avoid the repeated including of the header files
#include<iostream> // include the input and output stream file
#include<fstream> // include the file operation header files
#include "107_worker.h"
using namespace std; // use the normal naming space

#define FILENAME "107_empfile.txt"

class workmanager
{
public:
	workmanager(); // constructor
	~workmanager(); // destructor
	int m_empnum; // record how many people
	worker** m_emparray;  //pointer of staff array
	void show_menu(); // show the menu
	void exit_all(); // exit the menu
	void add_emp(); // add employees
	void save(); // saving the editted files
	bool m_fileempty; // check whether the files are empty
	int get_empnum(); // check how many people have been in the file
	void init_emp(); // initialize the staff
	void show_emp(); // show the information for all the employees
	void del_emp(); // delete the staff information
	int is_isistemp(int id); // check whether the staff exists
	void mod_emp(); // modify the staff
	void find_emp(); // find the staff
	void sort_emp(); // sort the staff
	void clean_file(); // clean the file
};
