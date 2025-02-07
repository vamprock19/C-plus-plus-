#include<iostream>;
#include<string>;

using namespace std;

int main()
{
	int age;
	string FULL_NAME;

	cout << "please put your name " << endl;
	getline(cin, FULL_NAME);
	
	cout << "please enter your age " << endl;
	cin >> age;

	cout << age << endl;
	cout << FULL_NAME << endl;
	return 0;
}