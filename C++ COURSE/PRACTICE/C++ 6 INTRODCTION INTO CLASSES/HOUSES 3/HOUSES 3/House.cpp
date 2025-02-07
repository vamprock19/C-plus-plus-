#include<string>
#include"HOUSE.h"
#include<iostream>
using namespace std;
// setters
void HOUSE::setFloors(int floors)
{
	this->floors = floors;
}
void HOUSE::setWindows(int windows)
{
	this->windows = windows;
}
void HOUSE::setColor(string color)
{
	this->color = color;
}
// getters
int HOUSE::getFloors()const
{
	return floors;
}
int HOUSE::getWindows()const
{
	return windows;
}
string HOUSE::getColor()const
{
	return color;
}
void HOUSE::print()const
{
	cout << "The house is " << color <<
		", has " << windows <<
		" windows, and " << floors <<
		" floors." << endl;
}
 