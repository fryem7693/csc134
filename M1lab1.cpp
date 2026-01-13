/*
CSC 134 
M1lab1 
Mark Frye
1/13/2026
*/ 

#include <iostream> 
using namespace std;

int main() {
    //cout << "Hello, World!" << std::endl; 
   string name = "Mark Frye"; 
   int apples = 255;
   double pricePerApple = 0.25;
   
   cout << "Welcome to " << name << "'s apple store!" << endl;
    cout << "We have " << apples << " apples available." << endl;
   cout << "The price per apple is $" << pricePerApple << endl; 
   
   //calculate total price
   double totalPrice = apples * pricePerApple;
   cout << "The total price for all apples is $" << totalPrice << endl; 
   
}