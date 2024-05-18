#include <iomanip>
#include <iostream>
using namespace std;

void cylinder(double r, double l, double& volume, double& surfaceArea); // function prototype

int main()
{
    double radius, length, volume, surfaceArea;

    cout << "Enter a value for the radius and length of the cylinder: ";
    cin >> radius >> length;

    cylinder(radius, length, volume, surfaceArea);

    cout << setw(6) << fixed << setprecision(2);
    cout << "The volume is " << volume << " and the surface area is " << surfaceArea;

    return 0;
}

void cylinder(double radius, double length, double& volume, double& surfaceArea)
{
    volume = 3.1416 * radius * radius * length;
    surfaceArea = 2 * 3.1416 * radius * length;

    return;
}