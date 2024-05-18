#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int i, size;

    cout << "Please enter a string: ";
    getline(cin, str);

    size = str.length();
    size = size - 1;        // adjust the range because the array starts at 0

    cout << "The string in reverse is: ";

    for (i=size; i >= 0; i--)
    {
        cout << str.at(i);
    }

    return 0;
}