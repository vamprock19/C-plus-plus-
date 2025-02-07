#include<iostream>;

using namespace std;

int main()
{
	int value1;
	int sum = 0;
	cout << "enter a positive value if you want to continue or negative to exit" << endl;
	cin >> value1;
	
	

	while (value1 >= 0)
	{
		sum += value1;
		
		cout << "enter a positive value if you want to continue or negative to exit" << endl;
		
		cin >> value1;
	}
	cout << "total: " << sum << endl;

	return 0;
}