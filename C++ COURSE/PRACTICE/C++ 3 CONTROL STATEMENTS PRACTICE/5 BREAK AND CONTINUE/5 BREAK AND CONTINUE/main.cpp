#include<iostream>;
using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		if (i == 4)
		{
			// interrupts the loop up to a certain number
			// and exits the loop
			break;
		}
		cout << i << endl;
		
	}
	cout << endl << endl << endl;
	for (int k = 0; k <= 10; k++)
	{
		if (k == 5)
		{
			// just hides the number
			continue;
		}
		cout << k << endl;

	}
	
	
	return 0;
}