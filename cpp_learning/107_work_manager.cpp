#include "107_workmanager.h"
#include "107_worker.h"
#include "107_Employee.h"
#include "107_Manager.h"
#include "107_BOSS.h"

workmanager::workmanager()
{
	// Initialize
	this->m_emparray = NULL;
	this->m_empnum = 0;
};

workmanager::~workmanager()
{

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


			cout << "Successfully Added " << addnum << " people" << endl;
		}
	else
	{
		cout << "Wrong number added" << endl;
	}
		
	// clear the screen by pressing any key

	system("pause");
	system("cls");
}


	

