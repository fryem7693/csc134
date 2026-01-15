/* 
CSC 134
M3T1 -Choices(based off Mr. Norris' code)
Mark Frye 
1/15/2026 
*/ 

#include <iostream>
using namespace std; 

//begin main function
int main() {
    //variables 
    int choice;
    const int Fight = 1;
    const int Flee = 2;
    const int Item = 3; 

    //ask the question 
    cout << "You encounter a wild beast! What do you do?" << endl; 
    cout << "1. Fight" << endl;
    cout << "2. Flee" << endl;
    cout << "3. Use an item from your inventory" << endl;
    cout << "Enter the number of your choice: ";
    cin >> choice; 

    //using if, make a decision based on the user's input  

    if (Fight == choice) {
    cout << "You chose to fight the beast!" << endl; 
    cout << "Sadly, the best overpowers you. You have been defeated." << endl;
    }
    else if (Flee == choice) {
        cout << "You chose to flee from the beast!" << endl;
        cout << "You successfully escaped and lived to fight another day!" << endl;
    } 
    else if (Item == choice) { 
        cout << "You chose an item from your inventory!" << endl;
        cout << "YOu chose a gun and scared the beast away!" << endl; 
    } 
    else { 
        cout << "Invalid choice. Please select 1, 2, or 3." << endl; 
    } 
    // finish program 
    cout << "Thank you forplaying the game!" << endl; //this runs no matter what the player chooses
    return 0; //exit without errors
} //end of the main() method