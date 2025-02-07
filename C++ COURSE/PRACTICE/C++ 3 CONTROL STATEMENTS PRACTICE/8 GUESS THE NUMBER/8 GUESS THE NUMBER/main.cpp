#include<iostream>;
#include<cstdlib>;
#include<ctime>;


using namespace std;

int main()
{
	srand(time(nullptr));
	int pcNumber = rand() % 100 + 1;
	int guess;
	int tries = 1;

	cout << "GUESS THE NUMBER'S PC" << endl;
	cout << "BETWEEN 1 - 100" << endl;
	
	do
	{
		
		cin >> guess;
		

		if (guess > pcNumber)
		{
			cout << "too high" << endl;
			tries++;
		}
		else if (guess == pcNumber)
		{
			
			cout << "congratulations" << endl;
			cout << "number of guesses: " << tries << endl;
			
			break;
		}
		else
		{
			cout << "too low" << endl;
			tries++;
		}


	} while (pcNumber);
	
	return 0;
}