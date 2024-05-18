#include <iostream>
#include <cmath>
#include <iomanip> // needed for formatting
using namespace std;

int main()
{
    double wt, len, x, elmod, imoment, deflect;
    double base, height;

    wt = 200;
    len = 3;
    elmod = 187.2e6;
    base = 0.2;
    height = 0.3;

    imoment = base * pow(height, 3) / 12.0;
    cout << "Distance (ft)    Deflection (in)" << endl;
    cout << "-------------    --------------" << endl;

    x = 0.5;
    while (x <= len)
    {
        // the deflection in feet is calculated next
        deflect = wt * pow(x, 2) * (pow(x, 2) + 6 * pow(len, 2) - 4 * len * x) / (24 * elmod * imoment);
        // this is now converted to the deflection in inches
        deflect /= 12.0;
        // set output formats for floating point numbers only
        cout << setiosflags(ios::fixed) << setprecision(6);
        cout << "  " << x << "          " << deflect << endl;
        x += 0.5;
    }

    return 0;
}