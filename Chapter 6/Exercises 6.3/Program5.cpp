#include <iostream>
using namespace std;

void time(int seconds, int& hours, int& mins, int& secs); // function prototype

int main()
{
    int input, hours, mins, secs;

    cout << "Please enter the time to be converted to hours, minutes, and seconds: ";
    cin >> input;

    time(input, hours, mins, secs);

    cout << "The time is: \n"
         << "Hours:\t" << hours << "\n"
         << "Minutes:\t" << mins << "\n"
         << "Seconds:\t" << secs << "\n";

    return 0;
}

void time(int seconds, int& hours, int& mins, int& secs)
{
    hours = seconds / (60 * 60);
    mins = (seconds - hours * 60 * 60) / 60;
    secs = (seconds - hours * 60 * 60 - mins * 60);

    return;
}