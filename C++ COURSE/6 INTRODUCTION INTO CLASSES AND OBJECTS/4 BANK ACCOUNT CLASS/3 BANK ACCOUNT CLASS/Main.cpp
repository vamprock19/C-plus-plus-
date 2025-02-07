#include<iostream>
#include"BankAccount.h"
#include<string>
#include<Windows.h>

using namespace std;
int main()
{
	HANDLE console_color;
	console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	
	BankAccount Angel("Angel", 500);

	/*int n1;
	cout << "--------------------------" << endl;
	
	cout << "Owner: " << Angel.getOwner() << "  Balance: " << Angel.getBalance() << endl;
	cout << endl;
	cout << "how much do you wish to deposit?" << endl;
	cout << "--------------------------" << endl;
	cin >> n1;
	Angel.deposit(n1);
	cout << "your balance is" << Angel.getBalance() << endl;*/

	cout << Angel.getOwner() << " account contains " << Angel.getBalance() << " $ " << endl;
	Angel.withdraw(450);
	
	cout << Angel.getOwner() << " account contains" << endl;
	cout << Angel.getBalance()<<" $ " << endl;
	
	return 0;
}