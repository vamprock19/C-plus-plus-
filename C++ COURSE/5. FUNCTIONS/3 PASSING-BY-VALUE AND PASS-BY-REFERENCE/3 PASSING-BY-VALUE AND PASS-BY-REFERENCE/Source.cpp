#include<iostream>
using namespace std;

void valueChanged1(int someNum);
void valueChanged2(int& someNum);
void threeTimesN(int input, int& output);

int main()
{
	int myNumber = 20;
	//cout << "before value changed1 call, my number is: " << myNumber << endl;
	//valueChanged1(myNumber); // change by value: you can only pass literal numbers or variables
	//cout<<"after value changed1 call, my number is: "<<myNumber<<endl;

	//cout << endl << endl << endl;

	//cout << "my number is currently: " << myNumber << endl;
	//valueChanged2(myNumber);// change by reference: you should only pass variables
	//cout<<"after valueChanged2 call, my number is:  " << myNumber << endl;

	//cout << endl << endl << endl;

	int myInputNum;

	
	threeTimesN(100, myInputNum);
	cout << "after threeTimesN call, my input is: " << myInputNum << endl;



	return 0;
}
void valueChanged1(int someNum)
{
	someNum = 100;
	cout << someNum << endl;
}
void valueChanged2(int& someNum)
{
	someNum = 100;
	cout << someNum << endl;
}
void threeTimesN(int input, int& output)
{
	output = input * 3;

	
}

