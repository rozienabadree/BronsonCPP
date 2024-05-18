#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str, toFind, toReplace;
    int numChars, repLength, index = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a search sequence: ";
    getline(cin, toFind);
    repLength = int(toFind.length());

    cout << "Enter a replacement sequence: ";
    getline(cin, toReplace);

    numChars = int(str.length());

    index = int(str.find(toFind, 0));

    if (index != -1)
    {
        str.replace(index, repLength, toReplace);
        cout << "The string with the first replacement made is: " << str << endl;;
    }
    else
        cout << "\nSEQUENCE NOT FOUND" << endl;

    return 0;
}