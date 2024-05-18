#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int i, index;

    cout << "Enter a first and last name: ";
    getline(cin, str);

    cout << endl;

    index = int(str.find(' '));

    i = index + 1;
    while (str[i])
    {
        cout << str[i];
        i++;
    }

    cout << ", ";

    for (i = 0; i < index; i++)
        cout << str[i];

    return 0;
}