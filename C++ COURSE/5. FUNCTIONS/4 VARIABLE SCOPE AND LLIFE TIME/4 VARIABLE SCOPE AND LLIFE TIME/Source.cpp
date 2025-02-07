#include <iostream>
using namespace std;

void someFunction(int aParam);

double myGlobalDoouble = 3.14159;

int main()
{
	int localToMain = 20;

	cout << "The local to main variable is: " << localToMain << endl;
	cout << "global double is: " << myGlobalDoouble << endl;
	cout << endl << endl;

	someFunction(25);
	someFunction(28);
	someFunction(32);
	cout << endl << endl;


	return 0;
}

void someFunction(int aParam)
{
	cout << "someFunction()" << endl << endl;
	int myLocalNum = 100;
	static int myStatic = 500;

	myLocalNum++;
	myGlobalDoouble++;
	myStatic++;

	cout << "My local number is: " << myLocalNum << endl;
	cout << "The parameter is: " << aParam << endl;
	cout << "My global double in someFunction is: " << myGlobalDoouble << endl;
	cout << "My static variable is: " << myStatic << endl;
}

