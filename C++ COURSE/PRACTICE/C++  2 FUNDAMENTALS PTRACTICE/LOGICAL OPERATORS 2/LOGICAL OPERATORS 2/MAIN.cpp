#include<iostream>;
#include<iomanip>;
using namespace std;

int main()
{
	bool raining = false;
	bool umbrella = true;

	cout<<boolalpha;
	cout << "is raining: " << raining << endl;
	cout << "Am I using an unbrella? " << (umbrella && raining) << endl;
	

	bool lying  = false;
	bool honest = true;

	cout << "estoy mintiendo? " << (!lying&&!honest) << endl;

	bool money = false;
	bool shopping = false;

	cout << "compro? " << (money || !shopping) << endl;
	
	return 0;
}
