#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int fmax[SIZE], index, max = 0, i = 0;

    cout << "Enter a number: ";
    cin >> fmax[i];
    max = fmax[i];
    index = i;

    i++;
    while (i < SIZE)
    {
        cout << "Enter a number: ";
        cin >> fmax[i];
        if (fmax[i] > max)
        {
            max = fmax[i];
            index = i;
        }
        i++;
    }
    cout << "\nThe maximum value is: " << max << endl;
    cout << "This is element number " << index
         << " in the list of numbers." << endl;

    return 0;
}