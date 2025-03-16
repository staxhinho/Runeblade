#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

extern string command;
extern bool exitFlag;

void setExitFlag() {
    exitFlag = true;
}

void commandList() {
    void time();
    void echo(string);

    string cmd;
    string args;

    // Separate command and arguments
    stringstream ss(command);
    ss >> cmd;
    getline(ss, args); // Read the rest of the input (after the command)

    if (cmd == "time") {
        time();
    } else if (cmd == "close") {
        setExitFlag();
    } else if (cmd == "clear") {
        system("cls");
    } else if (cmd == "echo") {
        echo(args);
    } else {
        cout << "Not a valid command" << endl;
    }
}