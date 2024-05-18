#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 9;
    int i;
    double volts[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        cout << "Please enter a value for the array: ";
        cin >> volts[i];
    }

    cout << "The values entered are\n";
    for (i = 0; i < SIZE; i++)
    {
        if (i != 0 && i % 3 == 0)
            cout << "\n";
        cout << setw(5) << volts[i] << "\t";
    }

    return 0;
}