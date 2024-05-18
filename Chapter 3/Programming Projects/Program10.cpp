#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double po;
    double pi;
    double amp;

    po = 50.0;
    pi = 1.0;

    amp = 10 * log(po / pi);

    cout << fixed << setprecision(5);
    cout << "\nThe amplification with po = " << po << " is "
         << amp << endl;

    po = 4.639;
    pi = 1.0;

    amp = 10 * log(po / pi);

    cout << fixed << setprecision(5);
    cout << "\nThe amplification with po = " << po << " is "
         << amp << endl;

    return 0;
}