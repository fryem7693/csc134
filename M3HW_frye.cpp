/* 
CSC 134
M3HW -Gold  
Mark Frye
1/16/2026
*/ 

#include <iostream> 
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;
using std::setprecision;
using std::fixed;

//Qustions as functions 
void question1(); 
int question2(); 
void question3(); 
void question4(); 

int main() 
{ 

    int choice; 
    char Start_Over; 

    do 
    { 
        //user menu 
        cout << "--------------------------------\n"; 
        cout << "Which Question would you like to start with? Enter a number 1-4: \n";
        cout << "--------------------------------\n"; 
        cin >> choice; 

        if (choice == 1) { 
            cout <<"Question 1:\n--------------------------------\n"; 
            question1(); 
        }
        else if (choice == 2) { 
            cout <<"Question 2:\n--------------------------------\n"; 
            question2(); 
        }
        else if (choice == 3) { 
            cout <<"Question 3:\n--------------------------------\n"; 
            question3(); 
        }
        else if (choice == 4) { 
            cout <<"Question 4:\n--------------------------------\n"; 
            question4(); 
        }
        else 
        { 
            cout << "Error: Invalid choice. Please enter a number between 1 and 4.\n"; 
        }
        //user choice to restart or exit the program 
        cout << "--------------------------------\n";
        cout << "Would you like to start over? (y/n): ";
        cin >> Start_Over;
    }
    while (Start_Over == 'y' || Start_Over == 'Y');
    cout << "Program has ended.\n";
    cout << "Goodbye!\n";
    return 0;
}

void question1() { 
    char user_input;
    char choice;
    
    do 
    {
        cout << "Hello! My name is Sparks and I will be your chat bot for today!\n Are you having a great day? Enter yes or no:\n";
        cin >> user_input;
        
        if (user_input == 'y' || user_input == 'Y') { 
            cout << "That's great to hear! Keep up the positive vibes!\n"; 
        }
        else if (user_input == 'n' || user_input == 'N') { 
            cout << "I'm sorry to hear that. Remember, every day is a new opportunity for a fresh start!\n"; 
        }
        else 
        { 
            cout << "Huh?? I... I don't understand..?\n"; 
        }

        cout << "------------------------------------------------\n";
        cout << "Would you like to rerun Question 1? (y/n): ";
        cout << "------------------------------------------------\n";
        cin >> choice;
    }
    while (choice == 'y' || choice == 'Y'); 
} 
int question2() 
{ 
    char choice;
    string store_name = "Mark's chicken Emporium"; 
    string food_name = "chicken"; 
    double food_price;
    int dining_option; 

    //receipt variables 
    double Tip, SubTotal, Total; 
    double Tax_Percent, Tax_Cost; 

    do 
    {
        cout << "Welcome to " << store_name << "!\n"; 
        cout << "We have the best " << food_name << " in town!\n"; 
        cout << "We sell " << food_name << "! what's the price of your meal? $"; 
        cin >> food_price; 

        if (food_price > 0) 
        {
            cout << "------------------------------------------------\n"; 
            cout << "Great! Will you be dining in or to go? (Enter 1 for dining in and 2 dor to go): \n";
            cin >> dining_option;

            if (dining_option == 1) 
            { 
                cout << "------------------------------------------------\n";
                cout << "Dining in selected. A 15% tip will be added to your bill.\n"; 
                Tip = 0.15;
            }
            else 
            {
                Tip= 0;
            }
        }
       

        SubTotal = food_price; 
        Tax_Percent = 0.08; 
        Tax_Cost = SubTotal * Tax_Percent; 
        Total = SubTotal + Tax_Cost + Tip; 

        //the receipt
       
        cout << setw(12) << setprecision(2) << fixed << endl; 
        cout << "--------------------------------" << endl;
        cout << "         RECEIPT         " << endl; 
        cout << "--------------------------------" << endl;
        cout << setw(12) << "Subtotal:\t$" << setw(8) << SubTotal << endl;
        cout << setw(12) << "Tip:\t$" << setw(8) << Tip << endl;
        cout << setw(12) << "Tax (8%):\t$" << setw(8) << Tax_Cost << endl;
        cout << "------------------------------------" << endl;
        cout << setw(12) << "Total:\t$" << setw(8) << Total << endl;
        cout << "------------------------------------" << endl;
        cout << "Thank you for shopping at " << store_name << "! Have a great day!" << endl;

        cout << "Would you like to rerun Question 2? (y/n): ";
        cout << "--------------------------------\n";
        cin >> choice;
    }
    while (choice == 'y' || choice == 'Y');

    return 0;
}

