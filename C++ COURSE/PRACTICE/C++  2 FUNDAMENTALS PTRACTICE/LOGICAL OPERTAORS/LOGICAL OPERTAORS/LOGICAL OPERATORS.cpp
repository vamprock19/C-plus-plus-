#include<iostream>;
 
using namespace std;
/*
    LOGICAL OPERATORS

	LOGICLA AND &&  returns true if both values are true // otherwise is false 
	LOGICAL OR ||   returns true if one or both values are true  // returns false if both values are false 
	LOGICAL NOT !   returns the oposite value of the declared bool



*/
int main()
{
	bool first = false;
	bool second = true;
	bool third = false;

	cout << boolalpha;

	cout << (first && second) << endl;
	cout << (first || second) << endl;
	cout << (!third) << endl;
	

	return 0;
}