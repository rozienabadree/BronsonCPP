#include <iomanip>
#include <iostream>
using namespace std;

double roundTwoDecimals(double);    // function prototype

int main()
{
    double number, roundedNumber;

    cout << "Please enter a number to be rounded to two decimal places: ";
    cin >> number;

    roundedNumber = roundTwoDecimals(number);
    cout << "The number rounded to two decimal places is " << roundedNumber << endl;

    return 0;
}

double roundTwoDecimals(double value)
{
    return ((double)((int)((value * 10 * 10) + 0.5)) / (10 * 10));
}