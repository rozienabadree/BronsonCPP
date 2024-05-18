#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string str;
    int i = 0, strlength;

    cout << "Enter a string: ";
    getline(cin, str);
    strlength = str.length();

    cout << "\nOne word per line: " << endl;
    while (i < strlength)
    {
        if (isspace(str[i]))
            cout << endl;
        else
            cout << str[i];
        i++;
    }

    return 0;
}