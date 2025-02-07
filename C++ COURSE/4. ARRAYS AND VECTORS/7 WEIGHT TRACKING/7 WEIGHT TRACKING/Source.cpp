#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main()
{
	// paralel vectors

	const int NUM_PEOPLE = 5;
	vector<int>weights;
	int tempWeight;

	vector<string>names;
	string tempName;



	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << "please enter a person's name" << endl;
		getline(cin, tempName);

		cout << "please enter " << tempName << "'s weight" << endl;
		cin >> tempWeight;
		cin.get(); // consume newline character

		// vectors push_back()

		names.push_back(tempName);
		weights.push_back(tempWeight);
	}
	cout << endl << endl;
	for (int i = 0; i <NUM_PEOPLE; i++)
	{
		cout << names[i] << " weighs " << weights[i] << " kg" << endl;
	}

	return 0;
}