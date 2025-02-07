#ifndef PIZZA_H
#define PIZZA_H
#include<string>
#include<vector>
using namespace std;
class Pizza
{
public:
	Pizza(string name, int cost, int diameter);
	void addTopping(string topping);
	void printToppings()const;
	void printPizza()const;

	string getName()const;
	int getCost()const;
	int getDiameter()const;



private:
	string name;
	int cost;
	int diameter;
	vector<string>toppings;

};

#endif
