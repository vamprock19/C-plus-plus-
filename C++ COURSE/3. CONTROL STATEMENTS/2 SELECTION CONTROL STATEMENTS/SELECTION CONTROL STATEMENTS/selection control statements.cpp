#include<iostream>;
using namespace std;


/*
     Tree specific selection control statements:

	 *if
	 * if-else
	 *switch
	 Use conditions to determine what's executed 
*/
int main()
{
	int age;

	cout << "Welcome to the Pub and Grille!" << endl;
	cout << "Please enter your age" << endl;
	cin >> age;
	if (age >= 18)
	{
		cout << "Have a beer!" << endl;
	}
	else if (age <= 14)
	{
		cout << "Have a juice!" << endl;
	}
	else
	{
		cout << "Have a coke!" << endl;
	}
	cout << "Thanks for coming to the Pub and Grille!" << endl;

	return 0;
}