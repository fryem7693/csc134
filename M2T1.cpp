// CSC 134
// M1Lab1 - The Apple Orchard
// norris
// 1/27/2025
// We're going to make the simplest possible
// "checkout" machine.

#include <iostream>
using namespace std;

int main() {
    // Set up all variables
    string first_name, last_name, full_name; // you do whatever name you want
    string product= "Collectable Coins"; // int are whole numbers: 1, 2, 100000, 42
    double cost_each = 0.99;// twenty five cents, or $0.25.
    double total_cost;
    
    
    // Greet Customer
    cout << "Welcome to the " << product << " store!" << endl;
    cout << "What is your first name?" << endl;
    cin >> first_name; 
    cout << "What is your last name?" << endl;
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << "!" << endl;
   
    //Ask How much they'd like to purchase 

    //Calculate total price
    //Give the result 



    return 0; //no errors
}
