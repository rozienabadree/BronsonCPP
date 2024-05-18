#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, chr;
    int i, index = 0, chrCount = 0;

    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter a character to find: ";
    getline(cin, chr);

    cout << "The string is " << str << " and the character " << chr << " appears at index ";

    // Start searching for the character from the beginning of the string
    index = int(str.find(chr));

    // Keep searching until the character is not found (indicated by -1)
    while (index != -1)
    {
        // Output the index where the character was found
        cout << index << " ";

        // Move the starting index for the next search beyond the current found position
        index = int(str.find(chr, index + 1));

        chrCount++;
    }

    cout << endl << "Total occurrences: " << chrCount << endl;

    return 0;
}