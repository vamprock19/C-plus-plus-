#include"CALCULATOR.h"
#include<string>
#include<iostream>
using namespace std;

int main()
{
	CALCULATOR calculator;

	int n1 = 0;
	cout << "enter a number" << endl;
	cin >> n1;
	calculator.setA(n1);

	int n2 = 0;
	cout << "enter a second number" << endl;
	cin >> n2;
	calculator.setB(n2);
	
	cout << endl << endl;

	cout << " A = " << calculator.getA() << "    " <<
	" B = " << calculator.getB() << endl;
	cout << endl;
	
	
	cout << "Additon " << calculator.getAddition() << endl;
	cout << "subtraction " << calculator.getSubtraction() << endl;
	cout << "Multiplication " << calculator.getMultiplication() << endl;
	cout << "Division " << calculator.getDivision() << endl;
	cout << "Remainder " << calculator.getRemainder() << endl;

	
}