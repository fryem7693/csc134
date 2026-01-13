/* 
CSC 134 
M2T2 
Mark Frye
1/13/2026
*/

#include <iostream> 
#include <iomanip> //for the 2 deciaml places
using namespace std;

int main() {
//purpose- create a simple receipt
//should also handle sales tax (8%) 
//Declare our variables
string item = "🎂 Cake";
string first_name;
string last_name; 
string full_name;
double item_price = 15.99;
double tax_percent = 0.08; 
double tax_amount;
double total_price;
//Greet user and take the order 
cout << "Welcome to the Bakery!" << endl; 
cout << "What is your first name? "; 
cin >> first_name; 
cout << "What is your last name? "; 
cin >> last_name;
full_name = first_name + " " + last_name;
cout << "Hello " << full_name << "!" << endl; 
cout << "You have ordered one " << item << "." << endl;
//calculate the meal price 
tax_amount = item_price * tax_percent; 
total_price = item_price + tax_amount; 
//Print the receipt
cout << setprecision(2) << fixed;
cout << total_price << endl;
    return 0; //no errors
}
