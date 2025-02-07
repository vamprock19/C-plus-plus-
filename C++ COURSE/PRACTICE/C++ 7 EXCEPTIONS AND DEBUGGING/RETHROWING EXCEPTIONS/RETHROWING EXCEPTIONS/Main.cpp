#include <iostream>
#include <stdexcept>
using namespace std;

void processPositive(int num);
void doSomething(int num);

int main()
{
	int input;

	try
	{
		cout << "enter a number to process" << endl;
		cin >> input;
		doSomething(input);
		cout << "yay main was able to completely process the mum!" << endl;
	}
	catch (const invalid_argument& err)
	{
		cout << "main says there's an error!" << endl;
		cout << err.what() << endl;
	}
	catch (const out_of_range& err)
	{
		cout << "main says the number is too big!" << endl;
		cout << err.what() << endl;
	}

	return 0;
}

void processPositive(int num)
{
	cout << "welcome to the positive integer processor!" << endl;
	if (num > 100)
	{
		cout << "processPositive says the number is too big" << endl;
		throw out_of_range("Number cannot be greater than 100!");
	}
	else if (num >= 0)
	{
		cout << "good job! you passed in a positive num to process positive" << endl;
	}
	else
	{
		throw invalid_argument("Negative number passed in!");
	}
}

void doSomething(int num)
{
	try
	{
		processPositive(num);
		cout << "yay! doSomething could process that num!" << endl;
	}
	catch (const invalid_argument& err)
	{
		cout << "doSomething says there's a problem" << endl;
		throw; // rethrow
	}
	catch (const out_of_range& err)
	{
		cout << "doSomething says the number is too big!" << endl;
		throw; // rethrow
	}
}