#include<iostream>
#include<string>
using namespace std;

// Show the menu
void showMenu()
{
	cout << "**********************************" << endl;
	cout << "*****  1. Add a new contact  *****" << endl;
	cout << "*****  2. Show all contacts  *****" << endl;
	cout << "*****  3. Delete a contact   *****" << endl;
	cout << "*****  4. Look for a contact *****" << endl;
	cout << "*****  5. Modify a contact   *****" << endl;
	cout << "*****  6. Clear all contacts *****" << endl;
	cout << "*****  0. Exit the system    *****" << endl;
	cout << "**********************************" << endl;
}
struct contact
{
	string name;
	int gender;
	int age; // 1:male, 2: female
	string phone;
	string address;
};

const int MAX = 1000; // define the most occupancy of the contact
struct contactbook
{
	struct contact contactarray[MAX];
	int m_size;
};


void addperson(contactbook* book)
{
	// whether the book is full, if it's full then do not add
	if (book->m_size == MAX)
	{
		cout << "Maximum Occupancy! Cannot add more contacts!" << endl;
		return;
	}
	else 
	{
		// Input the name
		cout << "Please input the name of the contact" << endl;
		string name;
		cin >> name;
		book->contactarray[book->m_size].name = name;

		// Input the gender
		cout << "Please input the gender of the contact, 1 for male, 2 for female" << endl;

		while (true) 
		{
			int gender;
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				book->contactarray[book->m_size].gender = gender;
				break;
			}
			else 
			{
				cout << "ERROR! Only 1 and 2 can be accepted, enter again." << endl;
			}
		}


		

		// Input the age
		cout << "Please input the age of the contact" << endl;
		while (true) 
		{
			int age;
			cin >> age;
			if (age >= 0 && age <= 100)
			{
				book->contactarray[book->m_size].age = age;
				break;
			}
			else
			{
				cout << "ERROR! Unreasonable age, please enter again." << endl;
			}
		}
	

		// Input the phone number
		cout << "Please input the phone number of the contact" << endl;
		string phone;
		cin >> phone;
		book->contactarray[book->m_size].phone = phone;

		// Input the address
		cout << "Please input the address of the contact" << endl;
		string add;
		cin >> add;
		book->contactarray[book->m_size].address = add;

		cout << "Added successfully. Back to the main menu." << endl;
		// update the size

		book->m_size++;

		system("pause"); // press any key to continue
		system("cls"); // clean the screen

		return;
	}
}

void showperson(contactbook book)
{
	if (book.m_size == 0)
	{
		cout << "Empty contact book!" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		for (int i = 0; i < book.m_size; i++)
		{
			cout << "Name: " << book.contactarray[i].name << "\t";
			cout << "Gender: " << (book.contactarray[i].gender == 1 ? "male" : "Female") << "\t";
			cout << "Age: " << book.contactarray[i].age << "\t";
			cout << "Phone: " << book.contactarray[i].phone << "\t";
			cout << "Address: " << book.contactarray[i].address << endl;
		}
		system("pause");
		system("cls");
		return;
	}
}

// first, detect whether there is a person has this name, if yes, then return the place, if not, return -1.
int isexist(contactbook* book, string name)
{
	for (int i = 0; i < book->m_size; i++)
	{
		if (book->contactarray[i].name == name)
		{
			return i;
		}
	}
	// if after the loop, no one corresponds to the value, then return -1.
	return -1;
}

void deleteperson(contactbook* book)
{
	cout << "Please enter the name you want to delete" << endl;
	string name;
	cin >> name;
	int res = isexist(book, name);
	if (res != -1)
	{
		for (int j = res; j < book->m_size; j++)
		{
			book->contactarray[j] = book->contactarray[j+1];
		}
		book->m_size--;
		cout << "Deleted successfully." << endl;
		system("pause");
		system("cls");
		
	}
	else
	{
		cout << "Contact not be found. Back to the main menu." << endl;
		system("pause");
		system("cls");
	}
}

void findperson(contactbook* book)
{
	cout << "Please enter the name you want to find." << endl;
	string name;
	cin >> name;
	int res = isexist(book, name);
	if (res != -1)
	{
		cout << "Name: " << book->contactarray[res].name << "\t";
		cout << "Gender: " << (book->contactarray[res].gender == 1 ? "male" : "Female") << "\t";
		cout << "Age: " << book->contactarray[res].age << "\t";
		cout << "Phone: " << book->contactarray[res].phone << "\t";
		cout << "Address: " << book->contactarray[res].address << endl;
		system("pause");
		system("cls");

	}
	else
	{
		cout << "Contact not be found. Back to the main menu." << endl;
		system("pause");
		system("cls");
	}

}

void modifyperson(contactbook* book)
{
	cout << "Please input the name you want to modify" << endl;;
	string name;
	cin >> name;
	int res = isexist(book, name);
	if (res != -1)
	{
		// Input the name
		cout << "Please input the new name of the contact" << endl;
		string name;
		cin >> name;
		book->contactarray[res].name = name;

		// Input the gender
		cout << "Please input the new gender of the contact, 1 for male, 2 for female" << endl;

		while (true)
		{
			int gender;
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				book->contactarray[res].gender = gender;
				break;
			}
			else
			{
				cout << "ERROR! Only 1 and 2 can be accepted, enter again." << endl;
			}
		}




		// Input the age
		cout << "Please input the new age of the contact" << endl;
		while (true)
		{
			int age;
			cin >> age;
			if (age >= 0 && age <= 100)
			{
				book->contactarray[res].age = age;
				break;
			}
			else
			{
				cout << "ERROR! Unreasonable age, please enter again." << endl;
			}
		}


		// Input the phone number
		cout << "Please input the new phone number of the contact" << endl;
		string phone;
		cin >> phone;
		book->contactarray[res].phone = phone;

		// Input the address
		cout << "Please input the new address of the contact" << endl;
		string add;
		cin >> add;
		book->contactarray[res].address = add;

		cout << "Modified successfully. Back to the main menu." << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "Contact not be found. Back to the main menu." << endl;
		system("pause");
		system("cls");
	}
}

void clearbook(contactbook* book)
{
	book->m_size = 0;
	cout << "All the contacts has been cleared" << endl;
	system("pause");
	system("cls");
}

int main()
{
	contactbook book;
	book.m_size = 0;

	while (true) 
	{
		showMenu();
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 1: // add a new contact
			addperson(&book); //using address passing to modify global variables.
			break;
		case 2: // show a contact
			showperson(book);
			break;
		case 3: // delete a contact
		{	
			/*
			cout << "Please input a name to delete: " << endl;
			string name;
			cin >> name;
			
			if (isexist(&book, name) == -1)
			{
				cout << "Contact not found." << endl;
			}
			else
			{
				cout << "Contact found." << endl;
			}
			*/
			deleteperson(&book);
			break;
		}
		case 4: // look for a contact
			findperson(&book);
			break;
		case 5: // modify a contact
			modifyperson(&book);
			break;
		case 6: // clear all contact
			clearbook(&book);
			break;
		case 0: // exit the system
			cout << "Thanks for Using." << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "Please reenter a number between 0 to 6" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	

}