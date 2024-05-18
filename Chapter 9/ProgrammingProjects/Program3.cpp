#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int i, numChars, index = 0, count = 0;
    char ch = 'e';

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "The string with all e's replaced with x is: ";

    numChars = int(str.length());
    i = 0;
    index = int(str.find(ch, i));

    while (index != -1)
    {
        count++;
        str.replace(index, 1, "x");
        i = index + 1;
        index = int(str.find(ch, i));
        if (index == i - 1) // no more matches are found
            index = -1;
    }

    cout << str << endl;

    return 0;
}