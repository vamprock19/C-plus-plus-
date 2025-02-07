#ifndef HOUSE_H
#define HOUSE_H
#include<string>
using namespace std;
class HOUSE
{
	// setters
public:
	void setWindows(int windows);
	void setFloors(int floors);
	void setColor(string color);
	// getters
	int getWindows()const;
	int getFloors()const;
	string getColor()const;
	void print()const;

private:
	int floors = 0;
	int windows = 0;
	string color;
};



#endif
