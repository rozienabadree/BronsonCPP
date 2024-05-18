#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double sl;
    double rl = 1;
    double loud;

    sl = 200;

    loud = 10 * log(sl / rl);

    cout << fixed << setprecision(5);
    cout << "\nThe loudness with sl = " << sl << " is " << loud << endl;

    sl = 1e13;

    loud = 10 * log(sl / rl);

    cout << fixed << setprecision(5);
    cout << "\nThe loudness with sl = " << sl << " is " << loud << endl;

    sl = 1e14;

    loud = 10 * log(sl / rl);

    cout << fixed << setprecision(5);
    cout << "\nThe loudness with sl = " << sl << " is " << loud << endl;

    return 0;
}
