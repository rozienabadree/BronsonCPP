#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double K1C = 13.12;
    const double K2C = 11.37;
    const double K3C = 0.3965;
    double temp, ws, wcIndex;

    cout << "Temperature      Wind Speed      Wind Chill\n"
         << "(degress C)       (km/hr)          Index\n"
         << "-----------      ----------      ----------" << endl;

    // set output formats for floating point numbers only
    cout << setiosflags(ios::fixed);
    for (temp = 2.0; temp <= 10.0; temp += 4.0)
    {
        for (ws = 5.0; ws <= 11.0; ws += 2.0)
        {
            wcIndex = K1C + 0.6125 * temp - K2C * pow(ws, 0.16) + K3C * temp * pow(ws, 0.16);
            cout << " " << setw(7) << setprecision(2) << temp
                 << "        " << setw(7) << setprecision(2) << ws
                 << "          " << setw(7) << setprecision(2) << wcIndex << endl;
        }
    }

    return 0;
}