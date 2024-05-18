#include <iostream>
#include <string>
using namespace std;

int main()
{
    int getanint(); // function declaration (prototype)
    int numerator, denominator;

    try
    {
        cout << "Enter the numerator (whole number only): ";
        numerator = getanint();
        cout << "Enter the denominator(whole number only): ";
        denominator = getanint();
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

int getanint()
{
    bool isvalidInt(string); // function declaration (prototype)
    bool notanint = true;
    string svalue;

    while (notanint)
    {
        try
        {
            cin >> svalue; // accept a string input
            if (!isvalidInt(svalue))
                throw svalue;
        }
        catch (string e)
        {
            cout << "Invalid integer - Please re-enter: ";
            continue; // send control to the while statement
        }
        notanint = false;
    }
    return atoi(svalue.c_str()); // convert to an integer
}

bool isvalidInt(string str)
{
    int start = 0;
    int i;
    bool valid = true; // assume a valid
    bool sign = false; // assume no sign

    // check for an empty string
    if (str.length() == 0)
        valid = false; // check for a leading sign
    if (str.at(0) == '-' || str.at(0) == '+')
    {
        sign = true;
        start = 1; // start checking for digits after the sign
    }

    // check that there is at least one character after the sign
    if (sign && str.length() == 1)
        valid = false;

    // now check the string, which we know has at least one non-sign char
    i = start;
    while (valid && i < str.length())
    {
        if (!isdigit(str.at(i)))
            valid = false; // found a non-digit character
        i++;               // move to next character
    }
    return valid;
}