#include<iostream>;
#include<string>;

using namespace std;

int main()
{
	/*
	   2 WAYS FOR MAKING AN ARRAY:

	   1)
	   INT MY_ARRAY[5];

	   2)
	   CONST ARRAY_SIZE = 5;
	   INT MY_ARRAY[ARRAY_SIZE];
	*/ 

	const int ARRAY_SIZE = 5;
	int myArray[ARRAY_SIZE];
	//string names[4]{ "Bob", "Sally" ,"Jhon", "Ed" };
	myArray[0] = 15;
	myArray[1] = 20;
	myArray[2] = 22;
	myArray[3] = 13;
	myArray[4] = 6;


	//             [[[[<= garbage error prints -858993460]]]]
	for (int i = 0;  i < ARRAY_SIZE; i++)
	{
		cout << myArray[i] << endl;
	}
	/*for (int i = 0; i < 4; i++)
	{
		cout << names[i] << endl;
	}*/

	// [[[[ variation of for loop ]]]]
	// [[[[ "synthetic sugar" ]]]]
	// [[[[ gives a nice syntax ]]]]
	// [[[[ make things easier ]]]]
	/*
	   [[[[ auto: figure it out automatically ]]]]
	   [[[[ string: is specified ]]]]
	*/
	/*for (auto name : names)
	{
		cout << name << endl;
	}*/

	return 0;
}