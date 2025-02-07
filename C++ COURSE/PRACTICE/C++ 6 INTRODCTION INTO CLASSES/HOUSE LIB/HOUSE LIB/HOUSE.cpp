#include"HOUSE.h"
#include<string>
#include<iostream>
using namespace std;
// setters
void HOUSE::setWindows(int windows)
{
	this->windows = windows;
}
void HOUSE::setFloors(int floors)
{
	this->floors = floors;
}
void HOUSE::setColor(string color)
{
	this->color = color;
}
// getters
int HOUSE::getWindows()const
{
	return windows;
}
int HOUSE::getFloors()const
{
	return floors;
}
string HOUSE::getColor()const
{
	return color;
}
void HOUSE::print()const
{
	cout << "The house is " << color 
		<< ", has " << floors <<
		" floors, and " << windows 
		<< " windows." << endl;
}
