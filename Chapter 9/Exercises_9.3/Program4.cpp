#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Counting the number of vowels";
    int i, numChars;
    int vowelCount = 0;

    cout << "The string: " << str << endl;

    numChars = int(str.length());

    for (i = 0; i < numChars; i++)
    {
        switch (str.at(i)) // here's where a character is retrieved
        {
        case 'a':
            cout << "Index " << i << ": " << str.at(i) << endl;
            vowelCount++;
            break;
        case 'e':
            cout << "Index " << i << ": " << str.at(i) << endl;
            vowelCount++;
            break;
        case 'i':
            cout << "Index " << i << ": " << str.at(i) << endl;
            vowelCount++;
            break;
        case 'o':
            cout << "Index " << i << ": " << str.at(i) << endl;
            vowelCount++;
            break;
        case 'u':
            cout << "Index " << i << ": " << str.at(i) << endl;
            vowelCount++;
            break;
        }
    }

    cout << "has " << vowelCount << " vowels." << endl;

    return 0;
}