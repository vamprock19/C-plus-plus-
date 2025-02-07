#include<iostream>;

using namespace std;

int main()
{
	char mark;

	cout << "please put a mark" << endl;
	cin >> mark;

	switch (mark)
	{
	case 'A':
	case 'a':
		cout << "Great job!" << endl;
		break;
	case 'B':
	case 'b':
		cout << "Good job!" << endl;
		break;
	case 'C':
	case 'c':
		cout << "You can do better!" << endl;
		break;
	case 'D':
	case 'd':
		cout << "You're getting close to failing!" << endl;
		break;
	case 'F':
	case 'f':
		cout << "You're failing the course" << endl;
		break;
	default:
		cout << "You have enter an invalid mark. Try again!" << endl;
		// NO BREAK FOR DEFAULT THOUGH 
	}

	return 0;
}