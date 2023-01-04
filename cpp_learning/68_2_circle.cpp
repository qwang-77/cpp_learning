#include "68_circle.h"


void circle::setr(int r)
{
	m_r = r;
}
int circle::getr()
{
	return m_r;
}

void circle::setcenter(point center)
{
	m_center = center;
}

point circle::getcenter()
{
	return m_center;
}