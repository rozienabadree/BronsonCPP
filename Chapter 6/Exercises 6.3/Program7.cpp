#include <iostream>
using namespace std;

void time(int&, int&); // function prototype

int main()
{
    int min, hour;

    cout << "Enter two numbers: ";
    cin >> min >> hour;
    time(min, hour);

    return 0;
}

void time(int& min, int& hour) // accept two references
{
    int sec;

    sec = (hour * 60 + min) * 60;
    cout << "The total number of seconds is " << sec << endl;

    return;
}