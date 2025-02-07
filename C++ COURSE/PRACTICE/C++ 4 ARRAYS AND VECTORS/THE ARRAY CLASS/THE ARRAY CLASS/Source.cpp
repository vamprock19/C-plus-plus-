#include<iostream>
using namespace std;
int main()
{
	// ARRAYS
	int ARRAY[5];
	ARRAY[0] = 1;
	ARRAY[1] = 2;
	ARRAY[2] = 3;
	ARRAY[3] = 4;
	ARRAY[4] = 5;
	for (int i = 0; i < 5; i++)
	{
		cout << ARRAY[i] << endl;
	}
	cout << endl;
	 int ARRAY_SIZE[5]{120, 130, 140, 150, 160};
	 ARRAY_SIZE[0] = 100;
	 for (int i = 0; i<5; i++)
	 {
		 cout << ARRAY_SIZE[i] << endl;
	 }
	
	return 0;
}