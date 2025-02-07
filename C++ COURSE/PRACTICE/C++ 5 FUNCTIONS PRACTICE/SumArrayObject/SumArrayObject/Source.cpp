#include<iostream>
#include<array>
using namespace std;

int SumArray(array<int, 10>array);

int main()
{
	array<int, 10>arrayData{ 10,10,10,10,10,8,4,13,45,78 };
	int total = SumArray(arrayData);
	cout << "the total is: " << total << endl;
	return 0;
}

int SumArray(array<int, 10>array)
{
	int sum = 0;
	for (int i : array)
	{
		sum += i;
	}
	return sum;
}