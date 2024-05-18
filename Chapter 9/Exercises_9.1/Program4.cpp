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
            throw "***Invalid input - A denominator value of zero is not permitted***"; // throw a message
        else
            cout << numerator << '/' << denominator
                 << " = " << double(numerator) / double(denominator) << endl;
    }
    catch (char e[])    // need to catch message with char e[] -- error if declared as a string
    {
        cout << e << endl;
        exit(1);
    }

    return 0;
}