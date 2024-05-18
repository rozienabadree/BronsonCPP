#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int i, count = 0;
    string str;

    cout << "Type in a string (that doesn't begin or end w/a space): ";
    getline(cin, str);

    // cycle through all elements of the string
    for (i = 0; i < int(str.length()); i++)
    {
        if (isspace(str[i]) && !isspace(str[i + 1]) && str[i - 1])
            count++;
    }
    count++; // there will be one more word than spaces
    cout << "The number of words in that string are: " << count << endl;

    return 0;
}