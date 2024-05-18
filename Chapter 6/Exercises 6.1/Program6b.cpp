#include <iostream>
#include <cmath>
using namespace std;

void torque(double, double, double); // function prototype

int main()
{
    double r = 1.5, F = 5.0, a = 30.0; // the sin(30 deg) = 0.5

    torque(r, F, a);
    torque(2.0, 1.5, 90.0); // the sine(90 deg) = 1.0

    cin.ignore(); // needed for MS C++ Express users
    return 0;
}

void torque(double dist, double force, double angle)
{
    const double CONVERT = 3.1416 / 180.0;

    cout << "The torque is "
         << dist * force * sin(angle * CONVERT) << endl;

    return;
}