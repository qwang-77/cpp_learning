#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// common coding: calculator


class calculator
{
public:
	int num_1;
	int num_2;
	int getresult(string oper)
	{
		if (oper == "+")
		{
			return num_1 + num_2;
		}
		else if (oper == "-")
		{
			return num_1 - num_2;
		}
		else if (oper == "*")
		{
			return num_1 * num_2;
		}
		// if we want to extend the new function, we need to monify the code
		// in the real development, we are open to extend, but we are closed to modify.
	}
};


void test01()
{
	// create a calculator object
	calculator c;
	c.num_1 = 10;
	c.num_2 = 20;
	cout << c.num_1 << " + " << c.num_2 <<" = " << c.getresult("+") << endl;
	cout << c.num_1 << " - " << c.num_2 << " = " << c.getresult("-") << endl;
	cout << c.num_1 << " * " << c.num_2 << " = " << c.getresult("*") << endl;

}


// use polymorphis to code a calculator

// realize a base class of calculator

class abscalculator
{
public:
	int m_num1;
	int m_num2;
	virtual int getresult()
	{
		return 0;
	}
};


// add calculator class

class addcalculator : public abscalculator
{
public:
	int getresult()
	{
		return m_num1 + m_num2;
	}
};


class minuscalculator : public abscalculator
{
public:
	int getresult()
	{
		return m_num1 - m_num2;
	}
};

class timescalculator : public abscalculator
{
public:
	int getresult()
	{
		return m_num1 * m_num2;
	}
};

//class dividecalculator : public abscalculator
//{
//public:
//	int getresult()
//	{
//		return m_num1 / m_num2;
//	}
//};

void test02()
{
	// condition to use polymorphis:
	// the pointer of base class or reference points to the objectives of derived class

	// Advantages:
	// 1. Structure is clear
	// 2. Organized and readable;
	// 3. Easier to maintain.

	abscalculator* abc = new addcalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;

	cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getresult() << endl;
	delete abc;

	abc = new minuscalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;

	cout << abc->m_num1 << " - " << abc->m_num2 << " = " << abc->getresult() << endl;
	delete abc;

	abc = new timescalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;

	cout << abc->m_num1 << " * " << abc->m_num2 << " = " << abc->getresult() << endl;
	delete abc;


}

int main() {
	test02();
	system("pause");
	return 0;

}





