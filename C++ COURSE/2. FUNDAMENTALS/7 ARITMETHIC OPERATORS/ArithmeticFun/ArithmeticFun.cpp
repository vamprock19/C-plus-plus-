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

#include<iostream>
using namespace std;

int main()
{
	/*
	    int a + b 
			+ = operator
				a = operand

	*/
	int a = 10;
	int b = 3;
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;
	int result = 10; // 10 is taken, + 15, storages in results = 25
	int myInt = 5;

	result += 15; // result = result + 15


	cout <<"Sum = "<< sum << endl;
	cout <<"difference = "<< difference << endl;
	cout <<"product = "<< product << endl;
	cout <<"quotient = "<< quotient << endl;
	cout <<"remainder = "<< remainder << endl;
	cout << "result = " << result << endl;
	   
	cout << myInt << endl;
	myInt++; // ++myInt;   myInt += 1;  myInt = myInt + 1;
	cout << myInt << endl;
	myInt--; // --myInt;   myInt -= 1;  myInt = myInt - 1;
	cout << myInt << endl;


	return 0;
}