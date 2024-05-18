#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string str;
    char prev = 'a';
    int i = 0;
    int length;
    bool start = true;

    cout << "Enter a string: ";
    getline(cin, str); // we will read the entire line

    cout << endl;

    length = str.length();

    while (i < length && str.at(i) != '.') // only print the characters up to the period
    {
        if (start) // check for a valid first letter in the string
        {
            while (str.at(i) == ' ')
                i++;                          // ignore leading spaces
            cout << (char)toupper(str.at(i)); // capitalize the first letter
            start = false;                    // don't do this again
        }
        else if ((str.at(i) == ' ' && prev != ' ') || str.at(i) != ' ')
            cout << (char)tolower(str.at(i));

        prev = str.at(i);

        i++;
    }

    cout << str.at(i); // print the period

    return 0;
}