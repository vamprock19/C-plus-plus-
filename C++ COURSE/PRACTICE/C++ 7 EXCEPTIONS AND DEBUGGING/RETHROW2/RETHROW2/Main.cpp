#include<iostream>
#include<stdexcept>
using namespace std;

void positiveNum(int num);
void process(int num);

int main()
{
	try
	{
		int input;
		cout << "please enter a positive number" << endl;
		cin >> input;
		process(input);
	}
	catch (const invalid_argument& err)
	{
		cout << err.what();
	}
	
	
	return 0;
}

void positiveNum(int num)
{
	
	if (num >= 0)
	{
		cout << "the number is positive" << endl;
	}
	else
	{
		// throwin the argument
		throw invalid_argument("the number is negative");
	}
}
void process(int num)
{
	positiveNum(num);
	try
	{
		cout << "that number has been processed" << endl;
	}
	catch (const invalid_argument& err)
	{
		throw; //retrowing the argument 
	}
}
