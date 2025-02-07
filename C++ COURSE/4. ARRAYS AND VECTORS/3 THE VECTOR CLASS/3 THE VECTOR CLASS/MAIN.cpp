#include<iostream>;
#include<vector>;
#include<string>;



using namespace std; 

int main()
{
	/*
	   declare a vector:

	   using vector library

	   vector<type>name(size);

	   ie
	   vector<int>someVect;

	   VECTORS ARE JUST LIKE ARRAYS BUT WILL AUTOMATICALLY
	   RESIZE AS NEEDED

	*/

	vector<int>vec1;
	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(3);
	for (int i : vec1)
	{
		cout << i << endl;
	}
	cout << "number of vector: " << vec1.size() << endl;
	cout << endl << endl << endl;

	vector<string>vecS(3);
	vecS[0] = "Jhon";
	vecS[1] = "Bob";
	vecS[2] = "Sally";
	vecS.push_back("Shannon");
	for (string s : vecS)
	{
		cout << s << endl;
	}
	cout << "number of vectors: " << vecS.size() << endl;
	






	//vector<int> someVec;
	//vector<string> anotherVec(3);

	/*
		SOMEVEC:

	   push_back() method/function:

	  * put it to the end
	  * Add elements to the end of the vector
		and the vector handles  allocating
		the memory that we need in order to
		store this new elements.
	  * So it is resizing as needed to add the differnet intergers
	  * for string vectors it creates an additional cell/room
		and places the element in there.

		ANOTHERVEC:

	  * vector of strings
	  * size 3
	  * resize it only we go pass 3 elements


	*/
  /*
	   
		someVec.push_back(1);
	someVec.push_back(2);
	someVec.push_back(3);
	// prints out the size of the vector  
	// .size() = size of the element or tells you
	//           how many elements are in the vector

	cout << "someVec size" << someVec.size() << endl;
	// vector string
	anotherVec[0] = "Jhon";
	anotherVec[1] = "Bob";
	anotherVec[2] = "Sally";

	anotherVec.push_back("Shannon");

	for (int val : someVec)
	{
		cout << val << endl;
	}
	for (string name : anotherVec)
	{
		cout << name << endl;
	}

  */
	/*
	  5 member functions or methods

	  .front()= returns the front element.
	  .back() = returns the back element.
	  .pop_back() = removes the element at the 
	                end of the vector.
	  .insert() = allows us to insert an element 
	              given a specific location whithin 
				  the vector. the location has to be an 
	               
	*/

	cout << "Front and back: " << endl;
	cout << "Front: " << vecS.front() << endl;
	cout << "Back: " << vecS.back() << endl;

	vecS.pop_back();
	vecS.insert(vecS.begin(), "DON");

	cout << "now front is: " << vecS.front() << endl;
	cout << "now back is: " << vecS.back() << endl;


	return 0;

}