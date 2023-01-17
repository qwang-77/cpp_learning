#include "107_workmanager.h"
#include "107_worker.h"
#include "107_Employee.h"
#include "107_Manager.h"
#include "107_BOSS.h"




workmanager::workmanager()
{
	// Initialize when the file does not exist
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		cout << "File does not exist." << endl;
		// Initialize the people
		this->m_empnum = 0;
		this->m_emparray = NULL;
		this->m_fileempty = true;
		ifs.close();
		return;
	}
	// Initialize when the file exist but it's empty

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		// the file has ended
		cout << "The file is empty." << endl;
		this->m_empnum = 0;
		this->m_emparray = NULL;
		this->m_fileempty = true;
		ifs.close();
		return;
	}

	// when the file exists and it's not empty

	int num = this->get_empnum();
	// cout << num << " people have been recorded." << endl;
	this->m_empnum = num;
	this->m_emparray = new worker * [this->m_empnum]; // create new memory for the data
	this->init_emp(); // save the data to the room created

	//for (int i = 0; i < this->m_empnum; i++)
	//{
	//	cout << "ID: " << this->m_emparray[i]->m_id
	//		<< " Name: " << this->m_emparray[i]->m_name
	//		<< " Department: " << this->m_emparray[i]->m_deptid << endl;
	//}

};

workmanager::~workmanager()
{
	if (this->m_emparray != NULL)
	{
		delete[] this->m_emparray;
		this->m_emparray = NULL;
	}
};

void workmanager::show_menu()
{
	cout << "**************************************************" << endl;
	cout << "******** Welcome to use the system ***************" << endl;
	cout << "********* 0.Exit the system **********************" << endl;
	cout << "********* 1.Add Staff Information ****************" << endl;
	cout << "********* 2.Show Staff Information ***************" << endl;
	cout << "********* 3.Delete Staff Information *************" << endl;
	cout << "********* 4.Modify Staff Information *************" << endl;
	cout << "********* 5.Look for Staff Information ***********" << endl;
	cout << "********* 6.Sort Staff Information ***************" << endl;
	cout << "********* 7.Clear Staff Information **************" << endl;
	cout << "**************************************************" << endl;


}


void workmanager::exit_all()
{
	cout << "Welcome to use the system again." << endl;
	system("pause");
	exit(0);
}


void workmanager::add_emp()
{
	cout << "Please enter the number of the new staff being added" << endl;
	int addnum = 0;
	cin >> addnum;
	if (addnum > 0)
	{
		// add

		// calculate the new size of the array
		int newsize = this->m_empnum + addnum;

		// use new space
		worker** newspace = new worker * [newsize];

		

		if (this->m_emparray != NULL)
		{
			// put all the old data to the new data
			for (int i = 0; i < this->m_empnum; i++)
			{
				newspace[i] = this->m_emparray[i];
			}
		}
			// add new data
			for (int i = 0; i < addnum; i++)
			{
				int id;
				string name;
				int dselect;

				cout << "Please enter the id of " << i + 1 << "staff" << endl;
				cin >> id;
				
				cout << "Please enter the name of " << i + 1 << "staff" << endl;
				cin >> name;

				cout << "Please enter the position of " << i + 1 << "staff" << endl;

				cout << "1.Employee" << endl;
				cout << "2.Manager" << endl;
				cout << "3.Boss" << endl;

				worker* worker = NULL;
				cin >> dselect;

				switch (dselect)
				{
				case 1:
					worker = new employee(id, name, 1);
					break;
				case 2:
					worker = new manager(id, name, 2);
					break;
				case 3:
					worker = new boss(id, name, 3);
					break;
				default:
					break;
				};

				// save the pointer to the array
				newspace[this->m_empnum + i] = worker;
			}


			// release previous space
			delete[] this->m_emparray;

			// change the new space direction
			this->m_emparray = newspace;

			// update the new staff number

			this->m_empnum = newsize;

			this->m_fileempty = false; // update the case that the file is not empty.
			cout << "Successfully Added " << addnum << " people" << endl;
			this->save(); // save the data to the file.
		}
	else
	{
		cout << "Wrong number added" << endl;
	}
		
	// clear the screen by pressing any key

	system("pause");
	system("cls");
}

void workmanager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out); // output style to write the file
	// write each people's data into the file

	for (int i = 0; i < this->m_empnum; i++)
	{
		ofs << this->m_emparray[i]->m_id << " "
			<< this->m_emparray[i]->m_name << " "
			<< this->m_emparray[i]->m_deptid << " " << endl;
	}

	ofs.close();
}

int workmanager::get_empnum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int did;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++; // record the number of people
	}
	return num;
}


void workmanager::init_emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int did;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		worker* worker = NULL;
		if (did == 1) // Employee
		{
			worker = new employee(id, name, did);
		}
		else if (did == 2) // manager
		{
			worker = new manager(id, name, did);
		}
		else // boss
		{
			worker = new boss(id, name, did);
		}

		this->m_emparray[index] = worker;
		index++;

	}
	
	ifs.close();
}

void workmanager::show_emp()
{
	if (this->m_fileempty)
	{
		cout << "File is invalid: Empty or does not exist." << endl;
	}
	else
	{
		for (int i = 0; i < this->m_empnum; i++)
		{
			this->m_emparray[i]->showinfo();
		}
	}

	system("pause");
	system("cls");

}

