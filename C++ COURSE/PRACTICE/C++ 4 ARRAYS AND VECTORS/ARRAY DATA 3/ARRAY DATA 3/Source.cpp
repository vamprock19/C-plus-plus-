#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>myVec;
	int nums;
	cout << "positive to continue, negative to quit" << endl;
	cin >> nums;
	while (nums >= 0)
	{
		myVec.push_back(nums);
		cout << "psitive to continue, negative to quit" << endl;
		cin >> nums;
	}
	cout << "here are the doubles" << endl;
	for (int i : myVec)
	{
		cout << i * 2 << endl;
	}
	return 0;
}