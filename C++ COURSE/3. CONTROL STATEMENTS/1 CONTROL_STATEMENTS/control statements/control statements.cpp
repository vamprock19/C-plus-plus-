#include<iostream>;
using namespace std;

/*
	CONTROL STATEMENTS:

	Tree primarly categories of control statements:

	 * Sequential statements(sequence statements)
	 * Selection statements(desicion statements)
	 * Repetition statements(loops)
 */

int main()
{
	// CONTROL STATEMENTS:
	// 
	// SECUENTIAL
	int age = 15;
	cout << age << endl;

	// SELECTION 
	if (age >= 16)
	{
		cout << "you can drive" << endl;
	}
	else
	{
		cout << "you cannot drive " << endl;
	}

	// REPETITION
	for (int i = 0; i <= age; i++)
	{
		cout << "HAPPY BIRTHDAY  "<<i << endl;
	}
	return 0;

	
}