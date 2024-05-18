#include <iostream>
#include <cmath>
using namespace std;

void beamMoment(double, double); // function prototype

int main()
{
    double b = 2.0, h = 3.0;
    beamMoment(b, h);
    beamMoment(0.15, 0.25);

    return 0;
}

void beamMoment(double base, double height)
{
    cout << "The moment of a beam with base " << base
         << " and height " << height << " is "
         << base * pow(height, 3) / 12.0 << endl;
    return;
}