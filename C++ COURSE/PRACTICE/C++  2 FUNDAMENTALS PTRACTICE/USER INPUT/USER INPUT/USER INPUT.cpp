#include<iostream>;
#include<string>;

using namespace std;

int main()
{
	int age;
	string name;

	cout << "Put your name" << endl;
	getline(cin, name);
	cout << "put your age" << endl;
	cin >> age;

	cout << name << endl;
	cout << age << endl;
	return 0;
}