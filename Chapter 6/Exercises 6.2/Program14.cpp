#include <iostream>
using namespace std;

bool leapYear(int year);    // function prototype

int main()
{
    int year;
    
    cout << "Please enter the year: ";
    cin >> year;

    if (leapYear(year) == 1)
        cout << "The year is a leap year." << endl;
    else if ( leapYear(year) == 0)
        cout << "The year is not a leap year." << endl;

    return 0;
}

bool leapYear(int year)
{
    if ((year % 400 == 0 || year % 4 == 0) && year % 100 != 0)
        return true;
    else
        return false;
}