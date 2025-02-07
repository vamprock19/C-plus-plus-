#include<iostream>
#include<vector>
#include<stdexcept>
#include<string>
using namespace std;

/*
               exception

• Logic error: invalid_argument, out_of_range
• runtime_error
• bad_optional_access
• bad_typeid
*/

int main()
{
	/*jhon, bob, sally, karen, smithy*/
    // vector
	// out_of_range
	// .at returns the element from the specified location

	vector<string>names(5);
	names.at(0) = "jhon";
	names.at(1) = "Bob";
	names.at(2) = "Sally";
	names.at(3) = "Karen";
	names.at(4) = "Smitty";

	for (string name : names)
	{
		cout << name << endl;
	}
	try
	{
		// exception
		names.at(5) = "Tyler";

	}
	catch ( const out_of_range& err)
	{
		cout << err.what() << endl;
	}

	




	return 0;
}