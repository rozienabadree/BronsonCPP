#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const int STARTYR = 2000;
    int t, year;
    double pop;

    cout << "          Est. Pop.\n";
    cout << "Year     (Billions)\n";
    cout << "----      ---------          \n";

    for (year = 2005; year <= 2010; ++year)
    {
        t = year - STARTYR;
        pop = 6 * exp(0.02 * t);
        cout << year << setw(14) << setiosflags(ios::fixed)
             << setiosflags(ios::showpoint) << setprecision(4)
             << pop << endl;
    }

    return 0;
}