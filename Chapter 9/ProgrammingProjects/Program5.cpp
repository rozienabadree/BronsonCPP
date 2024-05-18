#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str, toFind, toReplace;
    int i, numChars, repLength, index = 0;
    char ch = 'e';

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a search sequence: ";
    getline(cin, toFind);
    repLength = toFind.length();

    cout << "Enter a replacement sequence: ";
    getline(cin, toReplace);

    numChars = str.length();
    i = 0;
    index = str.find(toFind, i);

    if (index != -1)
    {
        while (index != -1)
        {
            str.replace(index, repLength, toReplace);
            i = index + 1;
            index = str.find(toFind, i);
            if (index == i - 1) // no more matches are found
                index = -1;
        }
        cout << "The string with all replacements made is: " << str << endl;
    }
    else
        cout << "\nSEQUENCE NOT FOUND" << endl;

    return 0;
}