#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>myIntVector;
	int input;
	// priming read
	cout << "positive to the vector, negative to quit" << endl;
	cin >> input;
	while (input >= 0)
	{
		myIntVector.push_back(input);
		cout << "positive to the vector, negative to quit" << endl;
		cin >> input;
	}
	cout << "here are the doble ammounts" << endl;
	for (int num : myIntVector)
	{
		cout << num * 2 << endl;
	}
}