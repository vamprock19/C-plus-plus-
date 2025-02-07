#ifndef PIZZA_CLASS_H
#define PIZZA_CLASS_H
#include<string>
#include<vector>
using namespace std;

class Pizza
{
public:
	Pizza(string name, int cost, int diameter);
	void addTopping(string topping);
	string getName()const;
	int getCost()const;
	int getDiameter()const;
	void printToppings()const;


private:
	string name;
	int cost;
	int diameter;
	vector<string>toppings;


};



#endif
