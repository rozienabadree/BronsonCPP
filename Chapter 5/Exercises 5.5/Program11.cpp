#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double CONVERT = 3.1416 / 180;
    const double VELOCITY = 500;
    double x, y, theta, t;
    theta = 22.8 * CONVERT;
    cout << "  x value       y value      time" << endl;
    cout << "  -------       -------      ----" << endl;
    cout << setiosflags(ios::showpoint);

    for (t = 0; t <= 10.0; t += 0.5)
    {
        x = VELOCITY * t * cos(theta);
        y = VELOCITY * t * sin(theta);
        cout << setw(10) << x << "    " << setw(10) << y << "     "
             << setw(7) << t << endl;
    }

    return 0;
}