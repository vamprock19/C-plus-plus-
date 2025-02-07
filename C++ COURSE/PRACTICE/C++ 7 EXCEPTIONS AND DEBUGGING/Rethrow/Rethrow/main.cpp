#include<iostream>
#include<stdexcept>
using namespace std;

void Positivenum(int num);
void Dosomething(int num);

int main()
{
	int input;
	try
	{
		cout << "enter a number to process" << endl;
		cin >> input;
		Dosomething(input);
		cout << "yheap main was able to completly procces tha num" << endl;
	}
	catch (const invalid_argument& err)
	{
		cout << "yay main says there is an error" << endl;
		cout << err.what() << endl;
	}
	return 0;

}

void Positivenum(int num)
{
	cout << "enter a positive number" << endl;
	if(num >= 0)
	{
		cout << " you enter a positive number" << endl;
	}
	else
	{
		throw invalid_argument(" you enter a negative nummber instead of a positive one");
	}
}

void Dosomething(int num)
{
	try
	{
		Positivenum(num);
		cout << "yay doSomethig could proccess that num" << endl;
	}
	catch (const invalid_argument& err)
	{
		cout << "doSomethinng says there is a problem" << endl;
		throw;  // retrow
	}
}