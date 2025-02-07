#include<iostream>
using namespace std;

int sumArray(int myArray[], int arraySize);

int main()
{
	int arrayNums[]{ 10,10,10,10,10,10,10,10,10,10 };
	int total = sumArray(arrayNums, 10);

	cout << "sum's total is: " << total << endl;

	return 0;
}

int sumArray(int myArray[], int arraySize)
{
	int sum = 0;

	for (int i = 0; i < arraySize; i++)
	{
		sum += myArray[i];
	}

	return sum;
}