#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double GRAV = 32.0;
    double d, totD = 0;
    double t;

    cout << "                DISTANCE IN           TOTAL\n"
         << " TIME         CURRENT INTERVAL       DISTANCE\n"
         << " -----        ----------------       --------" << endl;

    cout << setiosflags(ios::fixed)
         << setiosflags(ios::showpoint);

    for (t = 0; totD <= 50000; t += 0.1)
    {
        d = (1.0 / 2.0) * GRAV * pow(t, 2);
        totD = d + totD;
        cout << setw(4) << setprecision(1) << t << "      " << setw(16) << setprecision(4) << d
             << "    " << setw(16) << setprecision(4) << totD << endl;
    }

    return 0;
}
