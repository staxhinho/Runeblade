#include <iostream>

using namespace std;

string command;
bool exitFlag = false;

void commandList();
void getInput();

int main() {
    getInput();

    return 0;
}

void getInput() {
    while (!exitFlag) {
        cout << "Runeblade>";
        cin >> command;
        commandList();
    }
}