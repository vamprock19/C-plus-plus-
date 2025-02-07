#include<string>
using namespace std;
#ifndef HOUSE_H
#define HOUSE_H
class HOUSE
{
public:
	void setFloors(int floors);
	void setWindows(int windows);
	void setColor(string color);

	int getFloors()const;
	int getWindows()const;
	string getColor()const;
	void print()const;
private:
	int floors = 0;
	int windows = 0;
	string color;
};


#endif