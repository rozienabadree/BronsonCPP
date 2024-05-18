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

    for (x = 1.0; x <= 3.0; x = x + 0.1)
    {
        y = 1 + x + pow(x, 2) / 2.0 + pow(x, 3) / 6.0 + pow(x, 4) / 24.0;
        cout << setw(7) << x << setw(14) << y << endl;
    }

    return 0;
}