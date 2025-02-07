#include<iostream>;
#include<array>;
#include<string>;

using namespace std;

int main()
{

	array<int, 3>array1;
	array1[0] = 250;
	array1[1] = 260;
	array1[2] = 270;

	for (int i : array1)
	{
		cout << i << endl;
	}
	cout << "number of arrays: " << array1.size() << endl;
	cout << endl << endl << endl;

	array<string, 3> array2;
	array2[0] = "Menu";
	array2[1] = "Canadian coffe";
	array2[2] = "Tim bits";
	for (string i : array2)
	{
		cout << i << endl;
	}
	cout << "number of items: " << array2.size() -1 << endl;
	

	 


	/*
	    DECLARATION:

		array<type, size/number of cells> name;
		ie
		array<int, 5> myIntArray;
		<  >  template parameter/ what's inside
	*/
	/*
	   {add data. ie numbers 0,0,0,0,0} 
	   {} leave it in blank, it prints 0 by default
	   {} = array's index operator
	   .size() = size of the element or tells you
	//           how many elements are in the array
	*/

	//array<int, 5> myIntArray;
	////prints
	//myIntArray[0] = 125;
	//myIntArray[1] = 150;
	//myIntArray[2] = 175;
	//myIntArray[3] = 455;
	//myIntArray[4] = 1050;

	//
	//for (int hi : myIntArray)
	//{
	//	cout << hi << endl;
	//}
	//cout << "Number of arrays: " << myIntArray.size() << endl;                                                                                                                                                           


	/*array<int, 5> myIntArray{};
	
	myIntArray[0] = 2;
	myIntArray[1] = 5;
	myIntArray[2] = 10;
	myIntArray[3] = 1;
	myIntArray[4] = 17;

	for (int a : myIntArray)
	{
		cout << a << endl;
	}
	cout << "Size of arrays: " << myIntArray.size() << endl;*/
	return 0;
}