void question3() 
{ 
    char play;
    char choice;
    int game_choice, game_choice2;

    do 
    { 
        cout <<"Welcome to a DND adventure! Would you like to play? (y/n): \n"; 
        cin >> play; 

        if(play == 'y' || play == 'Y') 
        {
            cout << "Great Let's begin you adventure!\n"; 
            cout << "You and your party of adventurers have come across a fork in the road. do you go left or right? (1 for left, 2 for right): \n";
            cout << " Down the left path is the dark forest filled to the brim with monsters. The right path leads you to a village with a livly tavern.\n"; 
            cin >> game_choice; 

            if (game_choice == 1) 
            { 
                cout << "You and your party bravely venture into the Dark Forest and are immediately ambushed by a group of goblins! After a fierce battle, you emerge victorious but not without injuries. ";
                cout << "You find a treasure chest among the goblin remains containing 100 gold coins!\n"; 
                cout << "--------------------------------\n"; 
                cout << "would you like to continue your adventure? (1 for yes, 2 for no): \n"; 
                cin >> game_choice2; 
                if (game_choice2 == 1) 
                {
                    cout << "You and your party press on deeper into the Dark Forest, determined to uncover its secrets. After hours of trekking through the dense foliage, you stumble upon an ancient ruin. ";
                    cout << "Inside, you discover a powerful magical artifact that will aid you in your future quests!\n";
                }
            }
            if (game_choice == 2) 
            { 
                cout << "You and your party head towards the village and enter the lively tavern. As you enjoy your drinks, a mysterious stranger approaches you with a quest to retrieve a stolen artifact from a nearby cave. ";
                cout << "You accept the quest and set off on your adventure!\n"; 
                cout << "--------------------------------\n"; 
                cout << "Would you like to continue your adventure? (1 for yes, 2 for no): \n"; 
                cin >> game_choice2; 
                if (game_choice2 == 1) 
                {
                    cout << "You and your party make your way to the cave, facing various challenges along the way. After a tense confrontation with the thief who stole the artifact, you successfully retrieve it and return it to the grateful stranger in the tavern. ";
                    cout << "Your heroic deeds earn you fame and fortune in the village!\n";
                } 
                if (game_choice2 == 2) 
                {
                    cout << "You and your party decide to stay in the village and enjoy the hospitality of the locals. You spend your days exploring the village, making new friends, and indulging in delicious food and drink. ";
                    cout << "While you may not have gone on an adventure, you created lasting memories and forged strong bonds with the villagers!\n";
                }
                else 
                {
                    cout<< "Sooo you must have fat fingered it cause i clearly stated 1 or 2 right? Try again. \n"; 
                }
            }
        }
        else if (play == 'n' || play == 'N') 
        {
            cout << "Awwww too bad Maybe next time!\n";
        }
        cout << "--------------------------------\n";
        cout << "Would you like to rerun Question 3? (y/n): ";
        cout << "--------------------------------\n";
        cin >> choice;
    } 
    while (choice == 'y' || choice == 'Y'); 
}

void question4() 
{ 
    int first_num, second_num, user_input; 
    int total = 0; 
    char choice;

    srand(time(0)); 

    first_num = rand() % 9 + 1;
    second_num = rand() % 9 + 1;
    total = first_num + second_num; 

    cout << "What is " << first_num << " + " << second_num << "?" << endl;
    cin >> user_input;
    if (user_input == total) 
    { 
        cout << "Correct! Well done!\n"; 
    } 
    else 
    { 
        cout << "Incorrect. The correct answer is " << total << ".\n"; 
    }
    cout << "--------------------------------\n";
    cout << "Would you like to rerun Question 4? (y/n): ";
    cout << "--------------------------------\n";
    cin >> choice; 

    if (choice == 'y' || choice == 'Y') 
    { 
        question4(); 
    }
}