void workmanager::del_emp()
{
	int id;
	int index;
	if (this->m_fileempty)
	{
		cout << "File is empty or does not exist!" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "Please enter the staff ID that you want to delete: " << endl;
		cin >> id;
		index = this->is_isistemp(id);
		// cout << "This is the " << index << " data" << endl;
		if (index != -1) // meaning that the staff exists and we wan to delete that staff
		{
			// move forward
			for (int i = index; i < this->m_empnum - 1; i++)
			{
				this->m_emparray[i] = this->m_emparray[i + 1];
			}
			this->m_empnum--; //update the number of people recorded in the array

			//update to the file

			this->save();

			cout << "Deleted successfully." << endl;

			system("pause");
			system("cls");

		}
		else
		{
			cout << "Delete failed, cannot find the staff" << endl;
			system("pause");
			system("cls");
		}
	}
}

int workmanager::is_isistemp(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_empnum; i++)
	{
		if (this->m_emparray[i]->m_id == id)
		{
			index = i;
			break;
		}
	}

	return index;

}


void workmanager::mod_emp()
{
	if (this->m_fileempty)
	{
		cout << "File is empty or does not exist." << endl;
	}
	else
	{
		cout << "Please enter the ID of the staff you want to modify: " << endl;
		int id;
		cin >> id;

		int ret = this->is_isistemp(id);
		if (ret != -1)
		{
			delete this->m_emparray[ret];
			int newid;
			string newname;
			int newdid;

			cout << "Staff of ID: " << id << " has been found." << endl;

			cout << "Please enter the new ID of this staff." << endl;
			cin >> newid;

			cout << "Please enterh the new name of this staff." << endl;
			cin >> newname;

			cout << "Please enterh the new department of this staff." << endl;
			cout << "1. Employee" << endl;
			cout << "2. Manager"  << endl;
			cout << "3. Boss"  << endl;
			cin >> newdid;

			worker* worker = NULL;
			switch(newdid)
			{
			case 1:
				worker = new employee(newid, newname, newdid);
				break;
			case 2:
				worker = new manager(newid, newname, newdid);
				break;
			case 3:
				worker = new boss(newid, newname, newdid);
				break;
			default:
				break;
			}

			// update to the array
			this->m_emparray[ret] = worker;
			cout << "Successfully modified!" << endl;
			this->save();
		}
		else
		{
			cout << "Staff does not exist." << endl;
		}


	}
	system("pause");
	system("cls");
}

void workmanager::find_emp()
{
	if (this->m_fileempty)
	{
		cout << "File is empty or does not exist." << endl;
	}
	else 
	{
		cout << "Please enter the way to look for the staff: " << endl;
		cout << "1. Look for the staff by ID" << endl;
		cout << "2. Look for the staff by name" << endl;

		int select = 0;
		cin >> select;

		if (select == 1) // look for the staff by ID
		{
			int id;
			cout << "Please enter the ID of the staff you want to look for: " << endl;
			cin >> id;

			int ret = this->is_isistemp(id);
			if (ret != -1)
			{
				// found the person
				cout << "Found the person. The information is as follows: " << endl;
				this->m_emparray[ret]->showinfo();
			}
			else
			{
				cout << "Fail to find the person" << endl;
			}

		}
		else if (select == 2)// look for the staff by name
		{
			string name;
			cout << "Please enter the name of the staff you want to look for: " << endl;
			cin >> name;
			bool flag = false; // by default, we believe they didn't find the person
			for (int i = 0; i < m_empnum; i++)
			{

				if (this->m_emparray[i]->m_name == name)
				{
					cout << "Found the person. The information is as follows: " << endl;
					this->m_emparray[i]->showinfo();
					flag = true;
				}

			}

			if (flag == false)
			{
				cout << "Fail to find the person" << endl;
			}

		}
		else
		{
			cout << "Wrong choice entered" << endl;
		}
	}

	system("pause");
	system("cls");
}


void workmanager::sort_emp()
{
	if (this->m_fileempty)
	{
		cout << "File is empty or does not exist." << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "Please choose the way to order the employees: " << endl;
		cout << "1. Increasing order" << endl;
		cout << "2. Decreasing order" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < m_empnum; i++)
		{
			int minormax = i;
			for (int j = i + 1; j < this->m_empnum; j++)
			{
				if (select == 1) // increasing order
				{
					if (this->m_emparray[minormax]->m_id > this->m_emparray[j]->m_id)
					{
						minormax = j;
					}
				}
				else // decreasing order
				{
					if (this->m_emparray[minormax]->m_id < this->m_emparray[j]->m_id)
					{
						minormax = j;
					}
				}
			}


			// evaluate whether the minormax index has changed, if not, change the data
			if (i != minormax)
			{
				worker* temp = this->m_emparray[i];
				this->m_emparray[i] = this->m_emparray[minormax];
				this->m_emparray[minormax] = temp;
			}

		}
	
		cout << "Sorted Successfully." << endl;
		this->save(); // save the result to the file
		this->show_emp(); // show all the staff.
	}
}

void workmanager::clean_file()
{
	cout << "Are you sure to clean all the file?" << endl;
	cout << "1. Confirm" << endl;
	cout << "2. Back" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		// clear the file

		ofstream ofs(FILENAME, ios::trunc); // delete the file and recreate
		ofs.close();

		if (this->m_emparray != NULL)
		{
			for (int i = 0; i < this->m_empnum; i++)
			{
				delete this->m_emparray[i];
				this->m_emparray[i] = NULL;
			}

			// delete the heap area pointer
			delete[] this->m_emparray;
			this->m_emparray = NULL;
			this->m_empnum = 0;
			this->m_fileempty = true;
		}

		cout << "Clean successfully!" << endl;
	}
	system("pause");
	system("cls");
}
