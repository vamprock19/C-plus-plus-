#include"Person.h"
#include<iostream>
#include<stdexcept>
#include<string>
using namespace std;

Person::Person(string name)
{
	setName(name);
}
void Person::setName(string name)
{
	if (name != "Jhon")
	{
		this->name = name;
	}
	else
	{
		throw runtime_error("who are you????");
	}
}
string Person::getName()const noexcept
{
	return name;
}