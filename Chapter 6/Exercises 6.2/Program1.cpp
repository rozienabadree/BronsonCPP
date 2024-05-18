#include <iostream>
using namespace std;

double findMax(double, double); // function prototype

int main()
{
    double firstnum, secnum, max;

    cout << "\nEnter a number: ";
    cin >> firstnum;
    cout << "Great! Please enter a second number: ";
    cin >> secnum;

    max = findMax(firstnum, secnum); // function is called here

    cout << "\nThe maximum of the two numbers is " << max << endl;

    return 0;
}

double findMax(double x, double y)
{               // start of function body
    double maxnum; // variable declaration

    if (x >= y) // find the maximum number
        maxnum = x;
    else
        maxnum = y;

    return maxnum; // return statement
}