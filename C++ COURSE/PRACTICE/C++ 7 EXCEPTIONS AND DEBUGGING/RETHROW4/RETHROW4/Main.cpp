#include<iostream>
#include<stdexcept>
using namespace std;

void positiveNum(int num);
void process(int num);

int main()
{
	int input;

	try
	{
		cout << "enter a positive number" << endl;
		cin >> input;
		process(input);

	}
	catch (const invalid_argument& err)
	{
		cout << "there is a problem" << endl;
		cout << err.what();
	}
	return 0;
}

void positiveNum(int num)
{
	if (num >= 0)
	{
		cout << "you have enter a positive number" << endl;
	}
	else
	{
		throw invalid_argument("the number is negative");
	}
}
void process(int num)
{

	positiveNum(num);
	try
	{
		cout << "number passed in" << endl;
	}
	catch (const invalid_argument& err)
	{
		throw;
	}

}