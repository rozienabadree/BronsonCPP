#include <iostream>
#include <iomanip> // needed for formatting
using namespace std;

// a program to convert kilometers per hour to miles to hour

int main()
{
    int kilometers = 60;
    int increment = 5;
    int counter = 1;
    double miles = kilometers * .6241;

    // set output formats for floating point numbers only
    cout << setiosflags(ios::fixed)
         << setiosflags(ios::showpoint)
         << setprecision(4);

    // print the header
    cout << "KM per hour    Miles per hour\n"
         << "-----------    --------------" << endl;

    // iterate 10 times, from 60 km/hr by increments of 5 km/hr
    for (counter = 1; counter <= 10; counter++)
    {
        cout << setw(6) << kilometers << setw(19) << miles << endl;
        kilometers += 5;
        miles = kilometers * .6241;
    }

    cout << endl;

    return 0;
}