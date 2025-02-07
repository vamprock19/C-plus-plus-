#include<iostream>;

using namespace std;

int main()
{
	// prompt user to age and gender
	// age is int, gender is character
	// you qualify for the discount
	// you don't qualify for the discount


	int age;
	char gender;

	cout << "What is your age?" << endl;
	cin >> age;
	cout << "What is your gender?" << endl;
	cin >> gender;
	
	
	// FOR ALL VARIABLES
	// && Logical AND
	// || Logical OR
	   if ((gender == 'F' || gender == 'f') && age >= 60)
	{
		cout << "You qualify for the discount" << endl;
	}
	else
	{
		cout << "You do not qualify for the discount" << endl;
	}
	
	
	
   /*
       switch (age)
	{
	case 'F':
	case'f':
		cout << "You qualify for the discount" << endl;
		break;

	}
   
   
   */
	

	return 0;
}