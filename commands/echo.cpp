#include <iostream>
#include <regex>

using namespace std;

void echo(string input) {
    // Trim leading spaces
    input = regex_replace(input, regex("^ +"), "");

    // Check for quotes
    if (!input.empty() && input[0] == '"' && input.back() == '"') {
        input = input.substr(1, input.length() - 2); // Remove surrounding quotes
    }

    cout << input << endl;
}