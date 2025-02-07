#include<iostream>;
#include<array>;
#include<vector>;
#include<string>;

using namespace std;
int main()
{

	int array();
	{
		const int array_Size = 5+1;
		int array1[array_Size];

		array1[0] = 0;
		array1[1] = 1;
		array1[2] = 2;
		array1[3] = 3;
		array1[4] = 4;
		array1[5] = 5;
		
		cout << array1[0] << endl;
		cout << array1[1] << endl;
		cout << array1[2] << endl;
		cout << array1[3] << endl;
		cout << array1[4] << endl;
		cout << array1[5] << endl;
		cout << endl << endl;
	}

	int string_Array();
	{
		cout << "array and string array:" << endl;
		cout << endl;
		string stringArray[3]{ "angel","yui","karla" };
		for (int i=0; i<3; i++)
		{
			cout << stringArray[i] << endl;
		}
		cout << endl;
		for (auto names : stringArray)
		{
			cout << names << endl;
		}
		cout << endl << endl;
	}
	


	
	return 0;

}