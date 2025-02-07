#include<iostream>;

using namespace std;

int main()
{

	double num1;
	 double num2;
	double  num3;
	double average;

	cout << "enter a real number "  << endl;
	cin >> num1;
	cout << "enter another real number "  << endl;
	cin >> num2;
	cout << "please enter a final real number " << endl;
	cin >> num3;
	
	average = (num1 + num2 + num3) / 3;

	cout << "Average is " << average << endl;
	
	
	
	/*
	                 ONE WAY TO PRINT IT OUT:
	 
	    cout << "Average is " << (num1 + num2 + num3) /3<< endl;
	*/
	return 0;

}