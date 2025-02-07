#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
using namespace std;
int main()
{
	vector<int>nums;
	try
	{
		nums.resize(nums.max_size() + 1);
	}
	catch (const length_error& err)
	{
		cerr << err.what() << endl;
	}
	return 0;
}