#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int fmin[SIZE], index, min, i = 0;

    do
    {
        cout << "Enter a number: ";
        cin >> fmin[i];
        if (i == 0)
        {
            min = fmin[i];
            index = i;
        }

        if (fmin[i] < min)
        {
            min = fmin[i];
            index = i;
        }

        i++;
    } while (i < SIZE);

    cout << "\nThe minimum value is: " << min << endl;
    cout << "This is element number " << index
         << " in the list of numbers." << endl;

    return 0;
}