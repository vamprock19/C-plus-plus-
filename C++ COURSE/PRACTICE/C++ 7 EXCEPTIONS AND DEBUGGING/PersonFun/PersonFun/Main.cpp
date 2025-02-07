#include"Person.h"
#include<string>
#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
	try
	{
		Person person1("Sally");
		Person person2("Victoria");
		Person person3("Jhon");
		Person person4("Fany");
		Person person5("Hector");

		cout << person1.getName() << endl;
		cout << person2.getName() << endl;
		cout << person3.getName() << endl;
		cout << person4.getName() << endl;
		cout << person5.getName() << endl;
		
	}
	catch(const runtime_error& err)
	{
		cerr << err.what() << endl;
	}

	return 0;
}