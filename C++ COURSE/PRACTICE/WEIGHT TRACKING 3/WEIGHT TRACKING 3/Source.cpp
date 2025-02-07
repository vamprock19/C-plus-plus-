#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<int>intVec;
	const int NUM_PEOPLE = 5;
	int weight;
	

	vector<string>stringVec;
	string name;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << "person's name" << endl;
		cin >> name;
		cout << endl << endl;
		cout << "person's weight" << endl;
		cin >> weight;

		intVec.push_back(weight);
		stringVec.push_back(name);
	}
	cout << endl << endl;

	for (int i = 0; i <= NUM_PEOPLE; i++)
	{
		// intVec,,    --- stringVec  + in weight, --0 in n

		cout << name[i] << " 's is " <<  " kg " << endl;
	}

	return 0;
}