#include <iostream>
#include <cmath>
using namespace std;

void annulusMoment(double, double); // function prototype

int main()
{
    double r2 = 3.0, r1 = 1.0;
    annulusMoment(r2, r1);
    annulusMoment(2.0, 0);

    return 0;
}

void annulusMoment(double r2, double r1)
{
    const double PI = 3.1416;
    cout << "The second moment of inertia is "
         << PI * (pow(r2, 4) - pow(r1, 4)) / 4.0 << endl;
    return;
}