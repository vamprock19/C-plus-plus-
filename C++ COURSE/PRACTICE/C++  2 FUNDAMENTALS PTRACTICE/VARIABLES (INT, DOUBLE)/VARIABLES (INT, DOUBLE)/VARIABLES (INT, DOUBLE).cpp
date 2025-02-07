// VARIABLES (INT, DOUBLE).cpp : This file contains the 'main' function. Program execution begins and ends there.
// INT    = -2.147.483.648 
//          2.147.483.647

// DOUBLE = 2,22507*(e^-308) 
//          1, 79769 * (e ^ 308)

#include <iostream>
using namespace std;

int main()
{
    int int_1 = -2147483648;
    int int_2 =  2147483647;

    double double_1 = 2.22507;
    double double_2 = 1.79769;

    cout << "int's limit:  " << int_1 
        <<"  -  "<< int_2 << endl;

    cout << "double's limit: " << double_1 
        << " - " << double_2 << endl;

    return 0;
}


