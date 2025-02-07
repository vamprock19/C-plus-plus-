#include<iostream>
#include<array>
using namespace std;
int main()
{
	// multidimentional arrray
	int myNum[2][3] // TO REVERSE IS JUST SBUSTRACT 1 TO THE ARRAY
	{
		{1,2,3},
		{4,5,6}
	}; // 2d array  that is 2x3
	
	myNum[1][0] = 14;
	cout << myNum[1][0] << endl; 

	for (int row = 0; row <2; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			cout << myNum[row][col] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	for (int row = 1; row >= 0; row--)
	{
		for (int col = 2; col >= 0; col--)
		{
			cout << myNum[row][col] << " ";
		}
		cout << endl;
	}

							
    

	return 0;
}