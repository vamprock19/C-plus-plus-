#include"PIZZA.h";
#include<iostream>
#include<string>
using namespace std;

void printPizzaData(const Pizza& pizza);

int main()
{
	Pizza peperoni("Pepperoni", 8, 12);
	peperoni.addTopping("Tomato sauce");
	peperoni.addTopping("Salami");

	Pizza hawiian("Hawiian", 10, 12);
	hawiian.addTopping("Tomato sauce");
	hawiian.addTopping("Pineapple");
	hawiian.addTopping("Ham");


	printPizzaData(peperoni);
	printPizzaData(hawiian);


	return 0;
}
void printPizzaData(const Pizza& pizza)
{
	cout << "Pizza: " << pizza.getName() << endl;
	cout << "Price: " << pizza.getCost() << endl;
	cout << "Size: " << pizza.getDiameter() << endl;
	cout << "Toppings: " << endl;
	pizza.printToppings();
	cout << endl;

	
}