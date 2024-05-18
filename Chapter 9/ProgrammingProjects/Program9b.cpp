#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isvalidReal(string); // function declaration (prototype)

int main()
{

    string value;
    double number;

    cout << "Enter a number with a decimal point: ";
    getline(cin, value);

    if (!isvalidReal(value))
        cout << "The number you entered is not a valid real number.";
    else
    {
        number = atof(value.c_str());
        cout << "The real number you entered is " << number;
    }

    return 0;
}

bool isvalidReal(string str)
{
    // Remove leading whitespace
    int start = 0;
    while (start < str.length() && isspace(str[start]))
    {
        start++;
    }

    // Remove trailing whitespace
    int end = str.length();
    while (end > start && isspace(str[end - 1]))
    {
        end--;
    }

    // Update the string to remove leading and trailing whitespace
    str = str.substr(start, end - start);

    int i;
    bool valid = true;    // assume valid
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
            valid = false;
        i++;
    }

    return valid;
}