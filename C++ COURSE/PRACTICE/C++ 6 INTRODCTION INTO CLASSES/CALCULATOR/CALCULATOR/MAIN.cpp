#include"CALCULATOR.h"
#include<string>
#include<iostream>
using namespace std;
int main()
{
	CALCULATOR calculator;

	int n1;
	int n2;
	
	cout << "NUMBER 1" << endl;
	cin >> n1;
	cout << "NUMBER 2" << endl;
	cin >> n2;

	calculator.setA(n1);
	calculator.setB(n2);
	cout << endl;
	cout << "ADDITION: "<<calculator.getSum() << endl;
	cout << "SUBTRACTION: " << calculator.getSub() << endl;
	cout << "MULTIPLICATION: " << calculator.getMulti() << endl;
	cout << "DIVISION: " << calculator.getDiv() << endl;
	cout << "REMAINDER: " << calculator.getRemainder() << endl;
	
	return 0;
}