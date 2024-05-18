#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double t, y;
    cout << "t value       y value" << endl;
    cout << "-------       -------" << endl;
    cout << setiosflags(ios::showpoint);

    for (t = 4; t <= 10.0; t = t + 0.2)
    {
        y = 2 * exp(0.8 * t);
        cout << setw(7) << t << setw(14) << y << endl;
    }

    return 0;
}