#include <iostream>
#include <cmath>
using namespace std;

void flow(double, double&, double&); // function prototype

const double MU = 190000.0;
const double P = 1.94;

int main()
{
    double lam, turb;
    double diameter = 456.3;
    flow(diameter, lam, turb);

    cout << "The laminar flow velocity is: " << lam << endl;
    cout << "The turbulent flow velocity is: " << turb << endl;

    return 0;
}

void flow(double diameter, double& lam, double& turb)
{
    lam = 2100 * MU / P * diameter;
    turb = 4000 * MU / P * diameter;

    return;
}