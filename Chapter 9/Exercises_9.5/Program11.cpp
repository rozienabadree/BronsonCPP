#include <iostream>
#include <string>
using namespace std;

int main()
{
    int getanInt(); // function declaration (prototype)
    int value;

    cout << "Enter an integer value: ";
    value = getanInt();
    cout << "The integer entered is: " << value << endl;

    return 0;
}

int getanInt()
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
            cout << "Invalid integer - Please reenter: ";
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
    if (int(str.length()) == 0)
        valid = false;

    // check if the string ends in a decimal point, and if so, remove it.
    if (str.at(str.length() - 1) == '.')
    {
        str.erase(str.length() - 1, 1);
    }

    // check for a leading sign
    if (str.at(0) == '-' || str.at(0) == '+')
    {
        sign = true;
        start = 1; // start checking for digits after the sign
    }

    // check that there is at least one character after the sign
    if (sign && int(str.length()) == 1)
        valid = false;

    // now check the string, which you know has at least one non-sign character
    i = start;
    while (valid && i < int(str.length()))
    {
        if (!isdigit(str.at(i)))
            valid = false; // found a non-digit character
        i++;               // move to next character
    }

    return valid;
}
