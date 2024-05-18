#include <iostream>
using namespace std;

int main()
{
    int numerator, denominator;
    string input;
    bool needNumerator = true, needDenominator = true;

    while (needNumerator)
    {
        cout << "Enter a numerator (whole number only) or q to exit: ";
        cin >> input;

        if (input == "q" || input == "Q")   // need to read numerator as a string to test this condition
            exit(1);
        numerator = stoi(input);    // convert input to a number

        cout << "Enter a denominator (whole number only) or q to exit: ";

        while (needDenominator)
        {
            cin >> input;

            if (input == "q" || input == "Q")
                exit(1);
            denominator = stoi(input);  // convert input to a number

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
        needDenominator = true;
    }
    
    return 0;
}