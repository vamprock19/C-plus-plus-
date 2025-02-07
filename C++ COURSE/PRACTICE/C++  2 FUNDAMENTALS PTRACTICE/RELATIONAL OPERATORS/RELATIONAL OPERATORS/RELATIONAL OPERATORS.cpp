#include<iostream>

using namespace std;
/*
    relational operators

	<   less than
	<=  less than or equal to 
	>   greater than 
	>=  greater than or equal to
	==  equal to 
	!=  not equal to
*/
int main()
{
	int cats = 20;
	int kitties = 50;

	cout << boolalpha;
	cout << (cats < kitties) << endl;
	cout << (cats <= kitties) << endl;
	cout << (cats > kitties) << endl;
	cout << (cats >= kitties) << endl;
	cout << (cats == kitties) << endl;
	cout << (cats != kitties) << endl;






	return 0;
}