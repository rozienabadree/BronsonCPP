#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int fmax[SIZE], max = 0, i = 0;

    cout << "Enter a number: ";
    cin >> fmax[i];
    max = fmax[i];

    i++;
    while (i < SIZE)
    {
        cout << "Enter a number: ";
        cin >> fmax[i];
        if (fmax[i] > max)
            max = fmax[i];
        i++;
    }
    cout << "\nThe max value entered is: " << max << endl;

    return 0;
}