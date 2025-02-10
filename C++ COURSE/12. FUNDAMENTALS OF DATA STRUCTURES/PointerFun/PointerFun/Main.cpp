#include<iostream>
using namespace std;

int main()
{
	int myLovelyInt = 150;
	double myDouble = 3.14;

	int* somePtr = &myLovelyInt; // & used to get the address. 
	double* doublePtr = &myDouble;


	cout << "mylovelyInt is originally: " << myLovelyInt << endl;
	cout << "pointer holds value: " << somePtr << endl; 
	cout << "pointer dereferenced: " << *somePtr << endl; // dereferenced
	*somePtr = 200;

	cout << "myLovelyInt is now: " << myLovelyInt << endl;
	
	cout << doublePtr << endl;
	cout << *doublePtr << endl;
	return 0;
}