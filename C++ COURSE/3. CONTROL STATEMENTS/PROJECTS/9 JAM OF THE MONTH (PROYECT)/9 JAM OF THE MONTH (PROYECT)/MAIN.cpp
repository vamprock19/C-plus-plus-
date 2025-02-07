#include<iostream>;
#include<cstdlib>;
#include<ctime>;
#include<string>;

/*
   package A:
   *$8/month
   * includes 2 jams per month
   * each additionals jam of the 2 is 5$ each
   
   package B:
   *$12/month
   *includes 4 jams per month
   * each additional jam of the 4 is 4$ each
   
   package C:
   *$15/month
   * includes 6 jams per month
   * each additional jam of the 6 is 3$ each
*/

using namespace std;

int main()
{
	char whichPackage;
	int howManyJams = 0;
	int montlyFee = 0;
	int jamsIncluded = 0;
	int jamPrice = 0;
	int totalCost;

	cout << "what package do you own? A , B or C" << endl;
	cin >> whichPackage;
	cout << "how many jams per month?" << endl;
	cin >> howManyJams;

	if (whichPackage == 'A' || whichPackage == 'a')
	{
		montlyFee = 8;
		jamsIncluded = 2;
		jamPrice = 5;
		// total cost
		if (howManyJams <= jamsIncluded)
		{
			// charging just the montly fee
			totalCost = montlyFee;//8
			cout << "your total is: "<<totalCost << endl;
		}
		else
		{
			// monlty fee + (difference) * jamsIncluded
			totalCost = montlyFee + (howManyJams - jamsIncluded) * jamPrice;
			cout << "your total is: " << totalCost << endl;
		}		
	}


	if (whichPackage == 'B' || whichPackage == 'b')
	{
		montlyFee = 12;
		jamsIncluded = 4;
		jamPrice = 4;
		if (howManyJams <= jamsIncluded)
		{
			// charging just the montly fee
			totalCost = montlyFee;// 12
			cout << "your total is: " << totalCost << endl;
		}
		else
		{
			// monlty fee + (difference) * jamsIncluded
			totalCost = montlyFee + (howManyJams - jamsIncluded) * jamPrice;
			cout << "your total is: " << totalCost << endl;
		}
	}


	if (whichPackage == 'C' || whichPackage == 'c')
	{
		montlyFee = 15;
		jamsIncluded = 6;
		jamPrice = 3;
		if (howManyJams <= jamsIncluded)
		{
			// charging just the montly fee
			totalCost = montlyFee;//15
			cout << "your total is: " << totalCost << endl;
		}
		else
		{
			// monlty fee + (difference) * jamsIncluded
			totalCost = montlyFee + (howManyJams - jamsIncluded) * jamPrice;
			cout << "your total is: " << totalCost << endl;
		}
	}
	return 0;
}
