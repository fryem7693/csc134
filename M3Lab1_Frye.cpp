/* 
CSC 134
M3Lab1 - coices with the f statement 
Mark Frye 
1/15/2026
*/

#include <iostream>
using namespace std;

//variables

void RedPotion(); 
void BluePotion();
void GreenPotion();
void NoPotion();

//begin main function
int main() { 
//choices 
int choice; 
char letter_choice ='y';

cout << "Welcome to the potion shop!" << endl; 
cout << "----------------------------" << endl;
cout << "1. Red potion: Heals 50 HP" << endl; 
cout << "2. Blue potion: Restores 30MP" << endl;
cout << "3. Green potion: Cures poison" << endl;
cout << "4. Leave the shop" << endl;
cout << "----------------------------" << endl;
cout << "What would you like to do? (Enter 1-4): ";
cin >> choice;

if (choice == 1) {
    RedPotion();
} 
else if (choice == 2) {
    BluePotion();
} 
else if (choice == 3) {
    GreenPotion();
} 
else {
    NoPotion(); 
} 

cout << "Thank you for vistitin the potion shop!" << endl; 
cout << "Goodbye!" << endl; 
cout << "would you like to play again? (y/n): ";
cin >> letter_choice;
if (letter_choice == 'y' || letter_choice == 'Y') 
{
    main(); 
 }
 else 
 {
    cout << "Exiting the game. Goodbye!" << endl; 
 }

 return 0; 
}
//red potion function 
void RedPotion(){
    cout << "-------------------------------------------" << endl; 
    cout << "You have chosen the Red Potion! Your HP has been restored by 50 points." << endl; 
    cout << "-------------------------------------------" << endl; 
}
//blue potion function
void BluePotion(){
    cout << "-------------------------------------------" << endl; 
    cout << "You have chosen the Blue Potion! Your MP has been restored by 30 points." << endl; 
    cout << "-------------------------------------------" << endl; 
}
//green potion function
void GreenPotion(){
    cout << "-------------------------------------------" << endl; 
    cout << "You have chosen the Green Potion! You are now cured of poison." << endl; 
    cout << "-------------------------------------------" << endl; 
}
//no potion function
void NoPotion(){
    cout << "-------------------------------------------" << endl; 
    cout << "You have chosen to leave the shop without purchasing a potion." << endl; 
    cout << "-------------------------------------------" << endl; 
}