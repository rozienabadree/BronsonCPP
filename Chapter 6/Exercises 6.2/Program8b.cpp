#include <iostream>
#include <iomanip> // needed for formatting
#include <cmath>
using namespace std;

double headLoss(double, double, double, double);

int main()
{

    double l, d, v, cf;

    cout << "Enter the pipe's length (meters); ";
    cin >> l;
    cout << "Enter the pipe's diameter (meters); ";
    cin >> d;
    cout << "Enter the water's velocity (meters/sec): ";
    cin >> v;
    cout << "Enter the pipe's coefficient of friction: ";
    cin >> cf;

    cout << "The head loss is " << setiosflags(ios::fixed)
         << setprecision(2) << headLoss(l, d, v, cf) << " meters." << endl;

    return 0;
}

double headLoss(double len, double diam, double velocity, double coefFriction)
{
    const double GRAV = 9.81;

    return (0.5 * coefFriction * (len / diam) * (pow(velocity, 2) / GRAV));
}