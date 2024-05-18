#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int i, numChars;
    int vowelCount = 0;

    cout << "Please enter a string: ";
    getline(cin, str);

    cout << "The string: " << str << endl;

    numChars = int(str.length());

    for (i = 0; i < numChars; i++)
    {
        switch (str.at(i)) // here's where a character is retrieved
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowelCount++;
        }
    }

    cout << "has " << vowelCount << " vowels." << endl;
    
    return 0;
}