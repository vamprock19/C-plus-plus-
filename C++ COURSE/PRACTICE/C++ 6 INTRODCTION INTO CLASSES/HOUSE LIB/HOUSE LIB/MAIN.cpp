#include<iostream>
#include "HOUSE.h"
#include<string>
using namespace std;
int main()
{
	HOUSE myHouse;
	HOUSE yourHouse;

	myHouse.setColor("RED");
	myHouse.setFloors(3);
	myHouse.setWindows(18);

	yourHouse.setColor("GREEN");
	yourHouse.setFloors(2);
	yourHouse.setWindows(6);

	myHouse.print();
	yourHouse.print();
	

	return 0;
}