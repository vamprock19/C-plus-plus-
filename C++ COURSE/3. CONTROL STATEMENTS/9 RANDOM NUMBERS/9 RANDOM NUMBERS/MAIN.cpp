#include<iostream>;
#include<cstdlib>;
#include<ctime>;


using namespace std;

int main()
{
	srand(time(nullptr));

	//int val1 = rand() % 10; // val1 will be >= 0 and < 10

	//int val2 = rand() % 10 + 1; // val2 is >= 1 <= 10

	//cout << val1 << endl;
	//cout << val1 << endl;

	int val1;
	/*int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int dice3 = rand() % 6 + 1;
	int dice4 = rand() % 6 + 1;
	int dice5 = rand() % 6 + 1;
	int dice6 = rand() % 6 + 1;
	int dice7 = rand() % 6 + 1;
	int dice8 = rand() % 6 + 1;
	int dice9 = rand() % 6 + 1;
	int dice10 = rand() % 6 + 1;
	

	cout << dice1 << endl;
	cout << dice2 << endl;
	cout << dice3 << endl;
	cout << dice4 << endl;
	cout << dice5 << endl;
	cout << dice6 << endl;
	cout << dice7 << endl;
	cout << dice8 << endl;
	cout << dice9 << endl;
	cout << dice10 << endl;*/


    for(int i = 0; i < 10; i++)
	{
		val1 = rand() % 6 + 1;
		
		cout << val1 << endl;
    }




	return 0;
}