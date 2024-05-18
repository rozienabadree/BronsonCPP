#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 5;
    string str[SIZE];
    int i, j, index;

    for (i = 0; i < SIZE; i++)
    {
        cout << "Enter a first and last name: ";
        getline(cin, str[i]);

        index = int(str[i].find(' '));

        j = index + 1;
        while (str[i][j])
        {
            cout << str[i][j];
            j++;
        }

        cout << ", ";

        for (j = 0; j < index; j++)
            cout << str[i][j];

        cout << endl
             << endl;
    }

    return 0;
}