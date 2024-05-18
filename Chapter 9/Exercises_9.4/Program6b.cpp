#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int countlets(string); // functiion prorotype

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    cout << "\nThere are " << countlets(str)
         << " letters in the string just entered." << endl;

    return 0;
}

int countlets(string str)
{
    int i = 0, strlength = 0, letters = 0;

    strlength = str.length();
    while (i < strlength)
    {
        if (isalpha(str[i]))
            letters++;
        i++;
    }
    return letters;
}