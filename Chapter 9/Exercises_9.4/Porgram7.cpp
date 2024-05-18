#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string str;
    int strlength, i = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    strlength = str.length();

    cout << "\nThe hexadecimal equivalent of each character is: " << endl;

    while (i < strlength)
    {
        cout << showbase << hex << (int)str[i] << endl;
        i++;
    }

    return 0;
}