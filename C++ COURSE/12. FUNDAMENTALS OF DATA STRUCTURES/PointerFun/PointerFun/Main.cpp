#include<iostream>
using namespace std;

int main()
{
	int myLovelyInt = 150;
	int* somePtr = &myLovelyInt; // & used to get the address
	cout << "mylovelyInt is originally: " << myLovelyInt << endl;
	cout << "pointer holds value: " << somePtr << endl; 
	cout << "pointer dereferenced: " << *somePtr << endl;
	*somePtr = 200;

	cout << "myLovelyInt is now: " << myLovelyInt << endl;
	return 0;
}