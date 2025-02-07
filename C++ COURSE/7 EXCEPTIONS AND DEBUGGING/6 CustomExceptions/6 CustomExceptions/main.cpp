#include<iostream>
#include"AngryCatException.h"
using namespace std;

void feedKitty(int numTreats);

int main()
{
	int numTreats = 0;

	cout << "how many treats do you want to feed kitty?" << endl;

	cin >> numTreats;
	try
	{
		feedKitty(numTreats);
	}
	catch (const AngryCatException& err)
	{
		cout << err.what() << endl;
	}
	return 0;
}

void feedKitty(int numTreats)
{
	if (numTreats < 3)
	{
		throw AngryCatException();
    }
	cout << "kitty is happy with " << numTreats << " treats. " << endl;
}