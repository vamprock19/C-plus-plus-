#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;
/*    METHODS  

.resize()
.max_size()
.what()*/
int main()
{
	vector<int>myNums;
	try
	{
		myNums.resize(myNums.max_size() + 1); // over int value
	}
	catch (const length_error & err) // class and the name of the class
	{
		
		cerr << err.what() << endl; /* C = standard
									   err =  error
									   cerr = standar error 
									    outputs just the errors */
	}
	cout << "yhai! the vector is too long" << endl;
	return 0;
}