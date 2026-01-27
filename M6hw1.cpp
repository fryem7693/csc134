/* 
CSC 134 
M6HW- Gold 
Mark Frye 
1/27/2026
*/

#include <iostream>
#include <string>

using namespace std;

bool hasKey = false;
int currentRoom = 1;

void showRoom() {
    cout << "\n--- Room " << currentRoom << " ---\n";
    switch (currentRoom) {
        case 1:
            cout << "You are in a dusty old room. There might be something here...\n";
            break;
        case 2:
            cout << "You see a locked door. You need a key to open it.\n";
            break;
        case 3:
            cout << "A dimly lit hallway. The exit is near!\n";
            break;
        case 4:
            cout << "You found the exit! You escaped!\n";
            break;
    }
}

void searchRoom() {
    if (currentRoom == 1 && !hasKey) {
        cout << "You found a rusty key!\n";
        hasKey = true;
    } else {
        cout << "Nothing useful here.\n";
    }
}

void moveRoom(int room) {
    if (room == 2 && currentRoom == 1) {
        currentRoom = 2;
    } else if (room == 3 && currentRoom == 2) {
        if (hasKey) {
            cout << "You unlocked the door with the key.\n";
            currentRoom = 3;
        } else {
            cout << "The door is locked. You need a key.\n";
        }
    } else if (room == 4 && currentRoom == 3) {
        currentRoom = 4;
    } else {
        cout << "You can't go there from here.\n";
    }
}

int main() {
    string command;
    cout << "Escape Game: Find the key, open the door, and escape!\n";

    while (currentRoom != 4) {
        showRoom();
        cout << "\nCommands: search, go [room number], quit\n> ";
        cin >> command;

        if (command == "search") {
            searchRoom();
        } else if (command == "go") {
            int roomNum;
            cin >> roomNum;
            moveRoom(roomNum);
        } else if (command == "quit") {
            cout << "You gave up. Game over.\n";
            break;
        } else {
            cout << "Unknown command.\n";
        }
    }

    if (currentRoom == 4) {
        cout << "Congratulations! You escaped!\n";
    }

    return 0;
}
