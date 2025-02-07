#include<iostream>;
#include<string>;
/*

    cin.get(); --- works as food for the getline expresion
	               getline consumes it instead of your code

*/
using namespace std;

int main()
{
	string FULL_NAME;
	string Location;
	int initialScore;

	cout << "put your name "<<endl;
	getline(cin, FULL_NAME);
	cout << "put your location (city, state/province, country " << endl;
	getline(cin, Location);
	cout << "put a number from 0 to 100 " << endl;
	cin >> initialScore;
	
	

	cout << "Hello " << FULL_NAME << endl;
	cout << "we heard you were from " << Location << endl;
	cout << "your original score is "<<initialScore<<" but with 5 points added "<< endl;
	cout << "your final score is " << (initialScore + 5) << endl;
	/*
	  initialScore = initialScore + 5;
	  cout <<"Final score: "<< initialScore << endl;
	*/
	

	

	return 0;
}
