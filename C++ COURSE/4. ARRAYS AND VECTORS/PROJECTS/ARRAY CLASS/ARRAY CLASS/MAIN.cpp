#include<iostream>;
#include<array>;
#include<string>;
using namespace std;

int main()
{
	array<int, 10>array10;
	//             .size() here returns the 10
	for (int k=0; k<array10.size(); k++)
	{
		array10[k] = k * 2;
	}

	for (int i : array10)
	{
		
		cout << i << endl;
		
	}
	cout << "number of arrays: " << array10.size() << endl;
	
	return 0;
}