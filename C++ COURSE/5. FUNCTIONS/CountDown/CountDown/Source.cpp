#include<iostream>
using namespace std;

void countDown(int num);
int sumValues(int num);

int main()
{
	countDown(10);
	int totalSum = sumValues(10);
	cout << "total sum is: " << totalSum << endl;
	return 0;
}

void countDown(int num)
{
	if (num >= 0)
	{
		cout << num << endl;
		countDown(num - 1);
	}
}
int sumValues(int num)
{
	if (num >= 1)
	{
		return num + sumValues(num - 1);
	}
	return num;
}