#include <iostream>
#include <cmath>
using namespace std;

double surfarea(double, double);

int main()
{
    double rad;
    double length;

    cout << "Enter the radius: ";
    cin >> rad;

    cout << "Enter the length: ";
    cin >> length;

    cout << "The side surface area is: "
         << surfarea(rad, length) << endl;

    return 0;
}

double surfarea(double radius, double length)
{
    double pi();
    return pi() * 2 * radius * length;
}

double pi()
{
    return (2.0 * asin(1.0));
}