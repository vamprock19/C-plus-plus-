#include <iostream>
using namespace std;

void PrintSomething(); /* function prototypes go 
before the definition of the function, declare them 
before we use them*/
void MyName();

int main()
{
	PrintSomething(); // calling function
	MyName();
	return 0;
}

/*header: return type(void) function ID(parameter list)*/
void PrintSomething()// function definition
{
	cout << "hey look out here" << endl; // { function body }
}
void MyName()
{
	cout << "Angel" << endl;
}