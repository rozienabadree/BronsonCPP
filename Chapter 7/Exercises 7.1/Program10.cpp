#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SIZE = 10;
    int i;
    double resistance[SIZE], volts[SIZE], current[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        cout << "Enter a resistance: ";
        cin >> resistance[i];
        cout << "Enter a current: ";
        cin >> current[i];
        volts[i] = resistance[i] * current[i];
        cout << endl;
    }

    cout << "\n      Current   Resistance   Volts" << endl;
    cout << "      -------   ---------   ------" << endl;

    for (i = 0; i < SIZE; i++)
    {
        cout << setw(10) << fixed << setprecision(2) << current[i]
             << "      " << resistance[i]
             << "        " << volts[i] << endl;
    }

    return 0;
}