/*
CSC 134
M3Lab2 - number grade to letter grade conversion program 
Mark Frye
1/15/2026
*/

#include <iostream> 
using namespace std;

int main() {

    //variable declartion 
    int numberGrade;
    char choice = 'y'; 

    do { 
        //user input 
        cout << "Enter a number grade: ";
        cin >> numberGrade;
//number grade to letter grade conversion 
        if (numberGrade >= 0 && numberGrade <= 100) {
            if (numberGrade >= 90 && numberGrade <= 100) { 
                cout << "--------------------------------\n";
                cout << "Letter Grade: A\n"; 
            }
        if (numberGrade >= 80 && numberGrade <= 89) {
            cout << "--------------------------------\n";
            cout << "Letter Grade: B\n";
        }
        if (numberGrade >= 70 && numberGrade <= 79) { 
            cout << "--------------------------------\n";
            cout << "Letter Grade: C\n"; 
        }
        if (numberGrade >= 60 && numberGrade <=69) {
            cout << "--------------------------------\n";
            cout << "Letter Grade: D\n"; 
        }
        if (numberGrade >= 0 && numberGrade <= 59) {
            cout << "--------------------------------\n";
            cout << "Letter Grade: F\n"; 
        }
        }
        else {
            cout << "--------------------------------\n";
            cout << "Error: Invalid grade entered. Please enter a grade between 0 and 100.\n"; 
        }
        //user choice to continue or exit program 
        cout << " " << endl;
        cout << "Would you like to enter another grade? (y/n): ";
        cin >> choice;
    }
    while(choice == 'y' || choice == 'Y'); 

    cout << "Program has ended.\n"; 
    cout << "Goodbye!\n"; 
    return 0;
}