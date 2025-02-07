#include<iostream>;

using namespace std;

int main()
{
	float pack1;
	float pack2;
	float pack3;
	float average;
	int quantity;

	cout << "average of three" << endl;
	cout << "put the first value" << endl;
	cin >> pack1;
	cout << "put a second value" << endl;
	cin >> pack2;
	cout << "put a third value" << endl;
	cin >> pack3;
	average = (pack1 + pack2 + pack3);
	quantity = 3;

	cout << "the average is: " << average / quantity << endl;

	//cout << "the average is: " << (pack1 + pack2 + pack3) / 3 << endl;
	return 0;
}