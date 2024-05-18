#include <iostream>
#include <string>
using namespace std;

int main()
{
    string string1 = "LINEAR PROGRAMMING THEORY";
    string s1, s2, s3;
    int j, k;

    cout << "The original string is " << string1 << endl;

    j = int(string1.find('I'));
    cout << " The first position of an 'I' is " << j << endl;

    k = int(string1.find('I', (j + 1)));
    cout << " The next position of an 'I' is " << k << endl;

    j = int(string1.find("THEORY"));
    cout << " The first location of \"THEORY\" is " << j << endl;

    k = int(string1.find("ING"));
    cout << " The first index of \"ING\" is " << k << endl;

    // Now extract three substrings
    s1 = string1.substr(2, 5);
    s2 = string1.substr(19, 3);
    s3 = string1.substr(6, 8);

    cout << "The substrings extracted are:" << endl
         << " " << s1 + s2 + s3 << endl;

    return 0;
}