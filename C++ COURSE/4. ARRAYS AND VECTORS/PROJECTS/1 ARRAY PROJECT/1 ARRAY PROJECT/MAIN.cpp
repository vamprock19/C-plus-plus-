#include<iostream>;
#include<string>;

using namespace std;
int main()
{
	/*const int arraysize = 5;
	int arrays[arraysize];

	arrays[0] = 1;
	arrays[1] = 2;
	arrays[2] = 3;     /
	arrays[3] = 4;
	arrays[4] = 5;

	for (int print = 0; print < arraysize; print++)
	{
		cout << arrays[print] << endl;
	}*/



	string arrayCharacters[5]{ "fiona", "yui","wendy","yiaiyu","cloe"};

	for (string names : arrayCharacters)

	{
		cout << names << endl;
	}


	/*const int arraysize = 10;
	int arrays[arraysize];

	for (int i = 0; i < arraysize; i++)
	{
		arrays[i] = i + 1;
	}
	for (int arrayPrint : arrays)
	{
		cout << arrayPrint << endl;
	}*/

	
	/*int array[5]{ 10,9,8,7,6,}; 

	cout << array[0] << endl;
	cout << array[1] << endl;
	cout << array[2] << endl;
	cout << array[3] << endl;
	cout << array[4] << endl;*/

	return 0;
}