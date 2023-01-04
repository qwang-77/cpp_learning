#pragma once
#include<iostream>
#include "68_point.h"
using namespace std;

class circle
{
private:
int m_r;
point m_center;
public:
void setr(int r);
	
int getr();

void setcenter(point center);

point getcenter();



};
