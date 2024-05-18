#include <iostream>
#include <ctime>
#include <cctype>
using namespace std;

int main()
{
    const int SIZE = 10;
    int i;
    int nums[SIZE];

    srand(time(NULL));

    cout << "The random numbers are: " << endl;

    for (i = 0; i < SIZE; i++)
    {
        nums[i] = rand() % 129;
        cout << nums[i] << "  ";
    }
    cout << endl
         << endl;

    for (i = 0; i < SIZE; i++)
    {
        if (isupper((char)nums[i]))
        {
            cout << "The character is an uppercase letter: ";
            cout << (char)nums[i] << endl;
        }
        else if (islower((char)nums[i]))
        {
            cout << "The character is a lowercase letter: ";
            cout << (char)nums[i] << endl;
        }
        else if (isdigit((char)nums[i]))
        {
            cout << "The character is a digit: ";
            cout << (char)nums[i] << endl;
        }
        else if (isspace((char)nums[i]))
        {
            cout << "The character is a space" << endl;
        }
        else
            cout << "The character is an integer: " << nums[i] << endl;
    }

    return 0;
}