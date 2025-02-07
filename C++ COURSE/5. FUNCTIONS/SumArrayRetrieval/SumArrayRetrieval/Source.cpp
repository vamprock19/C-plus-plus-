#include<iostream>
#include<array>
using namespace std;

// don't reinvent the wheel -- rule ( NOT TO USE SOMETHING THAT'S ALREADY  HAVE BEEN DONE
//  recurtion --  when the code is called by itself

int sumArray(array<int, 10>theArray);
int sumArray(array<int, 10>theArray, int& theSum);



int main()
{
	array<int, 10>primaryArray{2,4,6,8,10,12,14,16,18,20};

	int theResult = sumArray(primaryArray);
	int resultByRef;

	sumArray(primaryArray, resultByRef);
	
	cout << "The result is: " << theResult << endl;
	cout << "Result by ref is: " << resultByRef << endl;

	
	return 0;
}

int sumArray(array<int, 10>theArray)
{
	int sum = 0;

	for (int item : theArray)
	{
		sum += item;
	}
	return sum;
}

int sumArray(array<int, 10>theArray, int& theSum)
{
	//theSum = 0; // integer called from the parameter 

	theSum = sumArray(theArray);

	return theSum;
}
