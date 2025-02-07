#include<iostream>;
#include<cstdlib>;
#include<ctime>;

using namespace std;

int main()
{
	srand(time(nullptr));
	int num1 = rand() % 37 + 1;
	int num2 = rand() % 37 + 1;
	cout << num1 << endl;
	cout << num2 << endl;
	return 0;
}