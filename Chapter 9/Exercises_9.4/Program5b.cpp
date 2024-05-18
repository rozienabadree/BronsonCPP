#include <iostream>
#include <string>
using namespace std;

int length(char[]); // function prototype

int main()
{
    const int MAXCHARS = 100;

    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, MAXCHARS); // this accepts the string as a C-sting

    cout << "\nThe length of the string is: " << length(str) << endl;

    return 0;
}

int length(char str[])
{
    int len = 0;

    while (str[len]) // while the character is not the null
        len++;
    return len;
}