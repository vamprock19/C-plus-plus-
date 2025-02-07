#include<iostream>
#include<string>
#include<array>
using namespace std;
int main()
{
	array<int, 3>ARRAY;

	ARRAY[0] = 1;
	ARRAY[1] = 2;
	ARRAY[2] = 3;
	for (int i = 0; i < 3; i++)
	{
		cout << ARRAY[i] << endl;
	}
	cout << endl;
	array<string, 3>sa;
	sa[0] = "JAPAN";
	sa[1] = "CANADA";
	sa[2] = "USA";
	for (string i:sa)
	{
		cout << i << endl;
	}
	return 0;
}