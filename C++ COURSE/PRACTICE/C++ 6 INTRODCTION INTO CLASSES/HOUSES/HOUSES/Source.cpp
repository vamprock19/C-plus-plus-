#include<iostream>
#include<string>


/*set number of stories
  set number of windows
  set color
  
  get number of stories
  get number of windows
  get color
  */
using namespace std;
class HOUSE
{
public:
	void setNumStories(int numStories)
	{
		this->numStories = numStories;
	}
	void setNumWindows(int numWindows)
	{
		this -> numWindows = numWindows;
	}
	void setColor(string color)
	{
		this -> color = color;
	}

	int getNumStories()const
	{
		return numStories;
	}
	int getNumWindows()const
	{
		return numWindows;
	}
	string getColor()const
	{
		return color;
	}
	
private:
	int numStories;
	int numWindows;
	string color;

};

int main()
{
	HOUSE myHouse;
	HOUSE yourHouse;

	myHouse.setNumStories(4);
	myHouse.setNumWindows(7);
	myHouse.setColor("Blue ");

	yourHouse.setNumStories(2);
	yourHouse.setNumWindows(5);
	yourHouse.setColor("Yellow ");

	cout << "My house has " << myHouse.getNumStories() << " stories, " << myHouse.getNumWindows()
		<< " windows and is color " << myHouse.getColor() << "." << endl;
	cout << endl;
	cout << "Menahile, your house has:  " << yourHouse.getNumStories() << " stories, " << yourHouse.getNumWindows()
		<< " windows, and is color " << yourHouse.getColor() << "." << endl;

	
	return 0;
}
