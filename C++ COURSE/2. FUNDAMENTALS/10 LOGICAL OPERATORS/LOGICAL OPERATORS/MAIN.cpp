#include <iostream>;
#include<iomanip>;
using namespace std;


/*
  Operator	   Name	          Description	                                            Example	

   && 	       Logical and	  Returns true if both statements are true	                x < 5 &&  x < 10	
   || 	       Logical or	  Returns true if one of the statements is true     	    x < 5 || x < 4	
   !	       Logical not	  Reverse the result, returns false if the result is true	!(x < 5 && x < 10)	

*/

int main()
{
	bool canada_rules = true;
	bool vietnamese_women_are_hot = false;

	cout << boolalpha;

	cout << "canada is the best country ever: " << (canada_rules && vietnamese_women_are_hot) << endl << endl;
	cout << "vietnamese women are super cute: " << (canada_rules || vietnamese_women_are_hot) << endl << endl;
	cout << "I'm a billonaire married with an asian women: " << (!vietnamese_women_are_hot) << endl;

	/* 
		cout << "LOGICAL AND: " << (alpha && beta) << endl; // 2 trues = true, otherwise is false 
		cout << "LOGICAL OR: " << (alpha || beta) << endl; // 1 true = true. 2 false = false
		cout << "LOGICAL NOT: " << (!alpha) << endl; // viceversa of a value.

	
	*/
	
	return 0;
}