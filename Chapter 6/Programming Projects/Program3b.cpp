#include <iostream>
#include <cmath>
using namespace std;

double maxDeflect(double, double, double, double, double);

int main()
{

    double l, b, h, load, elmod;

    cout << "Enter the beam's modulus of elasticity (lb/ft2), length (ft), height (ft), base (ft) and load (lbs) in that order: ";
    cin >> elmod >> l >> h >> b >> load;

    cout << "The maximun deflection is is: " << maxDeflect(l, h, b, load, elmod) * 12.0 << " in." << endl;

    return 0;
}

double maxDeflect(double len, double ht, double base, double load, double elmod)
{

    return (4.0 * load * pow(len, 3) / (elmod * base * pow(ht, 3)));
}