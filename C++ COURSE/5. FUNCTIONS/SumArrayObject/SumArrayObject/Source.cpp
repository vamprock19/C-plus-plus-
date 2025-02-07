#include<iostream>
#include<array>
using namespace std;

int SumArray(array<int, 10> thearray);

int main()
{
	array<int, 10>primaryIrray{1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	int total = SumArray(primaryIrray);

	cout << " the total is: " << total << endl;


	return 0;
}

int SumArray(array<int, 10> thearray)
{
	int sum = 0;

	for (int item : thearray)
	{
		sum += item;
	}

	return sum;
}
