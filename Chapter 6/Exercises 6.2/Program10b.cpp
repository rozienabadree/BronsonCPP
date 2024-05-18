#include <iostream>
#include <cmath>
using namespace std;

double cLoad(double, double, double, double); // function prototype
double pi();

int main()
{
    double l;
    l = cLoad(26.3, 80.1, 100.0, 216.124);

    cout << "The load is: " << l << endl;

    return 0;
}

double cLoad(double el, double area, double len, double radius)
{
    double load, p;
    p = pi();
    load = pow(p, 2) * el * area / pow((len / radius), 2);
    return load;
}

double pi()
{
    return (2.0 * asin(1.0));
}