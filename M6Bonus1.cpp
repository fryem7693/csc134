/* 
CSC 134 
M6Bonus1 
Mark Frye
1/27/2026
*/

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    //magazine of red and black shells
    const int BLACK = 0;
    const int RED = 1;
    const int EMPTY = -1; //is this needed?

    string shell_names[] = {"Black", "Red", "Empty"};

    //Eg 1: using a basic array
    int magazine[] = {RED, BLACK, BLACK, RED};

    for (int shell : magazine)
    {
        string name = shell_names[shell];
        cout << "Next Shell: " << name << endl;
    }


    //Eg 2: using STL vector
    cout << "VERSION 2\n";
    vector<int> mag;

    //load the mag
    mag.push_back(RED);
    mag.push_back(BLACK);
    mag.push_back(BLACK);    
    mag.push_back(RED);


    for(int shell : mag)
    {
        string name = shell_names[shell];
        cout << "Next Shell: " << name << endl;
    }


    return 0;
}