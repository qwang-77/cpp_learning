#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// design a cube class

class cube
{
private:
	double m_l;
	double m_w;
	double m_h;

public:
	double getarea()
	{
		return 2 * (m_l * m_w + m_w * m_h + m_l * m_h);
	};

	double getvolumn()
	{
		return m_l * m_w * m_h;
	};

	void setl(double length)
	{
		m_l = length;
	}

	void setw(double width)
	{
		m_w = width;
	}
	void seth(double height)
	{
		m_h = height;
	}

	double getl()
	{
		return m_l;
	}

	double getw()
	{
		return m_w;
	}

	double geth()
	{
		return m_h;
	}

	// using member function evaluate whether they are same

	bool issamebyclass(cube& c)
	{
		if (m_l == c.getl() && m_w == c.getw() && m_h == c.geth())
		{
			return true;
		}
		return false;
	}

};

bool issame(cube c1, cube c2)
{
	if (c1.getl() == c2.getl() && c1.getw() == c2.getw() && c1.geth() == c2.geth())
	{
		return true;
	}

	return false;
};

int main() {

	cube c1;
	c1.setl(10);
	c1.setw(10);
	c1.seth(10);
	cout << "The surface area of c1 is: " << c1.getarea() << endl;
	cout << "The volumn of c1 is: " << c1.getvolumn() << endl;

	cube c2;
	c2.setl(10);
	c2.setw(10);
	c2.seth(11);

// using global function to evaluate

	bool ret = issame(c1, c2);
	if (ret)
	{
		cout << "They are same cube!" << endl;
	}
	else
	{
		cout << "They are not the same cube!" << endl;
	};

	if (c1.issamebyclass(c2))
	{
		cout << "Member: They are same cube!" << endl;
	}

	else
	{
		cout << "Member: They are not the same cube!" << endl;
	}

	system("pause");
	return 0;

}





