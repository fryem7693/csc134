/* 
CSC 134
M3T2 - For random (based off Mr. Norris' code)
Mark Frye 
1/15/2026
*/

#include <iostream>
// for random
#include <cmath>
#include <ctime>
using namespace std; 

//begin manin function 
int main() {
    //variables 
    const int sides = 12;
    const int rolls = 15;
    //int seed = 69; 
    int seed = time(0); 
    //cout << The seed is: " << seed << endl;
    //seed the random number generator 
    srand(seed);
    //rand() is a large number, so we take the remainder which is % 
    int roll1, roll2, total; 
    // roll a few times 
    roll1 = ((rand() % sides) + 1);
    //cout <<roll << endl; 
    roll2 = ((rand() % sides) + 1);
    //cout << roll2 << endl;
    total = roll1 + roll2;
    cout << "You rolled a " << roll1 << " and a " << roll2 << " for a total of " << total << "." << endl; 
    
    if(total >= To_Hit) {
        cout << "You hit the target!" << endl;
    } 
    else {
        cout << "You missed the target!" << endl;
    }
    return 0;
}