#include<iostream>
#include<cmath>
using namespace std;

int factorial(int numF);

int main()
{
	int result = factorial(16);
	cout << result << endl;
	return 0;
}


int factorial(int numF)
{
	if (numF > 1)
	{
		return numF * factorial(numF - 1);
		
	}
	return numF;
}



