#include <iostream>
using namespace std;

int main()
{
    int count, reps;
    double gallons, liters;

    cout << "Please type in the total number of data values ";
    cout << "to be converted: ";
    cin >> reps;

    for (count = 1; count <= reps; ++count)
    {
        cout << "Enter the number of gallons: ";
        cin >> gallons;
        liters = 3.785 * gallons;
        cout << "  The corresponding number of liters is " << liters << endl;
    }

    return 0;
}