#include <iostream>
using namespace std;

int main()
{
    const int MAXCOUNT = 10;
    int count;
    double gallons, liters;

    for (count = 1; count <= MAXCOUNT; ++count)
    {
        cout << "Enter the number of gallons: ";
        cin >> gallons;
        liters = 3.785 * gallons;
        cout << "  The corresponding number of liters is " << liters << endl;
    }

    return 0;
}