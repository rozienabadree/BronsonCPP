#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    bool isvalidInt(string); // function prototype (declaration)
    string value;
    int number;

    cout << "Enter an integer: ";
    getline(cin, value);
    if (!isvalidInt(value))
        cout << "The number you entered is not a valid integer.";
    else
    {
        number = atoi(value.c_str());
        cout << "The integer you entered is " << number;
    }

    return 0;
}

bool isvalidInt(string str)
{
    int start = 0;
    int i;
    bool valid = true; // assume a valid
    bool sign = false; // assume no sign

    // check for an empty string
    if (str.length() == 0)
        valid = false;

    // check for a leading sign
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