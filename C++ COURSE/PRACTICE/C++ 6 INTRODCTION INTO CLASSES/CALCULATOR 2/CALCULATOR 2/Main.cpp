#include"CALCULATOR.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	CALCULATOR calculator;

	cout << "enter a number" << endl;
	cin >> calculator.setA();
	cout << "enter another numer" << endl;
	cin >> calculator.setB();
	cout << endl;
	cin >>"Addition"<< calculator.getAddition();
	cout << endl;
	cin >> "Subtraction"<<calculator.getSubtraction();
	cout << endl;
	cin >> "Multiplication"<<calculator.getMultiplication();
	cout << endl;
	cin >> "Division"<<calculator.getDivision();
	cout << endl;
	cin>>"Remainder"<<calculator.getRemainder()
	

	return 0
}