#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "This cannot be";

    cout << "The original string is: " << str << endl
         << " and has " << int(str.length()) << " characters." << endl;

    // Insert characters
    str.insert(4, " I know");
    cout << "The string, after insertion, is: " << str << endl
         << " and has " << int(str.length()) << " characters." << endl;

    // Replace characters
    str.replace(12, 6, "to");
    cout << "The string, after replacement, is: " << str << endl
         << " and has " << int(str.length()) << " characters." << endl;

    // Append characters
    str = str + " correct";
    cout << "The string, after appending, is: " << str << endl
         << " and has " << int(str.length()) << " characters." << endl;
         
    return 0;
}