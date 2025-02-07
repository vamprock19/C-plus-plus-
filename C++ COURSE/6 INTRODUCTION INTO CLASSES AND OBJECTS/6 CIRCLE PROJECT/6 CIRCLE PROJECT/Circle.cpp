#include"Circle.h"
#include<iostream>
#include<string>
using namespace std;

//const double pi = 3.1416;

Circle::Circle():pi(3.1416)
{
	radius = 1;
	
}
Circle::Circle(double radius) : pi(3.1416)
{
	this->radius = radius;
}
double Circle::getRadius()const
{
	return radius;
}
void Circle::setRadius(double radius)
{
	this->radius = radius;
}
double Circle::circumference()const
{
	// C = 2 * pi * r
	return 2 * pi * radius;
}
double Circle::area()const
{
	// A = pi * r^2
	return pi * pow(radius, 2);
}

