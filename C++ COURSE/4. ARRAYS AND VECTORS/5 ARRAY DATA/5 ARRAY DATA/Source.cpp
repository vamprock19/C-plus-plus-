#include<iostream>
#include<array>
using namespace std;
int main()
{
	
	const int ARRAY_SIZE = 5;
	int ARRAY[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "put an integer" << endl;
		cin >> ARRAY[i];
	}
	cout << "here are the doubles" << endl;
	for (int i : ARRAY)
	{
		cout << i * 2 << endl;
	}


	
	
	

	

	
		
	

	return 0;
}