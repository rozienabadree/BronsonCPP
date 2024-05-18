#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int getanInt(); // function declaration (prototype)
    int value;

    cout << "Enter an integer value: ";
    value = getanInt();
    cout << "The integer entered is: " << value << endl;
    cin.ignore();
    cin.ignore(); //  needed for MS C++ Express users

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
            cout << "Invalid integer - Please re-enter: ";
            continue; // send control to the while statement
        }
        notanint = false;
    }
    return atoi(svalue.c_str()); // convert to an integer
}

bool isvalidInt(string str)
{
    string str2;
    int start = 0, end = 0, len = 0;
    int i;
    bool valid = true; // assume a valid integer
    bool sign = false; // assume no sign

    // removes all leading and trailing spaces
    len = str.length();
    while (str.at(start) && str.at(start) == ' ')
        start++;
    end = len - 1;

    while (str.at(end) && str.at(end) == ' ')
        end--;
    str2 = str.substr(start, (end - start) + 1);
    start = 0;

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
        if (!isdigit(str.at(i)))
            valid = false; // found a non-digit character
        i++;
    }

    return valid;
}