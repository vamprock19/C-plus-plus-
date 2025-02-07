#include<iostream>;
#include<string>;

using namespace std;
// prompt user to age and gender
	// age is int, gender is character
	// you qualify for the discount
	// you don't qualify for the discount
int main()
{
	int age;
	char gender;
	string name;


	cout << "what's your name?" << endl;
	getline(cin, name);
		cout << "put your age to apply for the discount" << endl;
		cin >> age;
		
		if (age >= 50 && age <= 100)
		{
			// FOR QUALIFIERS
			cout << "what's your gender? (M) MALE  (F) FEMALE" << endl;
			cin >> gender;
			
			switch (gender)
			{
			case'm':
			case 'M':
				cout << name <<" you qualify for the discount (50 % OFF)" << endl;
				break;

			case'f':
			case'F':
				cout <<  name << " you qualify for the discount (50 % OFF)" << endl;
				break;
			}
		}
		else
		{
			// FOR NON-QUALIFIERS
			cout << "what's your gender? (M) MALE  (F) FEMALE" << endl;
			cin >> gender;
			switch (gender)
			{
			case'm':
			case 'M':
				cout << name <<" you don't qualify for the discount" << endl;
				break;

			case'f':
			case'F':
				cout << name <<" you don't qualify for the discount" << endl;
				break;
			}
		}

	   
	
   return 0;
}