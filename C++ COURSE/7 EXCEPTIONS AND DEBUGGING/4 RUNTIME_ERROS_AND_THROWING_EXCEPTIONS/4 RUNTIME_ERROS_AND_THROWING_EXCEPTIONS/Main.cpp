#include"Dog.h"
#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

int main()
{
	try
	{
		
		
		Dog dog1("chihuaha");
		Dog dog2("voldermot");
		Dog dog3("little rat");
		Dog dog4("Poddle");
		Dog dog5("French Puddle");
		

		cout << dog1.getBreed() << endl;
		cout << dog2.getBreed() << endl;
		cout << dog3.getBreed() << endl;
		cout << dog4.getBreed() << endl;
	}
	catch (const runtime_error& err)
	{
		cout << err.what() << endl;
	}

	return 0;
}