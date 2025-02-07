#include"Dog.h"
#include<string>
#include<stdexcept>
#include<iostream>
using namespace std;
int main()
{
	try
	{
		
		Dog dog1("chihuahua");
		Dog dog2("German Shepherd");
		Dog dog3("Poodle");
		Dog dog4("Beagle");
		Dog dog5("Bulldog");


		cout << dog1.getBreed() << endl;
		cout << dog2.getBreed() << endl;
		cout << dog3.getBreed() << endl;
		cout << dog4.getBreed() << endl;
		cout << dog5.getBreed() << endl;
	}
	catch (const runtime_error& err)
	{
		cerr << err.what() << endl;
	}

	return 0;
}