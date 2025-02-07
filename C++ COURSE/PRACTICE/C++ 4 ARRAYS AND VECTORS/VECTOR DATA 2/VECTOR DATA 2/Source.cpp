#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>intVec;
	int input;
	cout << "positive value to continue, negative to quit" << endl;
	cin >> input;
	while (input>=0)
	{
		intVec.push_back(input);
		cout << "positive value to continue, negative to quit" << endl;
		cin >> input;

	}
	cout << "here are the doubles" << endl;
	for (int i : intVec)
	{
		cout << i * 2 << endl;
	}
	return 0;
}