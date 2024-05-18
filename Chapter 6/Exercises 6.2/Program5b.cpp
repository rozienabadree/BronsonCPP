#include <iostream>
#include <cmath>
using namespace std;

double cylvol(double, double);

int main()
{
    double rad, len;
    cout << "Enter the radius: ";
    cin >> rad;
    cout << "Enter the length: ";
    cin >> len;

    cout << "The volume is: "
         << cylvol(rad, len) << endl;

    return 0;
}

double cylvol(double radius, double length)
{
    double pi();
    return pi() * radius * radius * length;
}

double pi()
{
    return (2.0 * asin(1.0));
}