#include<iostream>;
// CONTINUE LOOP
using namespace std;
int main()
{
	int count = 0;
	/*while (count < 10)
	{

		if (count == 5)
		{
			count++;
			continue;
		}
		cout << count << endl;
		count++;
	}*/

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			// break eats the numbers and exits the loop
			// continue eat only the number
			break;
		}
		cout << i << endl;
	}
	return 0;
}