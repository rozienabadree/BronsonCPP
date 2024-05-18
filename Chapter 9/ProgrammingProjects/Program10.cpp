#include <iostream>
#include <string>
#include <cctype>
using namespace std;

double getaReal(); // function declaration (prototype)

int main()
{
    double value;

    cout << "Enter an real value: ";
    value = getaReal();

    cout << "The real entered is: " << value << endl;

    return 0;
}

double getaReal()
{
    bool isvalidReal(string); // function declaration (prototype)
    bool notanint = true;
    string svalue;

    while (notanint)
    {
        try
        {
            cin >> svalue; // accept a string input
            if (!isvalidReal(svalue))
                throw svalue;
        }
        catch (string e)
        {
            cout << "Invalid real - Please re-enter: ";
            continue; // send control to the while statement
        }
        notanint = false;
    }
    return atof(svalue.c_str()); // convert
}

bool isvalidReal(string str)
{
    int start = 0;
    int i;
    bool valid = true;    // assume a valid
    bool sign = false;    // assume no sign
    bool decimal = false; // assume no decimal

    // check for an empty string
    if (str.length() == 0)
        valid = false;

    // check for a leading sign
    if (str.at(0) == '-' || str.at(0) == '+')
    {
        sign = true;
        start = 1; // start checking for digits after sign
    }

    // check that there is at least one character after the sign
    if (sign && str.length() == 1)
        valid = false;

    // now check the string, which we know has at least one non-sign char
    i = start;
    while (valid && i < str.length())
    {
        if (str.at(i) == '.' && !decimal) // allows one decimal point
            decimal = true;
        else if (!isdigit(str.at(i)))
            valid = false; // found a non-digit character
        i++;
    }

    return valid;
}