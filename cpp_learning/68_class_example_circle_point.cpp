#include<iostream>
#include<string>
#include<ctime>
#include "68_point.h"
#include "68_circle.h"
using namespace std;

// evaluate the relationship between point and circle

// point class
//class point
//{
//private:
//	int m_x;
//	int m_y;
//public:
//	void setx(int x)
//	{
//		m_x = x;
//	}
//	void sety(int y)
//	{
//		m_y = y;
//	}
//	int getx()
//	{
//		return m_x;
//	}
//	int gety()
//	{
//		return m_y;
//	}
//};
// we can set class to be a member of another class





// circle class
//class circle
//{
//private:
//	int m_r;
//	point m_center;
//public:
//	void setr(int r)
//	{
//		m_r = r;
//	}
//	int getr()
//	{
//		return m_r;
//	}
//
//	void setcenter(point center)
//	{
//		m_center = center;
//	}
//
//	point getcenter()
//	{
//		return m_center;
//	}
//
//
//
//};





void isincircle(circle& c, point& p)
{
	// calculate the distance between two points

	int dist = (c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) + (c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
	int rs = c.getr() * c.getr();
	if (dist == rs)
	{
		cout << "Point is on the circle." << endl;
	}
	else if (dist < rs)
	{
		cout << "Point is inside the circle." << endl;
	}
	else
	{
		cout << "Point is outside the circle." << endl;
	}
};

int main() {

	//create a circle

	circle c;
	point center;
	center.setx(10);
	center.sety(0);

	c.setr(10);
	c.setcenter(center);

	point p1;
	p1.setx(10);
	p1.sety(9);

	isincircle(c,p1);

	system("pause");
	return 0;

}





