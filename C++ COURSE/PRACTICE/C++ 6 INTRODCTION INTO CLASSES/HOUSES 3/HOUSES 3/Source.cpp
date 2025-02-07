#include<iostream>
#include<string>
#include"House.h"
using namespace std;
int main()
{
	HOUSE myHouse;
	HOUSE yourHouse;

	myHouse.setFloors(3);
	myHouse.setWindows(15);
	myHouse.setColor("CYAN");

	yourHouse.setFloors(2);
	yourHouse.setWindows(8);
	yourHouse.setColor("RED");

	myHouse.print();
	yourHouse.print();

	return 0;
}