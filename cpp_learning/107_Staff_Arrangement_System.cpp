#include "107_workmanager.h"
#include "107_worker.h"
#include "107_Employee.h"
#include "107_Manager.h"
#include "107_BOSS.h"

using namespace std;

int main() {
	workmanager wm;





	int choice = 0;
	while (true)
	{
		wm.show_menu();
		cout << "Please enter your choice" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: // exit the system
			wm.exit_all();
			break;
		case 1: // add staff
			wm.add_emp();
			break;
		case 2: // show staff
			break;
		case 3: //delete staff
			break;
		case 4: // modify staff
			break;
		case 5: // look for staff
			break;
		case 6: // sort staff
			break;
		case 7: // clear all information
			break;
		default:
			system("cls");
			break;
		}
	}
	

	system("pause");
	return 0;

}