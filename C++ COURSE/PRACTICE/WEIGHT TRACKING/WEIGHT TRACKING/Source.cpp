#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
   /*paralel vectors
   int 
   vector int = 5
   vector string
   
   sub vec int
   sub vec string
   
    2 fors sharing the same data

	prinnt with .push_back*()
	
	last for - for printing the wights/

	return 0;*/

	 const int people_Size = 5;
	vector<int>weights;
	int weight;

	vector<string>tempNames;
	string names;

	for (int i = 0; i < people_Size; i++)
	{
		cout << "name of the person" << endl;
		getline(cin, names);

		cout << "put that person's weight" << endl;
		cin >> weight;
		cin.get();

		weights.push_back(weight);
		tempNames.push_back(names);
	}
	cout << endl << endl;
	for (int l = 0; l < people_Size; l++)
	{
		cout<< tempNames[l] <<" 's weight  is "<<weights[l] <<" Kg "<< endl;
	}
	
		
	


}

