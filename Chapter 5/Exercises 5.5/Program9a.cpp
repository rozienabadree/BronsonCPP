#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cout << "x value       y value" << endl;
    cout << "-------       -------" << endl;
    cout << setiosflags(ios::showpoint);

    for (x = 5.0; x <= 10.0; x = x + 0.2)
    {
        y = 3 * pow(x, 5) - 2 * pow(x, 3) + x;
        cout << setw(8) << x << setw(14) << y << endl;
    }

    return 0;
}