#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    string str;

    cout << "Type in any sequence of characters: ";
    getline(cin, str);

    // cycle through all elements of the string
    for (i = 0; i < str.length(); i++)
        str[i] = toupper(str[i]);
    cout << "The characters just entered, in uppercase, are: " << str << endl;

    cin.ignore();
    return 0;
}