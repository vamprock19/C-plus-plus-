#include<iostream>;
#include<string>;y

using namespace std;

int main()
{
	
	char my_char;
	string my_string;
	
	cout << "please put a mark" << endl;
	cin >> my_char;
	// consumes the line instead of your code
	cin.get();

	cout << "What's your name?" << endl;
	//use getline() to print full name
	getline(cin, my_string);

	

	
	cout << "Hello " << my_string << endl;
	cout << "you got " <<"'"<< my_char <<"'" << " as a mark" << endl;
	
	return 0;
}