#include <ctime>
#include <iostream>
#include <chrono>
#include <iomanip>

using namespace std;

void time() {
    // Get the current time as a time_point
    auto now = chrono::system_clock::now();

    // Convert to time_t to get a human-readable format
    time_t now_c = chrono::system_clock::to_time_t(now);

    // Convert time_t to tm struct
    tm *tm_now = localtime(&now_c);
    
    // Custom format output
    cout << "The current time is: " << put_time(tm_now, "%H:%M:%S %A %d-%B-%Y %Z") << endl;

    return;
}