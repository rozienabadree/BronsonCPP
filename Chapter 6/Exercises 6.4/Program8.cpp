#include <iostream>
using namespace std;

int time(int, int); // function prototype

int main()
{
    int min, hour, sec;

    cout << "Enter two numbers: ";
    cin >> min >> hour;

    sec = time(min, hour);

    cout << "The total number of seconds is " << sec << endl;

    return 0;
}

int time(int min, int hour)
{
    int sec;

    sec = (hour * 60 + min) * 60;

    return sec;
}