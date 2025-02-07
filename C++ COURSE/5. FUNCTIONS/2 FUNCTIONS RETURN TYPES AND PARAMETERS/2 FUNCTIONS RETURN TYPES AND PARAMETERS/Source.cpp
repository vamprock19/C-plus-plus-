#include<iostream>
using namespace std;

void printHello();// void return type | no parameters.                                  void parameter less function
void printNumber(int a);//void return type | single parameter.                          void parameter rise function
int giveMe10();// integer valid return type | no parameters.                            value returning function with 2 parameters
int addThese(int num1, int num2);//integer valid return type | 2 integers parameters.   value returning function with 2 int parameters
int square(int a);

int main()
{
	int num1 = 120;
	int num2 = 580;

	int a = 5;

	printHello();
	printNumber(100);
	
	int someData = giveMe10();
	cout << someData << endl;

	int totalValue = addThese(num1, num2);
	cout << totalValue << endl;

	printNumber(addThese(num1, 50));

	printNumber(square(a));
	return 0;
}

void printHello()
{
	cout << "hello there" << endl;
}
void printNumber(int a)
{
	cout << "the number is " << a << endl;
}
int giveMe10()
{
	return 10;
}
int addThese(int num1, int num2)
{
	return num1 + num2;
}
int square(int a)
{
	int value = a*a;
	return value;
}
