// ARITHMETIC OPERATORS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
   ARITHMETIC OPERATORS:

   + Addition operator
   - Substraction operator
   * Multiplication operator
   / Division operator
   % Modulus operator

   COMPUND OOPERATORS:

   OPERATORS + = / COMPUND OPERATORS

*/
#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
 
	cout << "plaese enter a 1st value" << endl;
	cin >> a;
	cout << "please enter a 2nd value " << endl;
	cin >> b;

	cout << "add = " << (a + b) << endl;
	cout << "substract = " << (a - b) << endl;
	cout << "multiply = " << (a * b) << endl;
	cout << "divide = " << (a / b) << endl;
	cout << "reminder = " << (a % b) << endl;
	return 0;
}

