/*
CSC 134
M2HW1 - Gold 
Mark Frye
1/13/2026
*/ 
#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() {
    //declare variables 
    int starting_account_balance = 1000.00;
    int amount_deposited;
    int amount_withdrawn;
    string name_on_account;
    double final_account_balance; 
    //get user input 
    cout << "Enter the name on the Account: " <<endl; 
    cin >> name_on_account;
    cout << "enter the Account Number: " << endl;
    int account_number = 0; 
    cin >> account_number;
    cout << "Your strarting Balance is: $" << endl;
    cin >> starting_account_balance;
    cout << "Enter the amount to be deposited: $" << endl;
    cin >> amount_deposited;
    cout << "Enter the amount to be withdrawn: $" << endl;
    cin >> amount_withdrawn;
    //calcutae final account balance 
    final_account_balance = starting_account_balance + amount_deposited - amount_withdrawn;
    //display final account balance 
    cout << setprecision(2) << fixed;
    cout << "Account holder Name: " << name_on_account << endl; //name on the account
    cout << "Account Number: " << account_number << endl; //account number 
    cout << "Final Account Balance: $" << final_account_balance << endl;
    return 0;
} 
