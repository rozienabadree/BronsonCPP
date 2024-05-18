#include <iostream>
using namespace std;

int main()
{
    int numerator, denominator;

    try
    {
        cout << "Enter the numerator (whole number only): ";
        cin >> numerator;
        cout << "Enter the denominator (whole number only): ";
        cin >> denominator;

        if (denominator == 0)
            throw denominator; // an integer value is thrown
        else
            cout << numerator << '/' << denominator
                 << " = " << double(numerator) / double(denominator) << endl;
    }
    catch (int e)
    {
        cout << "A denominator value of " << e << " is invalid." << endl;
        exit(1);
    }

    return 0;
}