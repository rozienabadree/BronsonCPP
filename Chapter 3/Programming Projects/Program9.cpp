#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double i, e, r, t, tt;

    cout << "Enter the voltage of the battery: ";
    cin >> e;

    cout << "Enter the resistance: ";
    cin >> r;

    cout << "Enter the value for the time constant: ";
    cin >> tt;

    cout << "Enter the value for the time in seconds: ";
    cin >> t;

    i = (e / r) * exp(-t / tt);

    cout << "The current is " << i << endl;

    return 0;
}