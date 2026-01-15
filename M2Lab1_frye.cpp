/* 
CSC 134
M2Lab1 -Calculates volume of crate, cost, customer price, and the profits 
Mark Frye
1/15/2026
*/ 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //variables 
    const double costPerCubicFoot = 0.23;
    const double ChargePerCubicFoot = 0.5;
    double length, width, height, volume, cost, price, profit;

    //input 
    cout << "Enter the dimensions of the crate in feet." << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: "; 
    cin >> width; 
    cout << "Height: ";
    cin >> height; 

    //calculations 
    volume = length * width *height;
    cost = volume * costPerCubicFoot;
    price = volume * ChargePerCubicFoot; 
    profit = price - cost;

    //output 
    cout << setprecision(2) << fixed; 
    cout << "The volume of the crate is " << volume << " cubic feet." << endl;
    cout << "The cost to produce the crate is $" << cost << "." << endl;
    cout << "The price charged to the customer is $" << price << "." << endl;
    cout << "The profit made on the crate is $" << profit << "." << endl;
}
