#include<iostream>
#include<string>
using namespace std;

int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int num);
int substraction(int num1, int num2);

int main()
{
	int resultNum = getResult(20, 30);
	string nameResult = getResult("Jhon", "Baugh");
	int cubeResult = getResult(5);
	int subtotal = substraction(10,5);
	

	cout << "result num is: " << resultNum << endl;
	cout << "name result is:" <<nameResult << endl;
	cout << "cube result is: " << cubeResult << endl;
	cout << "substraction is:" << subtotal << endl;
	 return 0;
}

int getResult(int num1, int num2)
{
	return num1 * num2;
}

string getResult(string str1, string str2)
{
	return str1 + "" + str2;
}

int getResult(int num)
{
	return num * num * num;
}
 
int substraction(int num1, int num2)
{
	return num1 - num2;
}
