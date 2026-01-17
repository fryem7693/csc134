/* 
CSC 134
M3Bonus - This is a DnD Simulator 
Mark Frye 
1/17/2026 
*/

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std; 

// Character Stats 
int strength, dexterity, constitution, intelligence, wisdom, charisma;
string name, character_class;
int level, hp;

//function prototypes (declarations)
int rolldice();
int rollstats();
void inputstats();
void displaycharacter();
void savecharacter();

//main function 
int main() 
{ 
    srand(time(0));
    cout << "chracter creation" << endl; 
    inputstats();
    displaycharacter();
    
    cout << "Would you like to reroll your stats? type 'y' for yes or 'n' for no." << endl; 
    char choice;
    cin >> choice;

    while (choice == 'y' || choice == 'Y') 
    { 
        inputstats();
        displaycharacter();
        cout << "Would you like to reroll your stats? type 'y' for yes or 'n' for no." << endl; 
        cin >> choice;
    } 
    return 0;
}
//function definitions(the full version) 
void inputstats() 
{ 
    strength = rollstats();
    dexterity = rollstats();
    constitution = rollstats();
    intelligence = rollstats();
    wisdom = rollstats();
    charisma = rollstats(); 
}
void displaycharacter() 
{
    cout << "Character Stats:\n"; 
    cout << "Strength: " << strength << endl;
    cout << "Dexterity: " << dexterity << endl;
    cout << "Constitution: " << constitution << endl;
    cout << "Intelligence: " << intelligence << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Charisma: " << charisma << endl; 
}

//save character function 
void savecharacter() 
{ 
    // Placeholder for saving character to a file or database
    cout << "Character saved successfully!" << endl; 
}
//roll dice function 
int rolldice()
{
    return rand() % 6 + 1; // simulates the roll of a 6 sided dice 
}
//roll stats function 
int rollstats() 
{ 
    //roll 3d6 
    int stat; 
    stat = rolldice() + rolldice() + rolldice(); 
    return stat;
}