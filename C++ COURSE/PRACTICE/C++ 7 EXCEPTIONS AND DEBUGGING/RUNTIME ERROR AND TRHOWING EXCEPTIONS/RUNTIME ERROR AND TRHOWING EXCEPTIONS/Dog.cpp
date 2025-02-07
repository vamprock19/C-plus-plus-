#include"Dog.h"
#include<string>
#include<iostream>
#include<stdexcept>
using namespace std;
Dog::Dog(string breed)
{
	if (breed != "Bulldog")
	{
		this->breed = breed;
	}
	else
	{
		throw runtime_error("Bulldogs are illegal in Canada");
	}
}
string Dog::getBreed()const
{
	return breed;
}