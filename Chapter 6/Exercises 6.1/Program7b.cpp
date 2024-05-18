#include <iostream>
#include <cmath>
using namespace std;

void buoyantForce(double, double, int); // function prototype

int main()
{
    double r = 998, v = 0.005;

    buoyantForce(r, v, 2);
    buoyantForce(r, 0.4, 2);
    buoyantForce(912, v, 2);
    buoyantForce(912, 0.4, 2);
    buoyantForce(13600, v, 2);
    buoyantForce(13600, 0.4, 2);

    buoyantForce(1.936, 0.125, 1);
    buoyantForce(1.936, 8.0, 1);
    buoyantForce(1.77, 0.125, 1);
    buoyantForce(1.77, 8.0, 1);
    buoyantForce(26.3, 0.125, 1);
    buoyantForce(26.3, 8.00, 1);

    return 0;
}

void buoyantForce(double ro, double vol, int units)
{
    double grav = 32.2; // for US Customary units

    if (units == 2)
        grav = 9.81;

    cout << "The buoyant force is " << ro * vol * grav << endl;

    return;
}