/* 
CSC 134
M4HW - Gold 
Mark Frye 
1/19/2026
*/  

#include <iostream>
using namespace std; 

int main() 
{
    int val;

    do 
    {
        cout << "Enter a value from 1 to 12:\n";
        cin >> val;

        if (val < 1 || val > 12) 
    {
        cout << "Error. Must be a number from 1 to 12\n";
    }
    } while (val < 1 || val > 12);

    //print multiplaction table 
    for (int num = 1; num <= 12; num++) 
    {
        cout << val << " times " << num << " is " << val * num << ".\n";
    }
    return 0;
}

