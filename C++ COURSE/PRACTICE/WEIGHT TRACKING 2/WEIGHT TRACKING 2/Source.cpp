#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	const int NUM_PEOPLE = 5;
	vector<int>arrayVec;
	int weight;

	vector<string>arrayString;
	string names;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << "person's name " << endl;
		cin >> names;
		
		cout << "person's weight (kg) " << endl;
		cin >> weight;

		arrayVec.push_back(weight);
		arrayString.push_back(names);

	}
	cout << endl << endl;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << arrayString[i] << "'s weight is " << arrayVec[i] << " kg" << endl;

	}
	return 0;
}