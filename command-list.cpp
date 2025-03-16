#include <iostream>
#include <cstdlib>

using namespace std;

extern string command;
    extern bool exitFlag;

void setExitFlag() {
    exitFlag = true;
}

void commandList() {
    void time();

    if (command == "time") {
        time();
    } else if (command == "close") {
        setExitFlag();
    } else if (command == "clear") {
        system("cls");
    } else {
        cout << "Not a valid command" << endl;
    } 
}