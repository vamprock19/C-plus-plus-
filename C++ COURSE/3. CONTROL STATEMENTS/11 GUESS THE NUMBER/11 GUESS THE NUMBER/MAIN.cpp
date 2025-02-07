#include<iostream>;
#include<cstdlib>;
#include<ctime>;


using namespace std;

int main()
{ 
	srand(time(nullptr));
	int pcNumber = rand() %100+1;
	int guess;
	int counter = 0;
	int tries = 0;
	
	cout << "guess the number between 1 - 100" << endl;
	cout << endl << endl << endl;
	
	do
	{
		
		cout << "what number is it?" << endl;
		cin >> guess;

		if (guess == pcNumber)
		{
			
			cout << "congratulations, you GUESSED the number" << endl;
			tries++;
			cout << "in " << tries << " tries" << endl;
			break;


			
		}
		else if(guess>100 || guess<1)
		{
			cout << "between 1 - 100 please" << endl;
			cout << "wasted guess" << endl;
		}
		else if (guess > pcNumber)
		{
			cout << "your guess is too (HIGH)" << endl;
			cout << endl << endl;
			tries++;
			counter++;
		}
		else
		{
			cout << "your guess is to (LOW)" << endl;
			cout << endl << endl;
			tries++;
			counter++;
			
		}


	} while (counter = pcNumber);
	
	return 0;
}