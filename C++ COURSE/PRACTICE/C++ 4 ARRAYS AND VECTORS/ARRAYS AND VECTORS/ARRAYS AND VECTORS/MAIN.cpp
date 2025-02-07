#include<iostream>;
#include<array>;
#include<vector>;
#include<string>;

using namespace std;
int main()
{
	int vector_class();
	{
	
		// vector int. 1 way to add values
		vector<int>vector1(4);
		cout << "vector: putting values" << endl;
		vector1[0] = 150;
		vector1[1] = 160;
		vector1[2] = 170;
		vector1[3] = 180;
		for (int i : vector1)
		{
			cout << i << endl;
		}
		cout << "size: " << vector1.size() << endl;
		cout << endl << endl << endl;



		// vector int: 2 way to add values
		vector<int>vector2{ 1,2,3,4,5,6,7,8,9,10 };
		cout << "vector: putting values in keys" << endl;
		for (int i : vector2)
		{
			cout << i << endl;
		}
		cout << "size:" << vector2.size() << endl;
		cout << endl << endl << endl;


		//vector push_back: vector without values assigned
		//             assign them with push_back() method  
		vector<int>vector3;
		cout << "vector push_back: " << endl;
		vector3.push_back(1);
		vector3.push_back(2);
		vector3.push_back(3);
		for (int i : vector3)
		{
			cout << i << endl;
		}
		cout << "size:" << vector3.size() << endl;
		cout << endl << endl << endl;

		// vector string
		vector<string>vectorS{ "shanon","esmeralda","rafael","Yui" };
		cout << "vector: string" << endl;
		for (string i : vectorS)
		{
			cout << i << endl;
		}
		cout << "size" << vectorS.size() << endl;
		cout << endl << endl << endl;

		vector<string>vector2S(4);
		cout << "vector string 2: " << endl;
		vector2S[0] = "Raspberry";
		vector2S[1] = "Apple";
		vector2S[2] = "Samsung";
		vector2S[3] = "Xiaomi";
		for (string i : vector2S)
		{
			cout << i << endl;
		}
		cout << "size: " << vector2S.size() << endl;
		cout << endl << endl << endl;


		// vector placing methods
		cout << "front and back:" << endl;
		cout << "Front:" << vector2S.front() << endl;
		cout << "Back:" << vector2S.back() << endl;

		vector2S.pop_back(); /*
								removes the element at the
								end of the vector
							 */
		vector2S.insert(vector2S.begin(), "NEW"); /*
													allows tho insert an element
													given a specific location whithin
													the vector.
												 */
		cout << "now front is: " << vector2S.front() << endl;
		cout << "now back is: " << vector2S.back() << endl;
		cout << endl << endl;
		cout << "new list: " << endl;
		for (string i : vector2S)
		{
			cout << i << endl;
		}
		cout << endl << endl << endl;
	
	
	}

	int arrays();
	{
		cout << "arrays: " << endl;
		const int array_size(5);
		int array_Int[array_size];
		for (int k = 0; k < array_size; k++)
		{
			k[array_Int]= k *2;
		}
		for (int i : array_Int)
		{
			cout << i << endl;
		}
		cout << endl << endl << endl;


		const int array_Size2(3);
		int array2[array_Size2];
		array2[0] = 1;
		array2[1] = 2;
		array2[2] = 3;
		for (int i : array2)
		{
			cout << i << endl;
		}
		cout << endl << endl << endl;

		string array_S[3];
		array_S[0] = "Ulrick";
		array_S[1] = "Cloe";
		array_S[2] = "sala";
		for (string i : array_S)
		{
			cout << i << endl;
		}
		cout << endl << endl << endl;

		int array[3]{ 120,125,126 };
		cout << array[0] << endl;
		cout << array[1] << endl;
		cout << array[2] << endl;
		

	}

	int array_Class();
	{

	}
	

	return 0;
}