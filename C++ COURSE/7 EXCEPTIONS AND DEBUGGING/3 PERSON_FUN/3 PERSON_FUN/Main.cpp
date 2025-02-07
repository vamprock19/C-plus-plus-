#include"Person.h"
#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	try
	{
		Person person1("Bob");
		Person person2("Sally");
		Person person3("Jhon"); // change the name to see the error message
		Person person4("William");

		cout << person1.getName() << endl;
		cout << person2.getName() << endl;
		cout << person3.getName() << endl;
		cout << person4.getName() << endl;
	}
	catch (const runtime_error& err)
	{
		cout << err.what() << endl;
	}

	return 0;
}