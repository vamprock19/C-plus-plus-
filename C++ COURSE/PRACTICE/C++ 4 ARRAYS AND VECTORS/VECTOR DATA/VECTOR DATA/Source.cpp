#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>intVec;
	int numbers;
	cout << "positive number to continue, negative to exit" << endl;
	cin >> numbers;
	while (numbers >= 0)
	{
		intVec.push_back(numbers);
		cout << "positive number to continue, negative to exit" << endl;
		cin >> numbers;
	}
	cout << "here are the doubles" << endl;
	for (int i : intVec)
	{
		cout << i * 2 << endl;
	}
	return 0;
}