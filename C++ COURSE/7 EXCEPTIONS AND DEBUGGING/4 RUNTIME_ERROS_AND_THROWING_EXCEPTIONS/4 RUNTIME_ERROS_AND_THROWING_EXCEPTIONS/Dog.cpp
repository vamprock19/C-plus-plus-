#include"Dog.h"
#include<string>
#include<iostream>
#include<stdexcept>
using namespace std;

Dog::Dog(string breed)
{
	if (breed != "poddle")
	{
		this->breed = breed;
	}
	else
	{
		throw runtime_error("poddles are illegal in this country");
	}
}
string Dog::getBreed()const
{
	return breed;
}