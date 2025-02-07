#include<string>
#ifndef HOUSE_H
#define HOUSE_H
using namespace std;
class House
{
public:
	// constructor
	House();
	House(int numStories, int numWindows, string color);

	// destructor
	~House();
	

	void setNumStories(int numStories);
	void setNumWindows(int numWindows);
	void setColor(string color);

	int getNumStories()const;
	int getNumWindows()const;
	string getColor()const;

	void print()const;

private:
	int numStories = 0;
	int numWindows = 0;
	string color = "";
};
#endif
