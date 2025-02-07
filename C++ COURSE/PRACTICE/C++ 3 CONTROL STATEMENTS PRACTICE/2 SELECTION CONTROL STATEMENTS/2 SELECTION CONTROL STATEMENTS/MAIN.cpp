#include<iostream>;

using namespace std;
int main()
{
	/*
	   selection control statements

	   sentences:

	   IF 
	   ELSE-IF
	   SWITCH
	*/

	// IF SENTENCE
	int age;
	cout << "How old are you?" << endl;
	cout << "REMINDER: you need to be over aged to apply to higher education" << endl;
	cin >> age;
	if (age > 18 )
	{
		cout <<" YOU DO QUALIFY" << endl;
	}
	 //ELSE-IF SENTENCE
	else if (age  == 18)
	{
		cout <<"YOU QUALIFY" << endl;
	}
	else
	{
		cout <<"YOU DO NOT QUALIFY" << endl;
		
	}

	// SWITCH SENTENCE
	char university;

	cout << "choose which university would be a GOOD place to study" << endl;
	
	cout << "A) Concordia university. B) Iteso. C) UQAM." << endl;
	cin >> university;
	switch (university)
	{
		

	 case 'a':
	 case'A':
		cout << "that's an excelent option" << endl;
		break;

	 case'b':
	 case'B':
		cout << "that university sucks and it's in a really bad rank" << endl;
		cout << "of world wide universities" << endl;
		break;

	 case'c':
	 case'C':
		cout << "that's a good choice but it's a french university." << endl;
		cout << "Get ready to learn and speak french all the time" << endl;
		break;
	 default:
		cout << "you have enter an invalid opccion. Try again" << endl;
	}

	

	
	
	return 0;
}