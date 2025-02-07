#include"Pizza.h"
#include<string>
#include<iostream>
#include<vector>
using namespace std;

Pizza::Pizza(string name, int cost, int diameter)
{
	this->name = name;
	this->cost = cost;
	this->diameter = diameter;
}
void Pizza::addTopping(string topping)
{
	toppings.push_back(topping);
}
void Pizza::printToppings()const
{
	for (string topping : toppings)
	{
		cout << "\t" << topping << endl;
	}
}
string Pizza::getName()const
{
	return name;
}
int Pizza::getCost()const
{
	return cost;
}
int Pizza::getDiameter()const
{
	return diameter;
}
void Pizza::printPizza()const
{
	cout << "Pizza: " << name << endl;
	cout << "Cost: " << cost << endl;
	cout << "Diameter: " << diameter << endl;
	
}
