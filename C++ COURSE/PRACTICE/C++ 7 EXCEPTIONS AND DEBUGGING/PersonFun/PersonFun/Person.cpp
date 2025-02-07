#include"Person.h"
#include<string>
#include<stdexcept>
#include<iostream>
using namespace std;

Person::Person(string name)
{
	if (name != "Hector")
	{
		this->name = name;
	}
	else
	{
		throw runtime_error("Hector isn't on the list");
	}
}
string Person::getName()const
{
	return name;
}
void Person::setName(string name)
{
	this->name = name;
}