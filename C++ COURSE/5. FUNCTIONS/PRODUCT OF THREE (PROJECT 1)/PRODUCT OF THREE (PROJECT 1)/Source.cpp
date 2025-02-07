#include<iostream>
using namespace std;

int multiply(int num1, int num2, int num3); \

int sum(int num1, int num2, int num3);

int main()
{
	int total =  multiply(5,5,5);
	cout << "total is: " << total << endl;

	int sumTotal = sum(10, 50, 45);
	cout << "sum's total is: " << sumTotal << endl;
	
	return 0;
}


int multiply(int num1, int num2, int num3)
{
	return num1 * num2 * num3;
}
int sum(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}

