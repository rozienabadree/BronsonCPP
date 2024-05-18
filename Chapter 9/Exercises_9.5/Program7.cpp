#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    bool isvalidInt(string); // function prototype (declaration)
    string value, value2;
    int number, len = 0, start = 0, end = 0;

    cout << "Enter an integer: ";
    getline(cin, value);

    len = value.length();
    while (value.at(start) && value.at(start) == ' ')
        start++;

    end = len - 1;

    while (value.at(end) && value.at(end) == ' ')
        end--;

    value2 = value.substr(start, (end - start) + 1);

    if (!isvalidInt(value2))
        cout << "The number you entered is not a valid integer.";
    else
    {
        number = atoi(value2.c_str());
        cout << "The integer you entered is " << number;
    }

    return 0;
}

bool isvalidInt(string str)
{
    int start = 0;
    int i;
    bool valid = true; // assume a valid integer
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