#include <iostream>
using namespace std;

int main()
{
    int numerator, denominator;
    bool needDenominator = true;

    cout << "Enter a numerator (whole number only): ";
    cin >> numerator;
    cout << "Enter a denominator (whole number only): ";

    while (needDenominator)
    {
        cin >> denominator;
        try
        {
            if (denominator == 0)
                throw denominator; // an integer value is thrown
        }
        catch (int e)
        {
            cout << "A denominator value of " << e << " is invalid." << endl;
            cout << "Please reenter the denominator (whole number only): ";
            continue; // sends control back to the while statement
        }
        cout << numerator << '/' << denominator
             << " = " << double(numerator) / double(denominator) << endl;
        needDenominator = false;
    }
    
    return 0;
}