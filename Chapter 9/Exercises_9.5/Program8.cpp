#include <iostream>
#include <cctype>
using namespace std;

bool isValidInt(char); // function prototype (declaration)

int main()
{
    string value;
    int number;

    cout << "Enter an integer: ";
    char ch;
    while (cin.get(ch)) // Read character by character
    {
        if (ch == '\n') // Check for newline character indicating end of input
            break;

        if (!isValidInt(ch))
        {
            cout << "The character '" << ch << "' is not a valid integer digit." << endl;
            return 1; // Exit the program if an invalid digit is entered
        }
        else
        {
            value += ch; // Add the valid digit to the string
        }
    }

    if (value.empty())
    {
        cout << "No integer entered." << endl;
        return 1; // Exit the program if no input is given
    }

    // Convert the string to integer
    number = atoi(value.c_str());
    cout << "The integer you entered is " << number << endl;

    return 0;
}

bool isValidInt(char ch)
{
    return isdigit(ch); // Check if the character is a digit
}
